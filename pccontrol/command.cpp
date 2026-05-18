#include "command.h"
#include "settings.h"
#include <stddef.h>

static bool EqualsIgnoreCase(const char* a, const char* b)
{
    if (!a || !b) return false;

    while (*a && *b)
    {
        char ca = *a;
        char cb = *b;

        if (ca >= 'A' && ca <= 'Z') ca = (char)(ca + ('a' - 'A'));
        if (cb >= 'A' && cb <= 'Z') cb = (char)(cb + ('a' - 'A'));
        if (ca != cb) return false;

        a++;
        b++;
    }

    return *a == '\0' && *b == '\0';
}

static const char* SkipSpaces(const char* text)
{
    while (text && (*text == ' ' || *text == '\t')) text++;
    return text;
}

static bool ReadCommandToken(const char*& text, char* out, size_t outSize)
{
    if (!text || !out || outSize == 0) return false;

    text = SkipSpaces(text);
    size_t len = 0;
    while (*text && *text != ' ' && *text != '\t')
    {
        if (len + 1 < outSize) out[len++] = *text;
        text++;
    }
    out[len] = '\0';

    return len > 0;
}

bool HandleLocalCommand(const char* text)
{
    char command[32];

    if (!ReadCommandToken(text, command, sizeof(command))) return false;

    if (EqualsIgnoreCase(command, "/dexmenu"))
    {
        TogglePCControlMenu();
        return true;
    }

    return false;
}
