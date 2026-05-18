// ADDR: 0x66064
// SYMBOL: sub_66064
int __fastcall sub_66064(int a1, float a2, float a3, int a4)
{
  int result; // r0
  int v6; // lr
  int v7; // r5
  int v8; // r12

  result = *(_DWORD *)(a1 + 4);
  if ( result )
  {
    v6 = dword_1A4404;
    if ( *(_DWORD *)result != dword_1A4404 + 6716708 )
    {
      v7 = *(unsigned __int16 *)(result + 38);
      if ( (unsigned int)(v7 - 537) < 2 || v7 == 449 )
      {
        return sub_682E8(&unk_50D7E, *(_DWORD *)(a1 + 8));
      }
      else if ( a3 < -3000.0 || a2 > 3000.0 || a2 < -3000.0 || a3 > 3000.0 )
      {
        v8 = *(_DWORD *)(result + 20);
        if ( v8 )
        {
          result = *(_DWORD *)(result + 24);
          *(_DWORD *)(v8 + 56) = a4;
          *(float *)(v8 + 52) = a3;
          *(float *)(v8 + 48) = a2;
          if ( result )
          {
            ((void (__fastcall *)(int, int))(v6 + 4517359))(v8, *(_DWORD *)(result + 4) + 16);
            return ((int (__fastcall *)(_DWORD))(dword_1A4404 + 4112361))(*(_DWORD *)(a1 + 4));
          }
        }
      }
      else
      {
        return (*(int (__fastcall **)(int))(*(_DWORD *)result + 60))(result);
      }
    }
  }
  return result;
}


// ======================================================================
