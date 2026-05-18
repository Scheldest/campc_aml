// ADDR: 0xe5ef8
// SYMBOL: sub_E5EF8
int __fastcall sub_E5EF8(int a1, int a2)
{
  int v3; // r0

  switch ( a2 )
  {
    case 1:
      v3 = operator new(0xCu);
      *(_DWORD *)(v3 + 4) = 0;
      *(_DWORD *)(v3 + 8) = 0;
      *(_DWORD *)v3 = v3 + 4;
      break;
    case 2:
      v3 = operator new(0xCu);
      goto LABEL_9;
    case 3:
      v3 = sub_E5F68(&byte_8F794);
      break;
    case 4:
      *(_BYTE *)a1 = 0;
      return a1;
    case 5:
    case 6:
    case 7:
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 4) = 0;
      return a1;
    case 8:
      v3 = operator new(0x20u);
      *(_DWORD *)(v3 + 16) = 0;
      *(_DWORD *)(v3 + 20) = 0;
      *(_BYTE *)(v3 + 24) = 0;
LABEL_9:
      *(_DWORD *)v3 = 0;
      *(_DWORD *)(v3 + 4) = 0;
      *(_DWORD *)(v3 + 8) = 0;
      break;
    default:
      v3 = 0;
      break;
  }
  *(_DWORD *)a1 = v3;
  return a1;
}


// ======================================================================
