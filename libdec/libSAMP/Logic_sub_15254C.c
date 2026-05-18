// ADDR: 0x150c2a
// SYMBOL: sub_150C2A
int __fastcall sub_150C2A(int a1, __int16 a2)
{
  __int16 v3; // [sp+6h] [bp-Ah] BYREF

  v3 = a2;
  return sub_1515B4(a1 + 16, &v3);
}


// ======================================================================
// ADDR: 0x152f4e
// SYMBOL: sub_152F4E
int __fastcall sub_152F4E(int a1, int *a2)
{
  int v2; // r4
  _DWORD *v3; // r5
  int v4; // r0
  void *v6; // [sp+4h] [bp-14h] BYREF
  char v7; // [sp+Ch] [bp-Ch]

  v2 = *a2;
  sub_152F88(&v6, a1);
  v3 = v6;
  v6 = 0;
  if ( v3 )
  {
    if ( v7 )
    {
      v4 = v3[3];
      v3[3] = 0;
      if ( v4 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    }
    operator delete(v3);
  }
  return v2;
}


// ======================================================================
// ADDR: 0x1530e6
// SYMBOL: sub_1530E6
int __fastcall sub_1530E6(int a1, int a2)
{
  int v3; // r0

  v3 = sub_153102(a1, a2);
  if ( !v3 )
    return 0;
  sub_1531A8(a1, v3);
  return 1;
}


// ======================================================================
// ADDR: 0x153720
// SYMBOL: sub_153720
int **__fastcall sub_153720(_DWORD *a1, unsigned __int16 *a2)
{
  unsigned int v2; // r4
  unsigned int v4; // r5
  unsigned int v5; // r0
  unsigned int v6; // r9
  int v7; // r8
  int v8; // r1
  int ***v9; // r0
  int **i; // r6
  unsigned int v11; // r0
  unsigned int v12; // r1

  v2 = a1[1];
  if ( v2 )
  {
    v4 = *a2;
    v5 = ((v2 - ((v2 >> 1) & 0x55555555)) & 0x33333333) + (((v2 - ((v2 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v6 = (16843009 * ((v5 + (v5 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v6 > 1 )
    {
      if ( v2 <= v4 )
      {
        sub_221798(v4, v2);
        v7 = v8;
      }
      else
      {
        v7 = *a2;
      }
    }
    else
    {
      v7 = (v2 - 1) & v4;
    }
    v9 = *(int ****)(*a1 + 4 * v7);
    if ( v9 )
    {
      for ( i = *v9; i; i = (int **)*i )
      {
        v11 = (unsigned int)i[1];
        if ( v11 == v4 )
        {
          if ( *((unsigned __int16 *)i + 4) == v4 )
            return i;
        }
        else
        {
          if ( v6 > 1 )
          {
            if ( v11 >= v2 )
            {
              sub_221798(v11, v2);
              v11 = v12;
            }
          }
          else
          {
            v11 &= v2 - 1;
          }
          if ( v11 != v7 )
            return 0;
        }
      }
    }
  }
  return 0;
}


// ======================================================================
