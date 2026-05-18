// ADDR: 0x139624
// SYMBOL: sub_139624
void __fastcall sub_139624(int *a1)
{
  unsigned int v2; // r0
  int *v3; // r0
  __int64 v4; // kr00_8
  int v5; // r0
  unsigned int v6; // r5
  unsigned int v7; // r6
  int v8; // r5
  int v9; // r6
  __int64 v10; // kr08_8
  void *v11; // r0
  int v12; // r2
  int v13; // r3
  __int64 v14; // kr10_8
  int v15; // [sp+0h] [bp-28h] BYREF
  int v16; // [sp+4h] [bp-24h] BYREF
  int v17; // [sp+8h] [bp-20h]
  __int64 v18; // [sp+Ch] [bp-1Ch]
  int *v19; // [sp+14h] [bp-14h]

  v2 = a1[4];
  if ( v2 >= 0xAA )
  {
    a1[4] = v2 - 170;
LABEL_3:
    v3 = (int *)a1[1];
    v16 = *v3;
    a1[1] = (int)(v3 + 1);
    sub_139754(a1, &v16);
    return;
  }
  v4 = *((_QWORD *)a1 + 1);
  v5 = HIDWORD(v4) - *a1;
  v6 = ((int)v4 - a1[1]) >> 2;
  if ( v6 >= v5 >> 2 )
  {
    v7 = v5 >> 1;
    v19 = a1 + 3;
    if ( !v5 )
      v7 = 1;
    if ( v7 >= 0x40000000 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    v16 = operator new(4 * v7);
    LODWORD(v18) = v16 + 4 * v6;
    HIDWORD(v18) = v16 + 4 * v7;
    v17 = v18;
    v15 = operator new(0xFF0u);
    sub_1399E0(&v16, &v15);
    v8 = a1[2];
    v9 = v8 + 4;
    while ( v8 != a1[1] )
    {
      v9 -= 4;
      v8 -= 4;
      sub_139AB8(&v16, v8);
    }
    v10 = *((_QWORD *)a1 + 1);
    v11 = (void *)*a1;
    v12 = v16;
    v13 = v17;
    v14 = v18;
    v16 = *a1;
    v17 = v8;
    *a1 = v12;
    a1[1] = v13;
    *((_QWORD *)a1 + 1) = v14;
    v18 = v10;
    if ( v8 != (_DWORD)v10 )
      LODWORD(v18) = v10 + 4 * ~((unsigned int)(v10 - v9) >> 2);
    if ( v11 )
      operator delete(v11);
  }
  else
  {
    if ( HIDWORD(v4) == (_DWORD)v4 )
    {
      v16 = operator new(0xFF0u);
      sub_139904(a1, &v16);
      goto LABEL_3;
    }
    v16 = operator new(0xFF0u);
    sub_13982C(a1, &v16);
  }
}


// ======================================================================
