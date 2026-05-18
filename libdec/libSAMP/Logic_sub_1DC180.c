// ADDR: 0x1dc004
// SYMBOL: sub_1DC004
int __fastcall sub_1DC004(_DWORD *a1, int a2, int a3, int *a4)
{
  int result; // r0

  switch ( a3 )
  {
    case 1:
      result = a1[1];
      *a4 = result;
      break;
    case 2:
      result = a1[2];
      *a4 = result;
      break;
    case 3:
      result = a1[3];
      *a4 = result;
      break;
    case 4:
      result = a1[4];
      *a4 = result;
      break;
    case 5:
      result = a1[14];
      *a4 = result;
      break;
    case 6:
      result = a1[5];
      *a4 = result;
      break;
    case 7:
      result = a1[6];
      *a4 = result;
      break;
    case 8:
      result = a1[15];
      *a4 = result;
      break;
    case 9:
      result = a1[7];
      *a4 = result;
      break;
    case 10:
      result = a1[8];
      *a4 = result;
      break;
    case 12:
      result = a1[9];
      *a4 = result;
      break;
    case 13:
      result = a1[10];
      *a4 = result;
      break;
    case 15:
      result = a1[22];
      *a4 = result;
      break;
    case 16:
      result = a1[23];
      *a4 = result;
      break;
    case 17:
      result = a1[24];
      *a4 = result;
      break;
    case 18:
      result = a1[25];
      *a4 = result;
      break;
    case 19:
      result = a1[11];
      *a4 = result;
      break;
    case 20:
      result = a1[26];
      *a4 = result;
      break;
    case 21:
      result = a1[27];
      *a4 = result;
      break;
    case 22:
      result = a1[12];
      *a4 = result;
      break;
    default:
      result = j_alSetError(a2, 40962);
      break;
  }
  return result;
}


// ======================================================================
