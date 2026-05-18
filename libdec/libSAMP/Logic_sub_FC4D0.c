// ADDR: 0xfc440
// SYMBOL: sub_FC440
int __fastcall sub_FC440(int a1, float a2, float a3, float a4)
{
  int v5; // r0
  int v6; // r6
  float *v7; // r5
  int v8; // r1
  bool v9; // zf
  float v11[9]; // [sp+4h] [bp-24h] BYREF

  v5 = dword_25DAE4;
  if ( dword_25DAE4 )
  {
    v11[2] = a4;
    v11[1] = a3;
    v11[0] = a2;
    if ( dword_25DAE4 >= 1 )
    {
      v6 = 0;
      v7 = (float *)&unk_25DAF8;
      do
      {
        v8 = *((_DWORD *)v7 - 4);
        v9 = v8 == -1;
        if ( v8 != -1 )
          v9 = v8 == a1;
        if ( v9 )
        {
          if ( sub_108938(v11, v7 - 3, v8 + 1) <= *v7 )
            return 1;
          v5 = dword_25DAE4;
        }
        ++v6;
        v7 += 5;
      }
      while ( v6 < v5 );
    }
  }
  return 0;
}


// ======================================================================
