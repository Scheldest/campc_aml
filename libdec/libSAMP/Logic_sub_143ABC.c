// ADDR: 0x133038
// SYMBOL: sub_133038
_DWORD *__fastcall sub_133038(int a1, int a2)
{
  int v4; // r9
  const void **v5; // r4
  int v6; // r0
  int v7; // r6
  _DWORD *result; // r0

  v4 = 0;
  while ( 1 )
  {
    v5 = *(const void ***)(*(_DWORD *)(a1 + 4 * v4 + 108) + 68);
    v6 = *(_DWORD *)(*(_DWORD *)(a1 + 4 * v4 + 108) + 72) - (_DWORD)v5;
    if ( v6 >= 1 )
      break;
LABEL_8:
    if ( ++v4 == 3 )
      return 0;
  }
  v7 = 1;
  if ( (unsigned int)v6 >> 2 > 1 )
    v7 = (unsigned int)v6 >> 2;
  while ( 1 )
  {
    if ( *v5 )
    {
      result = j___dynamic_cast(
                 *v5,
                 (const struct __class_type_info *)&`typeinfo for'Widget,
                 (const struct __class_type_info *)&`typeinfo for'KeyboardLayout::Row::Bind,
                 0);
      if ( result[28] == a2 )
        return result;
    }
    ++v5;
    if ( !--v7 )
      goto LABEL_8;
  }
}


// ======================================================================
// ADDR: 0x1330a8
// SYMBOL: sub_1330A8
int __fastcall sub_1330A8(int a1)
{
  int *v2; // r9
  int *v3; // r4
  int v4; // r1
  int v5; // r0
  int v6; // r5
  int v7; // r0
  float v9[12]; // [sp+0h] [bp-30h] BYREF

  v2 = (int *)(a1 + 124);
  v3 = (int *)(a1 + 108);
  do
  {
    v4 = *v3;
    v5 = *(_DWORD *)(*v3 + 68);
    if ( *(_DWORD *)(*v3 + 72) - v5 >= 1 )
    {
      v6 = 0;
      do
      {
        v7 = *(_DWORD *)(v5 + 4 * v6);
        if ( v7 )
        {
          v9[0] = 0.0;
          v9[1] = 0.0;
          *(_QWORD *)(v7 + 28) = 0x7F7FFFFF7F7FFFFFLL;
          *(_QWORD *)(v7 + 36) = 0LL;
          sub_12BD38((float *)v7, v9);
          v4 = *v3;
        }
        v5 = *(_DWORD *)(v4 + 68);
        ++v6;
      }
      while ( v6 < (*(_DWORD *)(v4 + 72) - v5) >> 2 );
    }
    ++v3;
  }
  while ( v3 != v2 );
  return sub_13D758(a1);
}


// ======================================================================
// ADDR: 0x17c370
// SYMBOL: sub_17C370
void __fastcall sub_17C370(int a1, int a2, unsigned __int8 *a3)
{
  int v4; // r0
  int v5; // r4
  unsigned int v6; // r0
  unsigned __int8 *v7; // r1
  int v8; // r2
  int v9; // r1
  int v10; // r5
  char *v11; // r0
  int v12; // r3
  int v13; // [sp+4h] [bp-24h] BYREF
  int v14; // [sp+8h] [bp-20h]
  void *v15; // [sp+Ch] [bp-1Ch]

  v4 = sub_17C080();
  if ( v4 )
  {
    v5 = v4;
    v6 = *a3;
    v7 = (unsigned __int8 *)*((_DWORD *)a3 + 2);
    v8 = *((_DWORD *)a3 + 1);
    if ( (v6 & 1) == 0 )
    {
      v7 = a3 + 1;
      v8 = v6 >> 1;
    }
    sub_164D04(&v13, v7, v8);
    v9 = v14;
    if ( !((unsigned __int8)v13 << 31) )
      v9 = (unsigned __int8)v13 >> 1;
    v10 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 704))(v5, v9);
    v12 = v14;
    v11 = (char *)v15;
    if ( (v13 & 1) == 0 )
    {
      v11 = (char *)&v13 + 1;
      v12 = (unsigned __int8)v13 >> 1;
    }
    (*(void (__fastcall **)(int, int, _DWORD, int, char *))(*(_DWORD *)v5 + 832))(v5, v10, 0, v12, v11);
    sub_17C1B8(v5);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 912))(v5) )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 64))(v5);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 68))(v5);
    }
    if ( (unsigned __int8)v13 << 31 )
      operator delete(v15);
  }
  else
  {
    sub_2242C8(4, "AXL", "Env not loaded. (SetBinderName)");
  }
}


// ======================================================================
