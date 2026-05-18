// ADDR: 0x8c9d8
// SYMBOL: sub_8C9D8
int sub_8C9D8()
{
  int v0; // r6
  int result; // r0
  unsigned int *v2; // r4
  bool v3; // zf
  int v4; // r0
  float v5; // s4
  float v6; // s6
  int v7; // lr
  unsigned int v8; // r3
  unsigned int *v9; // r1
  unsigned int v10; // r2
  unsigned int v11; // r1
  int v12; // r3
  int v13; // r5
  int v14; // r12
  int v15; // r9
  int *i; // r8
  int v17; // r1
  int v18; // r4
  int v19; // r5
  int *j; // r6
  int v21; // t1
  float v22; // s2
  float v23; // s0

  v0 = dword_1ACF68;
  result = *(_DWORD *)(dword_1ACF68 + 6608);
  if ( !result )
  {
    v2 = (unsigned int *)(dword_1ACF68 + 6508);
    result = *(_DWORD *)(dword_1ACF68 + 6588);
    if ( !result )
    {
      result = *(_DWORD *)(dword_1ACF68 + 6836);
      v3 = result == 0;
      if ( result )
        v3 = *(_BYTE *)(result + 128) == 0;
      if ( v3 )
      {
        if ( *(_BYTE *)(dword_1ACF68 + 984) )
        {
          if ( *(_DWORD *)(dword_1ACF68 + 6580) )
          {
            sub_8C564(*(_DWORD *)(dword_1ACF68 + 6576));
            if ( *(_BYTE *)(v0 + 176) )
            {
              v4 = *(_DWORD *)(v0 + 6580);
              if ( !(*(unsigned __int8 *)(v4 + 8) << 31) )
              {
                v5 = *(float *)(v0 + 900);
                v6 = *(float *)(v4 + 12);
                if ( v5 < v6
                  || (v22 = *(float *)(v4 + 16), v23 = *(float *)(v0 + 904), v23 < v22)
                  || v5 >= (float)(v6 + *(float *)(v4 + 28))
                  || v23 >= (float)(v22
                                  + (float)((float)(*(float *)(dword_1ACF68 + 5460) + *(float *)(dword_1ACF68 + 5460))
                                          + (float)(*(float *)(dword_1ACF68 + 6348) * *(float *)(v4 + 628)))) )
                {
                  *(_DWORD *)(v0 + 6584) = 0;
                }
              }
            }
          }
          else if ( result && !sub_8CBC8() )
          {
            sub_8C628(0);
          }
        }
        result = *(unsigned __int8 *)(v0 + 985);
        if ( *(_BYTE *)(v0 + 985) )
        {
          result = dword_1ACF68;
          v7 = *(_DWORD *)(dword_1ACF68 + 6812);
          if ( v7 < 1 )
          {
LABEL_24:
            v10 = 0;
          }
          else
          {
            v8 = v7 + 1;
            v9 = (unsigned int *)(*(_DWORD *)(dword_1ACF68 + 6820) + 36 * v7 - 32);
            while ( 1 )
            {
              v10 = *v9;
              if ( *v9 )
              {
                if ( (*(_BYTE *)(v10 + 11) & 8) != 0 )
                  break;
              }
              --v8;
              v9 -= 9;
              if ( v8 <= 1 )
                goto LABEL_24;
            }
          }
          v11 = *v2;
          v12 = v10 == 0;
          if ( (int)*v2 >= 1 && v10 )
          {
            while ( 1 )
            {
              v13 = *(_DWORD *)(v2[2] - 4 + 4 * v11);
              if ( v13 == v10 )
                break;
              v12 |= v13 == v2[17];
              if ( v11 >= 2 )
              {
                --v11;
                result = v12 << 31;
                if ( !(v12 << 31) )
                  continue;
              }
              goto LABEL_30;
            }
            if ( v12 << 31 )
              v10 = v2[17];
          }
          else
          {
LABEL_30:
            result = v12 << 31;
            if ( v12 << 31 )
              v10 = v2[17];
          }
          if ( v7 )
          {
            if ( v10 && v7 >= 1 )
            {
              v14 = *(_DWORD *)(dword_1ACF68 + 6820);
              result = 0;
              v15 = 1;
              for ( i = (int *)(v14 + 40); ; i += 9 )
              {
                v17 = *(_DWORD *)(v14 + 36 * result + 4);
                if ( v17 && !(*(unsigned __int8 *)(v17 + 11) << 31) )
                {
                  v18 = 0;
                  v19 = v15;
                  for ( j = i; ; j += 9 )
                  {
                    if ( v17 )
                      v18 |= *(_DWORD *)(v17 + 764) == *(_DWORD *)(v10 + 764);
                    if ( v19 >= v7 || v18 << 31 )
                      break;
                    v21 = *j;
                    v17 = v21;
                    ++v19;
                  }
                  if ( !(v18 << 31) )
                    break;
                }
                ++result;
                ++v15;
                if ( result == v7 )
                  return result;
              }
            }
            else
            {
              result = 0;
            }
            if ( result < v7 )
              return sub_98854();
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x94e9c
// SYMBOL: sub_94E9C
int sub_94E9C(int a1, ...)
{
  int v3; // [sp+8h] [bp-Ch]
  va_list va; // [sp+1Ch] [bp+8h] BYREF

  va_start(va, a1);
  if ( *(_BYTE *)(dword_1ACF68 + 7449) )
    sub_9824C();
  else
    sub_9833C(0, 1);
  sub_A6270(a1, (int *)va);
  sub_94DC0();
  return v3;
}


// ======================================================================
// ADDR: 0x94f10
// SYMBOL: sub_94F10
int __fastcall sub_94F10(int *a1, int a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r1
  void *v7; // r0
  const void *v8; // r1
  int v9; // r8
  int v10; // r1
  int v11; // r0
  bool v12; // zf
  int v13; // r1
  int result; // r0
  int v15; // r6
  int i; // r5
  int v17; // r1

  v4 = *a1;
  if ( v4 == a1[1] )
  {
    v5 = v4 + 1;
    if ( v4 )
      v6 = v4 + v4 / 2;
    else
      v6 = 8;
    if ( v6 > v5 )
      v5 = v6;
    if ( v4 < v5 )
    {
      if ( dword_1ACF68 )
        ++*(_DWORD *)(dword_1ACF68 + 880);
      v7 = (void *)off_117248(4 * v5, dword_1ACF70);
      v8 = (const void *)a1[2];
      v9 = (int)v7;
      if ( v8 )
      {
        j_memcpy(v7, v8, 4 * *a1);
        v11 = a1[2];
        v12 = v11 == 0;
        if ( v11 )
        {
          v10 = dword_1ACF68;
          v12 = dword_1ACF68 == 0;
        }
        if ( !v12 )
          --*(_DWORD *)(v10 + 880);
        off_11724C(v11, dword_1ACF70);
      }
      v4 = *a1;
      a1[1] = v5;
      a1[2] = v9;
    }
  }
  *(_DWORD *)(a1[2] + 4 * v4) = a2;
  v13 = *(unsigned __int8 *)(a2 + 122);
  result = *a1 + 1;
  *a1 = result;
  if ( v13 )
  {
    v15 = *(_DWORD *)(a2 + 332);
    if ( v15 < 2 )
    {
      if ( v15 != 1 )
        return result;
    }
    else
    {
      qsort(*(void **)(a2 + 340), *(_DWORD *)(a2 + 332), 4u, (__compar_fn_t)sub_9AD0C);
    }
    for ( i = 0; i != v15; ++i )
    {
      v17 = *(_DWORD *)(*(_DWORD *)(a2 + 340) + 4 * i);
      result = *(unsigned __int8 *)(v17 + 122);
      if ( *(_BYTE *)(v17 + 122) )
        result = sub_94F10(a1);
    }
  }
  return result;
}


// ======================================================================
