// ADDR: 0x1119f0
// SYMBOL: sub_1119F0
_DWORD *__fastcall sub_1119F0(_DWORD *a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r1
  std::__shared_weak_count *v5; // r0
  _DWORD v7[4]; // [sp+0h] [bp-28h] BYREF
  _DWORD *v8; // [sp+10h] [bp-18h]

  v8 = v7;
  v7[0] = &off_22B73C;
  v2 = sub_1642EC(dword_23DF24 + 4153344, v7);
  if ( v7 == v8 )
  {
    v3 = 4;
  }
  else
  {
    if ( !v8 )
      goto LABEL_6;
    v3 = 5;
  }
  (*(void (**)(void))(*v8 + 4 * v3))();
LABEL_6:
  if ( v2 )
    _android_log_print(6, "AXL", "Can't remap page 0x3F6000 to restore code of radar scale");
  v4 = a1[3];
  if ( v4 )
    sub_164196(dword_23DF24 + 6747672, v4, 0);
  sub_FAB24((int)a1);
  sub_1630A8(a1 + 5);
  v5 = (std::__shared_weak_count *)a1[2];
  *a1 = &off_22AE84;
  if ( v5 )
    std::__shared_weak_count::__release_weak(v5);
  return a1;
}


// ======================================================================
