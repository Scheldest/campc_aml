// ADDR: 0x13d960
// SYMBOL: sub_13D960
int __fastcall sub_13D960(int a1, _QWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 96);
  *(_QWORD *)(result + 84) = *a2;
  return result;
}


// ======================================================================
// ADDR: 0x13ddd0
// SYMBOL: sub_13DDD0
float *__fastcall sub_13DDD0(int a1)
{
  float *result; // r0
  unsigned int v3; // r1
  int v4; // r5
  float *v5; // r6
  __int64 v6; // [sp+0h] [bp-18h] BYREF

  result = *(float **)(a1 + 68);
  v3 = *(_DWORD *)(a1 + 72) - (_DWORD)result;
  if ( v3 )
  {
    if ( v3 <= 4 )
    {
      v4 = *(_DWORD *)result;
      v5 = (float *)(*(_DWORD *)result + 20);
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)result + 8))(*(_DWORD *)result);
      v6 = 0LL;
      sub_12BD92(v4, &v6);
      return sub_12BD38((float *)a1, v5);
    }
  }
  return result;
}


// ======================================================================
