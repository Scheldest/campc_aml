// ADDR: 0x65c20
// SYMBOL: sub_65C20
int __fastcall sub_65C20(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        __int64 a12,
        __int64 a13,
        int a14)
{
  int v18; // r0
  _DWORD *v19; // r0
  bool v20; // zf
  unsigned int v21; // r5
  unsigned int v22; // r12
  unsigned int v23; // lr
  char *v24; // r1
  int v25; // r0
  _DWORD *v26; // r9
  char *v27; // r0
  bool v28; // zf
  char *v29; // r1
  int v30; // r0
  _DWORD *v31; // r6
  char *v32; // r0
  char *v33; // r1
  int v35; // r9
  char *v36; // r10
  char *v37; // r1
  _DWORD *v38; // r5
  _DWORD *v39; // r0
  int v40; // [sp+1Ch] [bp-64h]
  int v41; // [sp+20h] [bp-60h]
  _BYTE *v42; // [sp+24h] [bp-5Ch]
  int v43; // [sp+60h] [bp-20h]

  if ( *(_DWORD *)(a1 + 92) )
  {
    v18 = sub_685E0(*(_DWORD *)(a1 + 8));
    if ( a4 <= 9 )
    {
      if ( v18 )
      {
        if ( a3 )
        {
          v19 = **(_DWORD ***)(a1 + 92);
          v20 = v19 == (_DWORD *)(dword_1A4404 + 6716708);
          if ( v19 != (_DWORD *)(dword_1A4404 + 6716708) )
          {
            v19 = *(_DWORD **)(a1 + 4);
            v20 = v19 == 0;
          }
          if ( !v20 && a6 - 1 <= 0x11 && v19[6] )
          {
            v21 = a10;
            v22 = a9;
            v23 = a5;
            v42 = (char *)&unk_1176A0 + 572 * a2 + a4 + 520;
            if ( *v42 )
            {
              v24 = (char *)&unk_1176A0 + 572 * a2 + 4 * a4;
              v25 = *((_DWORD *)v24 + 133);
              if ( v25 )
              {
                v26 = v24 + 532;
                (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 4))(v25);
                v23 = a5;
                v21 = a10;
                v22 = a9;
                *v26 = 0;
              }
              v27 = (char *)&unk_1176A0 + 572 * a2 + 52 * a4;
              *(_QWORD *)v27 = 0LL;
              *((_QWORD *)v27 + 1) = 0LL;
              v27 += 16;
              *(_QWORD *)v27 = 0LL;
              *((_QWORD *)v27 + 1) = 0LL;
              v27 += 16;
              *(_QWORD *)v27 = 0LL;
              *((_QWORD *)v27 + 1) = 0LL;
              *((_DWORD *)v27 + 4) = 0;
              v19 = *(_DWORD **)(a1 + 4);
              *v42 = 0;
            }
            v28 = v19 == 0;
            if ( v19 )
            {
              v19 = (_DWORD *)v19[5];
              v28 = v19 == 0;
            }
            if ( v28 )
            {
              v35 = 0;
              v41 = 0;
              v40 = 0;
            }
            else
            {
              v35 = v19[14];
              v41 = v19[12];
              v40 = v19[13];
            }
            v36 = (char *)&unk_1176A0 + 572 * a2;
            v37 = &v36[52 * a4];
            *(_QWORD *)v37 = __PAIR64__(a6, v23);
            *((_QWORD *)v37 + 1) = a7;
            v37 += 16;
            *(_QWORD *)v37 = __PAIR64__(v22, a8);
            *((_QWORD *)v37 + 1) = __PAIR64__(a11, v21);
            v37 += 16;
            *(_QWORD *)v37 = a12;
            *((_QWORD *)v37 + 1) = a13;
            *((_DWORD *)v37 + 4) = a14;
            v38 = (_DWORD *)operator new(0x4A0u);
            *v38 = &off_110590;
            ((void (__fastcall *)(_DWORD *, unsigned int, int, int, int, unsigned int, unsigned int, unsigned int, int, int))((char *)&loc_101808 + dword_1A4408))(
              v38,
              a5,
              v41,
              v40,
              v35,
              a9,
              a10,
              a11,
              1128792064,
              1);
            v39 = (_DWORD *)v38[1];
            *(_DWORD *)&v36[4 * a4 + 532] = v38;
            if ( v39 && *v39 != dword_1A4404 + 6716708 )
              v39[7] = 402653346;
            *v42 = 1;
          }
        }
        else
        {
          v29 = (char *)&unk_1176A0 + 572 * a2 + 4 * a4;
          v30 = *((_DWORD *)v29 + 133);
          if ( v30 )
          {
            v31 = v29 + 532;
            (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 4))(v30);
            *v31 = 0;
          }
          v32 = (char *)&unk_1176A0 + 572 * a2;
          v33 = &v32[52 * a4];
          *(_QWORD *)v33 = 0LL;
          *((_QWORD *)v33 + 1) = 0LL;
          v33 += 16;
          *(_QWORD *)v33 = 0LL;
          *((_QWORD *)v33 + 1) = 0LL;
          v33 += 16;
          *(_QWORD *)v33 = 0LL;
          *((_QWORD *)v33 + 1) = 0LL;
          *((_DWORD *)v33 + 4) = 0;
          v32[a4 + 520] = 0;
        }
      }
    }
  }
  return v43;
}


// ======================================================================
