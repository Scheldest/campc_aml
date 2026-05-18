// ADDR: 0x105540
// SYMBOL: sub_105540
_DWORD *__fastcall sub_105540(int a1, unsigned int a2, _DWORD *a3)
{
  _DWORD *result; // r0
  int v7; // r8
  int v8; // r0
  int *v9; // r5
  int v10; // r1
  _BYTE *v11; // [sp+18h] [bp-60h]
  _DWORD v12[23]; // [sp+1Ch] [bp-5Ch] BYREF

  result = *(_DWORD **)(a1 + 92);
  if ( result )
  {
    if ( *result != dword_23DF24 + 6716708 && a2 <= 9 )
    {
      result = (_DWORD *)result[6];
      if ( result )
      {
        result = (_DWORD *)(a3[1] - 1);
        if ( (unsigned int)result <= 0x11 )
        {
          v11 = (_BYTE *)(a1 + a2 + 116);
          if ( *v11 )
            sub_105640(a1, a2);
          sub_F8910(a1, v12);
          j_memcpy((void *)(a1 + 52 * a2 + 128), a3, 0x34u);
          v7 = operator new(0x350u);
          sub_101808(
            v7,
            *a3,
            *(float *)&v12[12],
            *(float *)&v12[13],
            *(float *)&v12[14],
            a3[5],
            a3[6],
            a3[7],
            1128792064,
            1);
          v8 = a3[11];
          v9 = (int *)(a1 + 4 * a2 + 648);
          *v9 = v7;
          if ( v8 )
            sub_102390(v7, -1, 0, 0, 0, v8);
          v10 = a3[12];
          if ( v10 )
            sub_102390(*v9, -1, 1, 0, 0, v10);
          sub_F8EC0(*v9, 0);
          result = &dword_0 + 1;
          *v11 = 1;
        }
      }
    }
  }
  return result;
}


// ======================================================================
