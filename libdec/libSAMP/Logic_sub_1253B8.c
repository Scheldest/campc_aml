// ADDR: 0x125b8c
// SYMBOL: sub_125B8C
int __fastcall sub_125B8C(int a1)
{
  int v2; // r4
  int v3; // r11
  int v4; // r5
  int v5; // r6
  int v6; // r10
  int v7; // r0
  int v8; // r1
  bool v9; // cc
  bool v10; // cc
  int v11; // r0
  int v12; // r1
  _DWORD *v13; // r0
  int v14; // r0
  int result; // r0
  int *v16; // r4
  int v17; // r5
  int v18; // r0
  int v19; // [sp+4h] [bp-2Ch]
  int v20; // [sp+Ch] [bp-24h]

  v19 = dword_238E94 + 161;
  v20 = dword_238E94 + 162;
  if ( dword_238E90 > a1 )
  {
    v2 = a1;
    v3 = v19 + dword_238E9C;
    v4 = 88 * (a1 - dword_238E9C - dword_238E94 - 161);
    v5 = 60 * (a1 - dword_238E94 - 162);
    v6 = 224 * a1;
    while ( 1 )
    {
      if ( dword_263C44 )
      {
        v7 = dword_263C44 + 20;
      }
      else
      {
        _android_log_print(
          5,
          "AXL",
          "CHandlingHook: fail to call %s. Custom pool not allocated",
          "static char *CHandlingHook::getVehicleStart()");
        v7 = 0;
      }
      v8 = *(_DWORD *)(v7 + v6);
      if ( v8 )
        *(_DWORD *)(v7 + v6) = v8 + 1;
      v9 = v2 < a1;
      if ( v2 >= a1 )
        v9 = v2 < v20;
      if ( v9 || v2 >= dword_238E9C + v19 )
        break;
      v11 = sub_1259CC();
      v12 = *(_DWORD *)(v11 + v5);
      if ( v12 )
      {
        v13 = (_DWORD *)(v11 + v5);
LABEL_24:
        *v13 = v12 + 1;
      }
LABEL_16:
      v4 += 88;
      v5 += 60;
      v6 += 224;
      if ( ++v2 >= dword_238E90 )
        goto LABEL_25;
    }
    v10 = v2 < a1;
    if ( v2 >= a1 )
      v10 = v2 < v3;
    if ( v10 )
      goto LABEL_16;
    if ( v2 >= dword_238E98 + v3 )
      goto LABEL_16;
    v14 = sub_125974();
    v12 = *(_DWORD *)(v14 + v4);
    if ( !v12 )
      goto LABEL_16;
    v13 = (_DWORD *)(v14 + 88 * (v2 - v3));
    goto LABEL_24;
  }
LABEL_25:
  result = *(_DWORD *)(dword_23DF24 + 11110344);
  if ( result >= 5 )
  {
    v16 = 0;
    do
    {
      result = sub_163768(result);
      v17 = *(int *)((char *)v16 + result);
      if ( v17 )
      {
        result = sub_163780(*(int *)((char *)v16 + result));
        if ( !result )
        {
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 20))(v17);
          if ( result == 6 )
          {
            if ( v20 < sub_16382A(v17) && dword_238E9C + v19 >= sub_16382A(v17) )
              sub_16383A(v17, 5);
            result = sub_16382A(v17);
            if ( result >= a1 )
            {
              v18 = sub_16382A(v17);
              result = sub_163830(v17, v18 + 1);
            }
          }
        }
      }
      ++v16;
    }
    while ( v16 != &elf_gnu_hash_chain[2427] );
  }
  return result;
}


// ======================================================================
