// ADDR: 0x108bc4
// SYMBOL: sub_108BC4
int *__fastcall sub_108BC4(int a1, unsigned __int16 *a2, float a3, float a4, float a5)
{
  int v9; // r3
  int *result; // r0

  sub_108974(a1, a2, a3, a4, a5);
  v9 = 5 * dword_25DAE4++;
  result = &dword_25DAE8[v9];
  *result = a1;
  *((float *)result + 4) = a5;
  result[1] = (int)a2;
  *((float *)result + 2) = a3;
  *((float *)result + 3) = a4;
  return result;
}


// ======================================================================
