// ADDR: 0xf9b1c
// SYMBOL: sub_F9B1C
int __fastcall sub_F9B1C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  return sub_107188(&unk_B2D54, 0, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}


// ======================================================================
// ADDR: 0x104854
// SYMBOL: sub_104854
int __fastcall sub_104854(int a1)
{
  return ((int (__fastcall *)(_DWORD))(dword_23DF24 + 4994885))(*(_DWORD *)(a1 + 92));
}


// ======================================================================
// ADDR: 0x104870
// SYMBOL: sub_104870
int __fastcall sub_104870(int a1, float *a2, float a3)
{
  return sub_107188(
           &unk_B373A,
           0,
           COERCE_UNSIGNED_INT64(*a2),
           HIDWORD(COERCE_UNSIGNED_INT64(*a2)),
           COERCE_UNSIGNED_INT64(a2[1]),
           HIDWORD(COERCE_UNSIGNED_INT64(a2[1])),
           COERCE_UNSIGNED_INT64(a2[2]),
           HIDWORD(COERCE_UNSIGNED_INT64(a2[2])),
           COERCE_UNSIGNED_INT64(a3),
           HIDWORD(COERCE_UNSIGNED_INT64(a3)),
           0);
}


// ======================================================================
// ADDR: 0x1048bc
// SYMBOL: sub_1048BC
_DWORD *__fastcall sub_1048BC(int a1)
{
  _DWORD *result; // r0
  int v3; // r8
  bool v4; // zf
  int v5; // r1
  _DWORD v6[4]; // [sp+0h] [bp-28h] BYREF
  _DWORD *v7; // [sp+10h] [bp-18h]

  result = *(_DWORD **)(a1 + 92);
  if ( result )
  {
    v3 = *(_DWORD *)dword_2402E4;
    *(_DWORD *)dword_2402E4 = *(unsigned __int8 *)(a1 + 96);
    v6[1] = a1;
    v6[0] = &off_22B158;
    v7 = v6;
    ((void (__fastcall *)(_DWORD *, int))(dword_23DF24 + 4847559))(result, dword_23DF24 + 4847559);
    result = v7;
    v4 = v6 == v7;
    *(_DWORD *)dword_2402E4 = v3;
    if ( v4 )
    {
      v5 = 4;
    }
    else
    {
      if ( !result )
        return result;
      v5 = 5;
    }
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, _DWORD))(*result + 4 * v5))(result, *(_DWORD *)(*result + 4 * v5));
  }
  return result;
}


// ======================================================================
// ADDR: 0x104950
// SYMBOL: sub_104950
int *__fastcall sub_104950(int a1, int a2, int a3)
{
  int *result; // r0
  int v6; // r6
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r0
  int v15; // r6
  bool v16; // zf
  int v17; // r1
  int v18; // [sp+0h] [bp-38h]
  int v19; // [sp+0h] [bp-38h]
  int v20; // [sp+4h] [bp-34h]
  int v21; // [sp+4h] [bp-34h]
  _UNKNOWN **v22; // [sp+8h] [bp-30h] BYREF
  int v23; // [sp+Ch] [bp-2Ch]
  int *v24; // [sp+10h] [bp-28h]
  int *v25; // [sp+14h] [bp-24h]
  int *v26; // [sp+18h] [bp-20h]
  int v27; // [sp+20h] [bp-18h] BYREF
  int v28; // [sp+24h] [bp-14h] BYREF

  result = *(int **)(a1 + 92);
  v27 = a3;
  v28 = a2;
  if ( result )
  {
    result = (int *)sub_1082F4(*(_DWORD *)(a1 + 8));
    if ( result )
    {
      v6 = sub_108D64(a2);
      result = (int *)(v6 + 1);
      if ( v6 != -1 )
      {
        if ( sub_F9C94(v6)
          || (v10 = sub_F9CBC(v6, v7, v8, v9, v18, v20, (int)v22, v23, (int)v24, (int)v25, (int)v26),
              sub_F9CCC(v10, v11, v12, v13, v19, v21, (int)v22, v23, (int)v24, (int)v25, (int)v26),
              sub_F9CD8(v6, 200)) )
        {
          v25 = &v27;
          v23 = a1;
          v24 = &v28;
          v14 = *(unsigned __int8 *)(a1 + 96);
          v26 = (int *)&v22;
          v15 = *(_DWORD *)dword_2402E4;
          *(_DWORD *)dword_2402E4 = v14;
          v22 = &off_22B198;
          sub_106F5C(&v22);
          result = v26;
          v16 = &v22 == (_UNKNOWN ***)v26;
          *(_DWORD *)dword_2402E4 = v15;
          if ( v16 )
          {
            v17 = 4;
          }
          else
          {
            if ( !result )
              return result;
            v17 = 5;
          }
          return (int *)(*(int (**)(void))(*result + 4 * v17))();
        }
        else
        {
          return (int *)_android_log_print(5, "AXL", "Can't load model %d for weapon %d", v6, a2);
        }
      }
    }
  }
  return result;
}


// ======================================================================
