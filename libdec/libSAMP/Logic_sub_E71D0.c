// ADDR: 0xe7264
// SYMBOL: sub_E7264
int __fastcall sub_E7264(_DWORD *a1)
{
  int v2; // r0
  __int64 v3; // kr00_8
  int result; // r0
  std::ios_base *v5; // r0

  v2 = a1[1];
  v3 = *(_QWORD *)(v2 + 12);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 40))(v2);
    if ( result == -1 )
    {
      v5 = (std::ios_base *)(*a1 + *(_DWORD *)(*(_DWORD *)*a1 - 12));
      std::ios_base::clear(v5, *((_DWORD *)v5 + 4) | 2);
      return -1;
    }
  }
  else
  {
    *(_DWORD *)(v2 + 12) = v3 + 1;
    return *(unsigned __int8 *)v3;
  }
  return result;
}


// ======================================================================
// ADDR: 0xe72a2
// SYMBOL: sub_E72A2
void __fastcall sub_E72A2(int *a1, char *a2)
{
  int v4; // r0
  int v5; // r5
  unsigned int v6; // r6
  int v7; // r2
  unsigned int v8; // r0
  char *v9; // r0
  char v10; // r1
  void *v11; // [sp+4h] [bp-24h] BYREF
  char *v12; // [sp+8h] [bp-20h]
  int v13; // [sp+Ch] [bp-1Ch]
  char *v14; // [sp+10h] [bp-18h]
  _DWORD *v15; // [sp+14h] [bp-14h]

  v4 = *a1;
  v5 = a1[1] - v4;
  v6 = v5 + 1;
  if ( v5 + 1 <= -1 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  v7 = a1[2];
  v15 = a1 + 2;
  v8 = v7 - v4;
  if ( v6 <= 2 * v8 )
    v6 = 2 * v8;
  if ( v8 >= 0x3FFFFFFF )
    v6 = 0x7FFFFFFF;
  if ( v6 )
    v9 = (char *)operator new(v6);
  else
    v9 = 0;
  v14 = &v9[v6];
  v10 = *a2;
  v11 = v9;
  v12 = &v9[v5];
  *v12 = v10;
  v13 = (int)&v9[v5 + 1];
  sub_E733A(a1, &v11);
  if ( (char *)v13 != v12 )
    v13 = (int)v12;
  if ( v11 )
    operator delete(v11);
}


// ======================================================================
