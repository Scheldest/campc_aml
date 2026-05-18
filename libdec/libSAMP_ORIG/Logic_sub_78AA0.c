// ADDR: 0x794b8
// SYMBOL: sub_794B8
int sub_794B8()
{
  int v0; // r4
  _DWORD *v1; // r5
  _DWORD *v2; // r1
  char *v3; // r1
  __int64 v4; // kr00_8
  __int64 v5; // kr08_8
  __int64 v6; // kr10_8
  int v7; // r6
  int v8; // r0
  int v9; // r1
  float v10; // s16
  float *v11; // r1
  float v12; // s18
  float v13; // s20
  int v14; // r0
  __int64 v15; // kr18_8
  int v16; // r0
  int v18; // [sp+38h] [bp-170h]
  int v19; // [sp+44h] [bp-164h]
  double v20; // [sp+48h] [bp-160h] BYREF
  float v21; // [sp+50h] [bp-158h] BYREF
  int v22; // [sp+54h] [bp-154h] BYREF
  _BYTE v23[276]; // [sp+58h] [bp-150h] BYREF
  int v24; // [sp+16Ch] [bp-3Ch]

  v0 = sub_6C844();
  if ( !*(_DWORD *)(v0 + 8) )
  {
    v1 = (_DWORD *)operator new(0x2F0u);
    *v1 = &off_11056C;
    ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v1);
    *(_DWORD *)(v0 + 8) = v1;
  }
  v2 = *(_DWORD **)(dword_1A4434 + 944);
  if ( dword_1A4548 == 1 )
  {
    v3 = (char *)&unk_1176A0 + 572 * *(unsigned __int16 *)(*v2 + 5024) + 52 * dword_116D38;
    v4 = *((_QWORD *)v3 + 2);
    v18 = *((_DWORD *)v3 + 5);
    v5 = *((_QWORD *)v3 + 3);
    v19 = *((_DWORD *)v3 + 1);
    v6 = *((_QWORD *)v3 + 4);
    v7 = *((_DWORD *)v3 + 10);
    qword_1A4574 = *((_QWORD *)v3 + 1);
    qword_1A457C = v4;
    qword_1A4584 = v5;
    qword_116D3C = v6;
    dword_116D44 = v7;
    byte_1A458C = 1;
    sub_79824(
      dword_1A4434,
      1,
      dword_116D38,
      *(_DWORD *)v3,
      v19,
      qword_1A4574,
      HIDWORD(qword_1A4574),
      v4,
      v18,
      v5,
      HIDWORD(v5),
      v6,
      HIDWORD(v6),
      v7);
  }
  else if ( (unsigned __int16)dword_116D38 <= 0x3E8u )
  {
    v8 = *(_DWORD *)(v2[4] + 4 * (unsigned __int16)dword_116D38 + 1004);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 4);
      v10 = 0.0;
      if ( v9 )
      {
        v11 = *(float **)(v9 + 20);
        v12 = 0.0;
        v13 = 0.0;
        if ( v11 )
        {
          v13 = v11[14];
          v12 = v11[13];
          v10 = v11[12];
        }
      }
      else
      {
        v12 = 0.0;
        v13 = 0.0;
      }
      v21 = 0.0;
      v20 = 0.0;
      ((void (__fastcall *)(int, double *, char *, float *))((char *)&loc_1021EE + dword_1A4408 + 3))(
        v8,
        &v20,
        (char *)&v20 + 4,
        &v21);
      unk_1A4558 = LODWORD(v10);
      unk_1A455C = LODWORD(v12);
      unk_1A4560 = LODWORD(v13);
      dword_1A4570 = LODWORD(v21);
      byte_1A458C = 1;
      unk_1A4568 = *(_QWORD *)&v20;
      v14 = sub_86B90(v23);
      sub_86F46(v14);
      LOWORD(v22) = dword_116D38;
      sub_86D52(v23, &v22, 16, 1);
      v22 = 1;
      sub_86D52(v23, &v22, 32, 1);
      v22 = LODWORD(v10);
      sub_86D52(v23, &v22, 32, 1);
      v22 = LODWORD(v12);
      sub_86D52(v23, &v22, 32, 1);
      v22 = LODWORD(v13);
      sub_86D52(v23, &v22, 32, 1);
      v22 = LODWORD(v20);
      sub_86D52(v23, &v22, 32, 1);
      v22 = HIDWORD(v20);
      sub_86D52(v23, &v22, 32, 1);
      v22 = LODWORD(v21);
      sub_86D52(v23, &v22, 32, 1);
      _android_log_print(
        4,
        "SAMP_ORIG",
        "Player Obj: %d | Edited ID: %d | Pos X: %f | Pos Y: %f | Pos Z: %f | Rot X: %f | Rot Y: %f | Rot Z: %f",
        (unsigned __int8)byte_1A458D,
        dword_116D38,
        v10,
        v12,
        v13,
        *(float *)&v20,
        *((float *)&v20 + 1),
        v21);
      (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(dword_1A4434 + 528) + 108))(
        *(_DWORD *)(dword_1A4434 + 528),
        &unk_116E40,
        v23,
        1,
        8,
        0,
        0,
        -1,
        0xFFFF,
        0xFFFF,
        0);
      sub_86BF8(v23);
    }
  }
  v15 = *(_QWORD *)(dword_1A442C + 148);
  v16 = *(_DWORD *)(dword_1A442C + 156);
  *(_BYTE *)(HIDWORD(v15) + 8) = 0;
  *(_BYTE *)(v15 + 8) = 0;
  byte_1A44AD = 0;
  dword_1A454C = 0;
  *(_BYTE *)(v16 + 8) = 0;
  return v24;
}


// ======================================================================
