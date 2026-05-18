// ADDR: 0xf9bb4
// SYMBOL: sub_F9BB4
int __fastcall sub_F9BB4(int a1, unsigned int a2, int a3, float a4, float a5, float a6, _DWORD *a7)
{
  unsigned int v9; // r5
  int v10; // r2
  int v11; // r3
  int v12; // r2
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int result; // r0
  std::runtime_error *exception; // r4
  int v18; // [sp+0h] [bp-30h]
  int v19; // [sp+0h] [bp-30h]
  int v20; // [sp+0h] [bp-30h]
  int v21; // [sp+4h] [bp-2Ch]
  int v22; // [sp+4h] [bp-2Ch]
  int v23; // [sp+4h] [bp-2Ch]
  int v24; // [sp+8h] [bp-28h]
  int v25; // [sp+8h] [bp-28h]
  int v26; // [sp+8h] [bp-28h]
  int v27; // [sp+Ch] [bp-24h]
  int v28; // [sp+Ch] [bp-24h]
  int v29; // [sp+Ch] [bp-24h]
  int v30; // [sp+10h] [bp-20h]
  int v31; // [sp+10h] [bp-20h]
  int v32; // [sp+10h] [bp-20h]
  int v33; // [sp+14h] [bp-1Ch]
  int v34; // [sp+14h] [bp-1Ch]
  int v35; // [sp+14h] [bp-1Ch]
  int v36; // [sp+18h] [bp-18h]
  int v37; // [sp+18h] [bp-18h]
  int v38; // [sp+18h] [bp-18h]
  int v39[5]; // [sp+1Ch] [bp-14h] BYREF

  v9 = a2;
  if ( !sub_108420(a2) )
    v9 = 18631;
  if ( v9 <= 0x4E20 && !sub_107188(&unk_B2CDC, v9, v10, v11, v18, v21, v24, v27, v30, v33, v36) )
  {
    sub_107188(&unk_B2CF0, v9, v12, v11, v19, v22, v25, v28, v31, v34, v37);
    sub_107188(&unk_B2C78, v13, v14, v15, v20, v23, v26, v29, v32, v35, v38);
    if ( !sub_F9CD8(v9, 5000) )
    {
      exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
      std::runtime_error::runtime_error(exception, "can't load pickup model");
      j___cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::runtime_error,
        (void (*)(void *))std::underflow_error::~underflow_error);
    }
  }
  sub_107188(
    &unk_B2D68,
    v9,
    a3,
    v11,
    COERCE_UNSIGNED_INT64(a4),
    HIDWORD(COERCE_UNSIGNED_INT64(a4)),
    COERCE_UNSIGNED_INT64(a5),
    HIDWORD(COERCE_UNSIGNED_INT64(a5)),
    COERCE_UNSIGNED_INT64(a6),
    HIDWORD(COERCE_UNSIGNED_INT64(a6)),
    v39);
  result = v39[0];
  if ( a7 )
    *a7 = LOWORD(v39[0]);
  return result;
}


// ======================================================================
