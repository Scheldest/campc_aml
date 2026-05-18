#pragma once
#include <stdint.h>
#include "settings.h"

void RenderCustomWidgets();
bool HandleCustomWidgetTouch(int type, int fingerId, int x, int y);
bool HandleWidgetDragging(int type, int fingerId, int x, int y);

// State access for hooks
bool IsActionTouched(eWidgetAction action);
int GetActionReleaseFrames(eWidgetAction action);
void UpdateWidgetReleaseFrames();
void GetCustomAnalogValues(float& x, float& y);

int GetMacro2Timer();
