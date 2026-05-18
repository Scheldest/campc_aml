// ADDR: 0x1450c8
// SYMBOL: sub_1450C8
void __fastcall sub_1450C8(_DWORD *a1, int a2)
{
  _DWORD *v3; // r4
  int v4; // r1
  unsigned int v5; // r5
  int v6; // r6
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r11
  int *v10; // r0
  int *v11; // r10
  unsigned int v12; // r11
  int v13; // r6
  int v14; // r10
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // r1
  _BYTE *v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r2
  __int64 v22; // d16
  unsigned int v23; // r6
  unsigned int v24; // r6
  unsigned int v25; // r6
  unsigned int i; // r6
  unsigned int v27; // r5
  int v28; // [sp+4h] [bp-184h]
  _DWORD *v29; // [sp+8h] [bp-180h]
  int v30; // [sp+14h] [bp-174h]
  unsigned int v31; // [sp+1Ch] [bp-16Ch] BYREF
  void *v32[3]; // [sp+20h] [bp-168h] BYREF
  unsigned __int8 v33[8]; // [sp+2Ch] [bp-15Ch] BYREF
  void *v34; // [sp+34h] [bp-154h]
  int v35; // [sp+38h] [bp-150h] BYREF
  int v36; // [sp+3Ch] [bp-14Ch] BYREF
  void *v37; // [sp+40h] [bp-148h] BYREF
  __int16 v38; // [sp+CEh] [bp-BAh] BYREF
  unsigned int v39; // [sp+D0h] [bp-B8h] BYREF
  __int16 v40; // [sp+D4h] [bp-B4h] BYREF
  unsigned __int8 v41; // [sp+D7h] [bp-B1h] BYREF
  char v42[145]; // [sp+D8h] [bp-B0h] BYREF
  char v43; // [sp+169h] [bp-1Fh] BYREF
  _WORD v44[15]; // [sp+16Ah] [bp-1Eh] BYREF

  v3 = a1;
  sub_17D81C(a1);
  v44[0] = 0;
  sub_17D786((int)v3, (int)v44);
  v4 = a2 - 8;
  v5 = v44[0];
  v6 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
  v7 = v44[0] >> 4;
  v3[2] = v4;
  if ( v7 <= 0x7C && sub_F2396(v6, v5) )
  {
    v8 = *(_DWORD *)(v6 + 4 * v5);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 12);
      if ( v9 )
      {
        if ( *v3 > v3[2] )
        {
          v28 = v9 + 168;
          v29 = *(_DWORD **)(v8 + 12);
          v30 = (int)v3;
          while ( 1 )
          {
            sub_17D786((int)v3, (int)&v43);
            if ( *v3 <= v3[2] )
              return;
            switch ( v43 )
            {
              case 0:
                v10 = sub_F5428(**(_DWORD **)(v9 + 904));
                if ( v10 )
                {
                  v11 = v10;
                  sub_17D786((int)v3, (int)v33);
                  if ( v33[0] )
                  {
                    j_memcpy((char *)&unk_314324 + 224 * v44[0], v11, 0xE0u);
                    v12 = 0;
                    v13 = 0;
                    do
                    {
                      sub_17D786((int)v3, (int)v32);
                      v14 = LOBYTE(v32[0]);
                      v15 = sub_F427C((char)v32[0]);
                      *(_DWORD *)v42 = 0;
                      LOBYTE(v39) = 0;
                      v35 = 0;
                      switch ( v15 )
                      {
                        case 1:
                        case 4:
                          sub_17D786((int)v3, (int)&v35);
                          v16 = (_DWORD *)sub_F4298((int)&unk_314324 + 224 * v44[0], v14);
                          if ( v16 )
                          {
                            v17 = v35;
                            goto LABEL_17;
                          }
                          break;
                        case 2:
                          sub_17D786((int)v3, (int)v42);
                          v16 = (_DWORD *)sub_F4298((int)&unk_314324 + 224 * v44[0], v14);
                          if ( v16 )
                          {
                            v17 = *(_DWORD *)v42;
LABEL_17:
                            *v16 = v17;
                            goto LABEL_20;
                          }
                          break;
                        case 3:
                          sub_17D786((int)v3, (int)&v39);
                          v18 = (_BYTE *)sub_F4298((int)&unk_314324 + 224 * v44[0], v14);
                          if ( v18 )
                          {
                            *v18 = v39;
LABEL_20:
                            v13 = 1;
                          }
                          break;
                        default:
                          break;
                      }
                      ++v12;
                    }
                    while ( v12 < v33[0] );
                    v9 = (int)v29;
                    if ( v13 << 31 )
                    {
                      v19 = dword_23DF24;
                      v29[226] = (char *)&unk_314324 + 224 * v44[0];
                      ((void (__fastcall *)(_DWORD))(v19 + 5705049))(0);
                      v20 = v29[226];
                      v21 = *(_DWORD *)(v20 + 208);
                      v29[37] = *(_DWORD *)(v20 + 12);
                      v29[36] = *(_DWORD *)(v20 + 4);
                      v29[228] = v21;
                      v22 = *(_QWORD *)(v20 + 20);
                      *(_DWORD *)(v28 + 8) = *(_DWORD *)(v20 + 28);
                      *(_QWORD *)v28 = v22;
                    }
                    goto LABEL_50;
                  }
                }
                return;
              case 1:
                sub_17D786((int)v3, (int)v32);
                if ( LOBYTE(v32[0]) )
                {
                  v23 = 0;
                  do
                  {
                    sub_22178C((int)v42, 0x90u);
                    sub_17D786((int)v3, (int)v33);
                    sub_17D744((int)v3, v42);
                    sub_DC6DC(&v35, v42);
                    sub_F6376(v9, (unsigned __int8 *)&v35);
                    if ( (unsigned __int8)v35 << 31 )
                      operator delete(v37);
                    ++v23;
                  }
                  while ( v23 < LOBYTE(v32[0]) );
                  goto LABEL_50;
                }
                sub_F630C(v9);
                return;
              case 2:
                sub_17D786((int)v3, (int)&v31);
                if ( (_BYTE)v31 )
                {
                  v24 = 0;
                  do
                  {
                    sub_22178C((int)v42, 0x90u);
                    sub_17D786((int)v3, (int)&v39);
                    sub_17D744((int)v3, v42);
                    sub_17D786((int)v3, (int)&v35);
                    sub_17D786((int)v3, (int)&v36);
                    sub_17D786((int)v3, (int)&v37);
                    sub_17D786((int)v3, (int)v32);
                    sub_DC6DC(v33, v42);
                    sub_F6412(v9, v33, (int)&v35, v32);
                    if ( v33[0] << 31 )
                      operator delete(v34);
                    ++v24;
                  }
                  while ( v24 < (unsigned __int8)v31 );
                }
                goto LABEL_50;
              case 3:
                sub_17D786((int)v3, (int)v32);
                if ( !LOBYTE(v32[0]) )
                {
                  sub_F6BA4(v9);
                  return;
                }
                v25 = 0;
                do
                {
                  sub_22178C((int)v42, 0x90u);
                  sub_17D786((int)v3, (int)v33);
                  sub_17D744((int)v3, v42);
                  sub_DC6DC(&v35, v42);
                  sub_F6C08(v9, (unsigned __int8 *)&v35);
                  if ( (unsigned __int8)v35 << 31 )
                    operator delete(v37);
                  ++v25;
                }
                while ( v25 < LOBYTE(v32[0]) );
LABEL_50:
                if ( *v3 <= v3[2] )
                  return;
                break;
              case 4:
                sub_17D786((int)v3, (int)&v41);
                if ( v41 )
                {
                  for ( i = 0; i < v41; ++i )
                  {
                    sub_22178C((int)v42, 0x90u);
                    sub_17D786(v30, (int)&v40);
                    sub_17D744(v30, v42);
                    sub_17D786(v30, (int)&v39);
                    sub_22178C((int)&v35, 0x90u);
                    sub_17D786(v30, (int)&v38);
                    sub_17D744(v30, &v35);
                    v27 = v39;
                    sub_DC6DC(v33, v42);
                    sub_DC6DC(v32, (char *)&v35);
                    v31 = bswap32(v27);
                    sub_F6F04(v9, v33, v32, &v31);
                    if ( LOBYTE(v32[0]) << 31 )
                      operator delete(v32[2]);
                    if ( v33[0] << 31 )
                      operator delete(v34);
                  }
                }
                v3 = (_DWORD *)v30;
                goto LABEL_50;
              default:
                goto LABEL_50;
            }
          }
        }
      }
    }
  }
}


