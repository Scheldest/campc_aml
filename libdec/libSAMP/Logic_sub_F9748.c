// ADDR: 0xdc970
// SYMBOL: sub_DC970
int __fastcall sub_DC970(int a1, int a2, int a3, int *a4)
{
  int v8; // r0
  unsigned __int8 *v9; // r4
  int v10; // r2
  int v11; // r0
  unsigned int v12; // r2
  char *v13; // r1
  _BYTE v15[8]; // [sp+1Ch] [bp-2Ch] BYREF
  _BYTE v16[4]; // [sp+24h] [bp-24h] BYREF
  int v17; // [sp+28h] [bp-20h]

  v8 = sub_F06B2(v16);
  v9 = (unsigned __int8 *)sub_F0734(v8);
  if ( !(*v9 << 31) )
  {
    *(_WORD *)v9 = 0;
LABEL_4:
    v12 = 9;
    goto LABEL_6;
  }
  **((_BYTE **)v9 + 2) = 0;
  v10 = *v9;
  v11 = *(_DWORD *)v9;
  *((_DWORD *)v9 + 1) = 0;
  if ( !(v10 << 31) )
    goto LABEL_4;
  v12 = (v11 - 2) & 0xFFFFFFFE;
LABEL_6:
  v17 = *a4;
  ((void (__fastcall *)(_BYTE *, unsigned __int8 *, unsigned int, int, int))sub_DCA40)(v15, v9, v12, a2, a3);
  v13 = (char *)*((_DWORD *)v9 + 2);
  if ( (*v9 & 1) == 0 )
    v13 = (char *)(v9 + 1);
  sub_ED4F8(a1, v13);
  return sub_F0720(v16);
}


// ======================================================================
// ADDR: 0xf9e90
// SYMBOL: sub_F9E90
int __fastcall sub_F9E90(int a1)
{
  int result; // r0
  int (__fastcall *v3)(int); // r2

  result = 0;
  if ( dword_23DF24 && dword_23DF24 != -6764180 )
  {
    v3 = *(int (__fastcall **)(int))(dword_23DF24 + 6764180);
    if ( v3 )
      return v3(a1);
    else
      return 0;
  }
  return result;
}


// ======================================================================
