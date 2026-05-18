// ADDR: 0x17e5da
// SYMBOL: sub_17E5DA
_DWORD *__fastcall sub_17E5DA(_DWORD *result)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  return result;
}


// ======================================================================
// ADDR: 0x17f894
// SYMBOL: sub_17F894
_DWORD *__fastcall sub_17F894(_DWORD *a1)
{
  int v2; // r8
  int v3; // r6
  int v4; // r5
  int v5; // r0

  v2 = operator new(0x124u);
  a1[2] = v2;
  a1[3] = v2;
  v3 = 6;
  v4 = v2;
  *(_DWORD *)(v2 + 288) = operator new(0x124u);
  do
  {
    v4 = *(_DWORD *)(v4 + 288);
    a1[2] = v4;
    --v3;
    *(_DWORD *)(v4 + 288) = operator new(0x124u);
  }
  while ( v3 );
  a1[2] = v2;
  v5 = *(_DWORD *)(v4 + 288);
  *a1 = v2;
  a1[1] = v2;
  a1[4] = 0;
  a1[5] = 0;
  *(_DWORD *)(v5 + 288) = v2;
  return a1;
}


// ======================================================================
// ADDR: 0x17f8f0
// SYMBOL: sub_17F8F0
_DWORD *__fastcall sub_17F8F0(_DWORD *a1)
{
  int v2; // r8
  int v3; // r6
  int v4; // r5
  int v5; // r0

  v2 = operator new(0x40u);
  a1[2] = v2;
  a1[3] = v2;
  v3 = 6;
  v4 = v2;
  *(_DWORD *)(v2 + 60) = operator new(0x40u);
  do
  {
    v4 = *(_DWORD *)(v4 + 60);
    a1[2] = v4;
    --v3;
    *(_DWORD *)(v4 + 60) = operator new(0x40u);
  }
  while ( v3 );
  a1[2] = v2;
  v5 = *(_DWORD *)(v4 + 60);
  *a1 = v2;
  a1[1] = v2;
  a1[4] = 0;
  a1[5] = 0;
  *(_DWORD *)(v5 + 60) = v2;
  return a1;
}


// ======================================================================
// ADDR: 0x17f940
// SYMBOL: sub_17F940
_DWORD *__fastcall sub_17F940(_DWORD *a1)
{
  int v2; // r8
  int v3; // r6
  int v4; // r5
  int v5; // r0

  v2 = operator new(0xCu);
  a1[2] = v2;
  a1[3] = v2;
  v3 = 6;
  v4 = v2;
  *(_DWORD *)(v2 + 8) = operator new(0xCu);
  do
  {
    v4 = *(_DWORD *)(v4 + 8);
    a1[2] = v4;
    --v3;
    *(_DWORD *)(v4 + 8) = operator new(0xCu);
  }
  while ( v3 );
  a1[2] = v2;
  v5 = *(_DWORD *)(v4 + 8);
  *a1 = v2;
  a1[1] = v2;
  a1[4] = 0;
  a1[5] = 0;
  *(_DWORD *)(v5 + 8) = v2;
  return a1;
}


// ======================================================================
// ADDR: 0x1848c6
// SYMBOL: sub_1848C6
_QWORD *__fastcall sub_1848C6(int a1)
{
  _QWORD *v1; // r0
  _QWORD *result; // r0

  *(_BYTE *)(a1 + 128) = 0;
  v1 = (_QWORD *)(a1 + 132);
  *v1 = 0LL;
  v1[1] = 0LL;
  v1 += 2;
  *v1 = 0LL;
  v1[1] = 0LL;
  v1 += 6;
  *v1 = 0LL;
  v1[1] = 0LL;
  v1 += 6;
  *v1 = 0LL;
  v1[1] = 0LL;
  result = v1 + 6;
  *result = 0LL;
  result[1] = 0LL;
  return result;
}


// ======================================================================
// ADDR: 0x18cb54
// SYMBOL: sub_18CB54
pthread_mutex_t *__fastcall sub_18CB54(pthread_mutex_t *a1)
{
  pthread_mutex_init(a1, 0);
  return a1;
}


// ======================================================================
// ADDR: 0x18ce58
// SYMBOL: sub_18CE58
int *sub_18CE58()
{
  int *result; // r0
  int v2; // r4

  result = &dword_382758;
  if ( !dword_382758++ )
  {
    v2 = operator new(0x18u);
    sub_18CED4();
    result = &dword_382754;
    dword_382754 = v2;
  }
  return result;
}


// ======================================================================
// ADDR: 0x18d328
// SYMBOL: sub_18D328
int *sub_18D328()
{
  int *result; // r0

  result = &dword_382760;
  if ( !dword_382760++ )
  {
    result = (int *)operator new(0xCu);
    *result = 0;
    result[1] = 0;
    result[2] = 0;
    dword_38275C = (int)result;
  }
  return result;
}


// ======================================================================
