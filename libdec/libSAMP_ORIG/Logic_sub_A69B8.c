// ADDR: 0x9d838
// SYMBOL: sub_9D838
int __fastcall sub_9D838(int result, int a2, float a3, unsigned int a4, int a5)
{
  int v5; // r4

  if ( a4 >= 0x1000000 )
  {
    v5 = result;
    result = a5;
    if ( a5 >= 3 )
    {
      sub_9CF78((_DWORD *)v5, a2, a3, 0.0, (float)((float)((float)a5 + -1.0) * 6.2832) / (float)a5, a5 - 1);
      result = sub_9CA40(v5, *(__int64 **)(v5 + 96), *(_DWORD *)(v5 + 88), a4);
      *(_DWORD *)(v5 + 88) = 0;
    }
  }
  return result;
}


// ======================================================================
