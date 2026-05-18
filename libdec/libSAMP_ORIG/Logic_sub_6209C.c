// ADDR: 0x6c11c
// SYMBOL: sub_6C11C
int sub_6C11C()
{
  const void *v0; // r8
  size_t v1; // r0
  size_t v2; // r4
  char *v3; // r6
  unsigned int v4; // r5
  int v5; // r0
  double v6; // d16
  int v7; // r4
  float v8; // s2
  void (__fastcall *v9)(int); // r1
  float v11; // [sp+4h] [bp-2Ch] BYREF
  float v12; // [sp+8h] [bp-28h]
  void *v13; // [sp+Ch] [bp-24h]
  double v14; // [sp+10h] [bp-20h] BYREF
  void *v15; // [sp+18h] [bp-18h]
  int v16; // [sp+1Ch] [bp-14h]

  v0 = (const void *)(dword_1A4404 + 7170172);
  v1 = strlen((const char *)(dword_1A4404 + 7170172));
  if ( v1 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(&v11);
  v2 = v1;
  if ( v1 >= 0xB )
  {
    v4 = (v1 + 16) & 0xFFFFFFF0;
    v3 = (char *)operator new(v4);
    v12 = *(float *)&v2;
    v13 = v3;
    LODWORD(v11) = v4 + 1;
    goto LABEL_6;
  }
  LOBYTE(v11) = 2 * v1;
  v3 = (char *)&v11 + 1;
  if ( v1 )
LABEL_6:
    j_memcpy(v3, v0, v2);
  v3[v2] = 0;
  v5 = std::string::append((int)&v11, "fonts/arial_bold.ttf");
  v6 = *(double *)v5;
  v15 = *(void **)(v5 + 8);
  v14 = v6;
  *(_DWORD *)v5 = 0;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  if ( LOBYTE(v11) << 31 )
    operator delete(v13);
  v7 = operator new(0xB4u);
  v8 = (float)*(int *)(dword_11751C + 8);
  v11 = (float)*(int *)(dword_11751C + 4);
  v12 = v8;
  sub_7B698(v7, &v11, &v14);
  v9 = *(void (__fastcall **)(int))(*(_DWORD *)v7 + 44);
  dword_1A442C = v7;
  v9(v7);
  (*(void (__fastcall **)(int))(*(_DWORD *)dword_1A442C + 8))(dword_1A442C);
  if ( LOBYTE(v14) << 31 )
    operator delete(v15);
  return v16;
}


// ======================================================================
