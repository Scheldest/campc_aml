// ADDR: 0x18ced4
// SYMBOL: sub_18CED4
int __fastcall sub_18CED4(int a1)
{
  int *v2; // r5
  int v4; // [sp+0h] [bp-10h] BYREF
  int *v5; // [sp+4h] [bp-Ch] BYREF

  *(_BYTE *)(a1 + 20) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v2 = (int *)operator new(0x804u);
  sub_17DAD8(v2);
  v5 = v2;
  sub_17DC88(v2, (int)&unk_2390B8);
  v4 = 0;
  ((void (__fastcall *)(int, int *, int **))sub_18CF2C)(a1, &v4, &v5);
  return a1;
}


// ======================================================================
