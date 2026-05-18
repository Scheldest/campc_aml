// ADDR: 0x161170
// SYMBOL: sub_161170
int sub_161170()
{
  _QWORD *v0; // r0
  int *v1; // r5
  int v2; // r6
  unsigned int *v3; // r0
  unsigned int v4; // r1
  int result; // r0
  std::chrono::system_clock *address; // r0
  _QWORD v7[3]; // [sp+0h] [bp-18h] BYREF

  std::chrono::system_clock::now((std::chrono::system_clock *)v7);
  if ( !*(_BYTE *)j___emutls_get_address(&unk_23906C) )
  {
    address = (std::chrono::system_clock *)j___emutls_get_address(&unk_23905C);
    std::chrono::system_clock::now(address);
    *(_BYTE *)j___emutls_get_address(&unk_23906C) = 1;
  }
  v0 = (_QWORD *)j___emutls_get_address(&unk_23905C);
  *v0 = v7[0];
  v1 = (int *)j___emutls_get_address(&unk_23904C);
  v2 = *v1;
  v3 = (unsigned int *)j___emutls_get_address(&unk_23907C);
  v4 = *v3;
  *v1 = v2 + 1;
  *v3 = v4 - 1;
  result = sub_1610D4(v4);
  *(_BYTE *)(result + 192) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x1616f8
// SYMBOL: sub_1616F8
int __fastcall sub_1616F8(int a1, void *a2, int a3, _DWORD *a4)
{
  int *v8; // r4
  int v9; // r2
  int v10; // r0
  unsigned int v11; // r2
  unsigned int v12; // r0
  char *v13; // r1
  int v14; // r2
  int v16; // [sp+4h] [bp-44h]
  int v17; // [sp+1Ch] [bp-2Ch] BYREF
  _BYTE v18[4]; // [sp+24h] [bp-24h] BYREF
  _DWORD v19[8]; // [sp+28h] [bp-20h] BYREF

  sub_F06B2((int)v18);
  v8 = sub_F0734();
  if ( !(*(unsigned __int8 *)v8 << 31) )
  {
    *(_WORD *)v8 = 0;
LABEL_4:
    v11 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v8[2] = 0;
  v9 = *(unsigned __int8 *)v8;
  v10 = *v8;
  v8[1] = 0;
  if ( !(v9 << 31) )
    goto LABEL_4;
  v11 = (v10 - 2) & 0xFFFFFFFE;
LABEL_6:
  v19[0] = *a4;
  v19[1] = 0;
  sub_DCA40(&v17, (int)v8, v11, a2, a3, v16, 2, 0, (int)v19, 0);
  v12 = *(unsigned __int8 *)v8;
  v13 = (char *)v8[2];
  v14 = v8[1];
  if ( (v12 & 1) == 0 )
  {
    v13 = (char *)v8 + 1;
    v14 = v12 >> 1;
  }
  sub_ED4F8(a1, v13, v14);
  return sub_F0720((int)v18);
}


// ======================================================================
// ADDR: 0x1618cc
// SYMBOL: sub_1618CC
int *__fastcall sub_1618CC(int *result, int a2)
{
  unsigned int v2; // r2
  _DWORD *v3; // r1
  int v4; // t1

  v2 = a2 + 96;
  v3 = (_DWORD *)(a2 + 32);
  do
  {
    v4 = *result++;
    *v3++ = v4;
  }
  while ( (unsigned int)v3 < v2 );
  return result;
}


// ======================================================================
