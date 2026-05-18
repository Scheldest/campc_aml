// ADDR: 0x113ba4
// SYMBOL: sub_113BA4
_DWORD *__fastcall sub_113BA4(int a1, float a2, float a3, float a4)
{
  float v4; // s2
  int v9; // r5
  int v10; // r6
  int v11; // r0
  float v12; // s20
  float v13; // s22
  _DWORD *result; // r0
  int v15; // r11
  _DWORD *v16; // t1
  void (__fastcall *v17)(float *, int, int *); // r3
  float v18; // s22
  float v19; // s24
  float v20; // s26
  float v21; // s4
  int v22; // [sp+Ch] [bp-84h] BYREF
  _BYTE v23[4]; // [sp+10h] [bp-80h] BYREF
  float v24; // [sp+14h] [bp-7Ch]
  _BYTE v25[4]; // [sp+18h] [bp-78h] BYREF
  float v26; // [sp+1Ch] [bp-74h]
  int v27; // [sp+20h] [bp-70h] BYREF
  float v28; // [sp+24h] [bp-6Ch]
  float v29; // [sp+28h] [bp-68h] BYREF
  float v30; // [sp+2Ch] [bp-64h]
  _DWORD v31[2]; // [sp+30h] [bp-60h] BYREF
  int v32; // [sp+38h] [bp-58h] BYREF
  _DWORD v33[21]; // [sp+3Ch] [bp-54h] BYREF

  v4 = 0.0;
  if ( a2 >= 1.0 )
    v4 = a2;
  v33[0] = 0;
  sub_113E38(v33, 4, 4, "%03.0f", v4);
  v9 = a1 - 24;
  v10 = (*(int (__fastcall **)(int, int))(*(_DWORD *)(a1 - 24) + 24))(a1 - 24, 1070386381);
  v11 = (*(int (__fastcall **)(int, int))(*(_DWORD *)(a1 - 24) + 24))(a1 - 24, 1083179008);
  sub_163C58(v10, v11);
  sub_163CA4(0);
  sub_163D1C(0);
  sub_163D80(3);
  v32 = -1056964609;
  sub_163C74(&v32);
  v31[0] = 0;
  v31[1] = 0;
  sub_163C40(v33, v31);
  (*(void (__fastcall **)(float *, int))(*(_DWORD *)(a1 - 24) + 20))(&v29, a1 - 24);
  v12 = v29;
  (*(void (__fastcall **)(int *, int))(*(_DWORD *)(a1 - 24) + 20))(&v27, a1 - 24);
  v13 = v28;
  (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)(a1 - 24) + 76))(v25, a1 - 24);
  sub_163D64(v12 * 0.5, v13 - (float)(v26 * a3), v31);
  v16 = *(_DWORD **)(a1 + 4);
  v15 = a1 + 4;
  result = v16;
  if ( v16 )
  {
    result = (_DWORD *)*result;
    if ( result )
    {
      v17 = *(void (__fastcall **)(float *, int, int *))(*(_DWORD *)v9 + 8);
      *(float *)&v27 = 512.0;
      v28 = 512.0;
      v17(&v29, v9, &v27);
      (*(void (__fastcall **)(int *, int))(*(_DWORD *)v9 + 20))(&v27, v9);
      v18 = *(float *)&v27;
      (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v9 + 20))(v25, v9);
      v19 = v26;
      v20 = v30;
      (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v9 + 76))(v23, v9);
      v21 = (float)(a2 * 0.016667) + -2.0;
      if ( v21 > 2.0 )
        v21 = 2.0;
      v22 = -1;
      return (_DWORD *)sub_163228(
                         v15,
                         COERCE_INT(v18 * 0.5),
                         COERCE_INT(v19 - (float)((float)(v20 * 0.5) - (float)(v24 * a4))),
                         SLODWORD(v29),
                         v30,
                         v21,
                         (int)&v22);
    }
  }
  return result;
}


// ======================================================================