// ======================================================================
// ADDR: 0x14ff40
// SYMBOL: sub_14FF40
bool __fastcall sub_14FF40(int *a1, unsigned __int16 *a2)
{
  unsigned int v3; // r1
  float *v4; // r11
  int v6; // r4
  _DWORD *v7; // r6
  int v8; // r1
  int v9; // r2
  bool v10; // zf
  _DWORD *v11; // r1
  _DWORD *v12; // r2
  int v13; // r0
  unsigned int v14; // r2
  int *v15; // r3
  int v16; // r0
  __int64 v17; // d16
  int v18; // r2
  int v19; // r0
  char *v20; // r1
  int v22[8]; // [sp+30h] [bp-20h] BYREF

  v4 = (float *)(a2 + 3);
  v3 = *a2;
  if ( a1[v3] )
  {
    sub_14FEB6((int)a1, v3);
    v3 = *a2;
  }
  _android_log_print(
    4,
    "AXL",
    "Create vehicle %d (id %d) at %.1f %.1f %.1f with rotation %.1f, hp %.1f",
    *(_DWORD *)(a2 + 1),
    v3,
    *v4,
    v4[1],
    v4[2],
    v4[3],
    *((float *)a2 + 6));
  v6 = *((unsigned __int8 *)a2 + 39);
  if ( *((_BYTE *)a2 + 39) )
    v6 = 1;
  v7 = (_DWORD *)sub_F9F1C(dword_23DEF0, *(_DWORD *)(a2 + 1), *(_DWORD *)v4, *((_DWORD *)v4 + 1), v4[2], v4[3], v6);
  _android_log_print(4, "AXL", "New vehicle (id: %d) pointer: %p", *a2, v7);
  if ( v7 )
  {
    v8 = *((unsigned __int8 *)a2 + 22);
    v9 = *((unsigned __int8 *)a2 + 23);
    v10 = v8 == 255;
    a1[*a2] = (int)v7;
    if ( v8 == 255 )
      v10 = v9 == 255;
    if ( !v10 )
      sub_109BC8((int)v7, v8, v9);
    sub_109AD0((int)v7, *((_DWORD *)a2 + 6));
    a1[*a2 + 2000] = v7[3];
    v11 = (_DWORD *)a1[15001];
    v12 = (_DWORD *)a1[15000];
    v13 = *a2;
    if ( v12 != v11 )
    {
      while ( *v12 != v13 )
      {
        if ( ++v12 == v11 )
          goto LABEL_15;
      }
    }
    if ( v12 == v11 )
    {
LABEL_15:
      v14 = a1[15002];
      v22[0] = *a2;
      if ( (unsigned int)v11 >= v14 )
      {
        sub_147CA8(a1 + 15000, v22);
        v13 = *a2;
      }
      else
      {
        *v11 = v13;
        a1[15001] = (int)(v11 + 1);
      }
    }
    v15 = &a1[3 * v13];
    v16 = *(_DWORD *)(v7[3] + 20);
    v15[4000] = *(_DWORD *)v4;
    v15[4001] = *((_DWORD *)v4 + 1);
    v15[4002] = *((_DWORD *)v4 + 2);
    if ( v16 )
    {
      v17 = *(_QWORD *)v4;
      *(float *)(v16 + 56) = v4[2];
      *(_QWORD *)(v16 + 48) = v17;
    }
    if ( *((_BYTE *)a2 + 28) )
      sub_109C04(v7, *((unsigned __int8 *)a2 + 28));
    v18 = *(_DWORD *)((char *)a2 + 29);
    if ( !*(_QWORD *)((char *)a2 + 29) )
    {
      if ( !*((_BYTE *)a2 + 37) )
      {
LABEL_26:
        sub_109CC0((int)v7, *((_BYTE *)a2 + 38));
        v19 = *a2;
        v20 = (char *)a1 + v19;
        v20[40000] = 1;
        v20[42000] = 0;
        a1[v19 + 11000] = 0;
        return v7 != 0;
      }
      v18 = 0;
    }
    sub_109C28((int)v7, *(_DWORD *)((char *)a2 + 33), v18, *((unsigned __int8 *)a2 + 37));
    goto LABEL_26;
  }
  return v7 != 0;
}


// ======================================================================
