// ADDR: 0xf7cf4
// SYMBOL: sub_F7CF4
int __fastcall sub_F7CF4(int a1, int a2, float a3, float a4, float a5, float a6)
{
  int v10; // r3
  int v11; // r0
  int v12; // r0
  int v13; // r1
  int v14; // r3
  int v15; // r3
  int v16; // r3
  std::runtime_error *exception; // r4
  int v19; // [sp+0h] [bp-38h]
  int v20; // [sp+0h] [bp-38h]
  int v21; // [sp+0h] [bp-38h]
  int v22; // [sp+0h] [bp-38h]
  int v23; // [sp+4h] [bp-34h]
  int v24; // [sp+4h] [bp-34h]
  int v25; // [sp+4h] [bp-34h]
  int v26; // [sp+4h] [bp-34h]
  int v27; // [sp+8h] [bp-30h]
  int v28; // [sp+8h] [bp-30h]
  int v29; // [sp+8h] [bp-30h]
  int v30; // [sp+8h] [bp-30h]
  int v31; // [sp+Ch] [bp-2Ch]
  int v32; // [sp+Ch] [bp-2Ch]
  int v33; // [sp+Ch] [bp-2Ch]
  int v34; // [sp+Ch] [bp-2Ch]
  int v35; // [sp+10h] [bp-28h]
  int v36; // [sp+10h] [bp-28h]
  int v37; // [sp+10h] [bp-28h]
  int v38; // [sp+10h] [bp-28h]
  int v39; // [sp+14h] [bp-24h]
  int v40; // [sp+14h] [bp-24h]
  int v41; // [sp+14h] [bp-24h]
  int v42; // [sp+14h] [bp-24h]
  int v43; // [sp+18h] [bp-20h]
  int v44; // [sp+18h] [bp-20h]
  int v45; // [sp+18h] [bp-20h]
  int v46; // [sp+18h] [bp-20h]
  int v47; // [sp+1Ch] [bp-1Ch] BYREF
  int v48; // [sp+20h] [bp-18h]
  int v49; // [sp+24h] [bp-14h]
  int v50; // [sp+28h] [bp-10h]
  int v51; // [sp+2Ch] [bp-Ch]
  int v52; // [sp+30h] [bp-8h]
  int v53; // [sp+34h] [bp-4h]
  _DWORD savedregs[2]; // [sp+38h] [bp+0h]

  *(_QWORD *)a1 = (unsigned int)&off_22AE50;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  if ( !sub_F9C94(a2) )
  {
    v11 = sub_F9CBC(a2);
    sub_F9CCC(v11);
    if ( !sub_F9CD8(a2, 200) )
    {
      exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
      std::runtime_error::runtime_error(exception, "error loading skin model");
      j___cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::runtime_error,
        (void (*)(void *))std::underflow_error::~underflow_error);
    }
  }
  ((void (__fastcall *)(void *, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int *))sub_107188)(
    &unk_92D1E,
    5,
    a2,
    v10,
    COERCE_UNSIGNED_INT64(a3),
    HIDWORD(COERCE_UNSIGNED_INT64(a3)),
    COERCE_UNSIGNED_INT64(a4),
    HIDWORD(COERCE_UNSIGNED_INT64(a4)),
    COERCE_UNSIGNED_INT64((float)(a5 + -1.0)),
    HIDWORD(COERCE_UNSIGNED_INT64((float)(a5 + -1.0))),
    &v47);
  sub_107188(
    &unk_92D32,
    v47,
    COERCE_UNSIGNED_INT64(a6),
    HIDWORD(COERCE_UNSIGNED_INT64(a6)),
    v19,
    v23,
    v27,
    v31,
    v35,
    v39,
    v43,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    savedregs[0]);
  *(_DWORD *)(a1 + 8) = v47;
  v12 = sub_1082F4();
  v13 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 12) = v12;
  *(_DWORD *)(a1 + 4) = v12;
  sub_107188(
    &unk_92D46,
    v13,
    0,
    v14,
    v20,
    v24,
    v28,
    v32,
    v36,
    v40,
    v44,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    savedregs[0]);
  sub_107188(
    &unk_92D5A,
    *(_DWORD *)(a1 + 8),
    (char *)&elf_gnu_hash_indexes[1618] + 2,
    v15,
    v21,
    v25,
    v29,
    v33,
    v37,
    v41,
    v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    savedregs[0]);
  sub_107188(
    &unk_92D6E,
    *(_DWORD *)(a1 + 8),
    1,
    v16,
    v22,
    v26,
    v30,
    v34,
    v38,
    v42,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    savedregs[0]);
  return a1;
}


// ======================================================================
