// ADDR: 0x8af54
// SYMBOL: sub_8AF54
int __fastcall sub_8AF54(int result, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(dword_1ACF68 + 6836);
  *(_DWORD *)(dword_1ACF68 + 6840) = result;
  *(_DWORD *)(v2 + 4 * a2 + 780) = result;
  return result;
}


// ======================================================================
// ADDR: 0x9562c
// SYMBOL: sub_9562C
int sub_9562C()
{
  int result; // r0
  int v1; // r1

  result = dword_1ACF68 + 6572;
  v1 = *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6572) + 264);
  if ( *(_DWORD *)(dword_1ACF68 + 6588) == v1 )
    *(_BYTE *)(dword_1ACF68 + 6592) = 1;
  if ( *(_DWORD *)(result + 36) == v1 )
    *(_BYTE *)(result + 49) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x9777c
// SYMBOL: sub_9777C
float *__fastcall sub_9777C(float *result)
{
  int v1; // r1
  int v2; // r2
  float v3; // s2
  int v4; // r3
  float v5; // s0
  float v6; // s2
  int v7; // r2

  v1 = *(_DWORD *)(dword_1ACF68 + 6572);
  v2 = *(_DWORD *)(v1 + 448);
  v3 = *(float *)(v1 + 556) - *(float *)(v1 + 16);
  *result = *(float *)(v1 + 552) - *(float *)(v1 + 12);
  result[1] = v3;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 12);
    v5 = *(float *)(v2 + 20);
    v6 = *(float *)(v2 + 24);
    v7 = *(_DWORD *)(v2 + 68);
    if ( v4 > -2 )
      ++v4;
    *result = (float)(v5 + (float)((float)(v6 - v5) * *(float *)(v7 + 28 * v4))) - *(float *)(v1 + 52);
  }
  return result;
}


// ======================================================================
// ADDR: 0x97860
// SYMBOL: sub_97860
float *__fastcall sub_97860(float *result)
{
  float *v1; // r1
  float v2; // s2

  v1 = *(float **)(dword_1ACF68 + 6572);
  v2 = v1[139] - v1[4];
  *result = v1[138] - v1[3];
  result[1] = v2;
  return result;
}


// ======================================================================
// ADDR: 0x98968
// SYMBOL: sub_98968
int sub_98968()
{
  int result; // r0
  int v1; // r1
  int v2; // r4
  int v3; // r12
  int v4; // r1
  int v5; // r2
  int *v6; // r1

  result = dword_1ACF68;
  v1 = *(_DWORD *)(dword_1ACF68 + 6824);
  if ( v1 >= 1 )
  {
    v2 = dword_1ACF68 + 6812;
    result = *(_DWORD *)(dword_1ACF68 + 6812);
    if ( v1 <= result )
    {
      result = v1 - 1;
      v3 = *(_DWORD *)(dword_1ACF68 + 6820);
      if ( *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6832) + 36 * (v1 - 1)) == *(_DWORD *)(v3 + 36 * (v1 - 1)) )
      {
        if ( (unsigned int)v1 < 2 )
        {
LABEL_12:
          result = 0;
        }
        else
        {
          v4 = v3 + 36 * (v1 - 1);
          v5 = *(_DWORD *)(v4 + 4);
          v6 = (int *)(v4 - 32);
          while ( v5 )
          {
            if ( (*(_BYTE *)(v5 + 11) & 0x10) == 0 )
              break;
            v5 = *v6;
            if ( *v6 )
            {
              if ( (*(_BYTE *)(v5 + 11) & 8) != 0 )
                break;
            }
            --result;
            v6 -= 9;
            if ( !result )
              goto LABEL_12;
          }
        }
        sub_98854(result, 1);
        result = *(_DWORD *)(v2 + 24);
        if ( result )
          *(_BYTE *)(result + 320) = 1;
      }
    }
  }
  return result;
}


// ======================================================================
