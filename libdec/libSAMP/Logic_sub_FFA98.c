// ADDR: 0xf5ad0
// SYMBOL: sub_F5AD0
int sub_F5AD0()
{
  sub_164196(dword_23DF24 + 6751216, sub_F5B3C, &off_2400BC);
  sub_164196(dword_23DF24 + 6751016, sub_F5CA8, &off_2400C0);
  return sub_164196(dword_23DF24 + 6746484, sub_F5CC8, &off_2400C4);
}


// ======================================================================
// ADDR: 0xfe0b0
// SYMBOL: sub_FE0B0
int sub_FE0B0()
{
  sub_164196(dword_23DF24 + 6756048, sub_FD960, &off_247548);
  sub_164196(dword_23DF24 + 6758160, sub_FDA18, &off_24754C);
  sub_164196(dword_23DF24 + 6752784, sub_FDCAC, &unk_24755C);
  return sub_164196(dword_23DF24 + 6744772, sub_FDCD8, &off_247560);
}


// ======================================================================
// ADDR: 0x1034b4
// SYMBOL: sub_1034B4
int sub_1034B4()
{
  *(_QWORD *)&word_25B210 = 0LL;
  *(_QWORD *)&byte_25B218 = 0LL;
  *(_QWORD *)&byte_25B21C = 0LL;
  *(_QWORD *)((char *)&dword_25B223 + 1) = 0LL;
  sub_164196(dword_23DF24 + 6754324, sub_102988, &off_25C928);
  sub_164196(dword_23DF24 + 6751952, sub_1029E8, &off_25C92C);
  sub_164196(dword_23DF24 + 6753504, sub_102A48, &off_25C930);
  sub_164196(dword_23DF24 + 6752396, sub_102AF4, &off_25C938);
  sub_164196(dword_23DF24 + 6761816, sub_102A94, &off_25C934);
  sub_164196(dword_23DF24 + 6750836, sub_102B14, &off_25C93C);
  sub_164196(dword_23DF24 + 6748896, sub_102B74, &unk_25C940);
  sub_164196(dword_23DF24 + 6769164, sub_102BC4, &off_25C944);
  sub_164196(dword_23DF24 + 6756564, sub_102C10, &unk_25C948);
  sub_164196(dword_23DF24 + 6762448, sub_102C5C, &off_25C94C);
  sub_164196(dword_23DF24 + 6766640, sub_102CA8, &off_25C950);
  sub_164196(dword_23DF24 + 6754940, sub_102DBC, &off_25C960);
  sub_164196(dword_23DF24 + 6760396, sub_102CF4, &off_25C954);
  sub_164196(dword_23DF24 + 6748888, (char *)&loc_102E10 + 1, &off_25C964);
  sub_164196(dword_23DF24 + 6765956, sub_102E4C, &off_25C968);
  sub_164196(dword_23DF24 + 6761492, sub_102E8C, &off_25C96C);
  sub_164196(dword_23DF24 + 6768684, sub_102ED0, &off_25C970);
  sub_164196(dword_23DF24 + 6745056, sub_102F20, &off_25C974);
  sub_164196(dword_23DF24 + 6751508, sub_102FBC, &off_25C97C);
  sub_164196(dword_23DF24 + 6762512, sub_10300C, &off_25C980);
  sub_164196(dword_23DF24 + 6769492, sub_10300C, 0);
  sub_164196(dword_23DF24 + 6744976, sub_10305C, &off_25C984);
  sub_164196(dword_23DF24 + 6759488, sub_10309C, &unk_25C988);
  sub_164196(dword_23DF24 + 6768776, sub_1030A0, &off_25C98C);
  sub_164196(dword_23DF24 + 6746436, sub_1030EC, &off_25C990);
  sub_164196(dword_23DF24 + 6771604, sub_103210, &off_25C9A8);
  sub_164196(dword_23DF24 + 6744740, sub_102F70, &off_25C978);
  sub_164196(dword_23DF24 + 6771296, sub_1030F8, &off_25C994);
  sub_164196(dword_23DF24 + 6762124, sub_103160, &off_25C9A0);
  sub_164196(dword_23DF24 + 6752496, sub_1031A8, &unk_25C9A4);
  sub_164196(dword_23DF24 + 6748684, (char *)&loc_103118 + 1, &off_25C998);
  sub_164196(dword_23DF24 + 6746884, (char *)&loc_10313C + 1, &off_25C99C);
  sub_164196(dword_23DF24 + 6748920, sub_10323C, &off_25C9AC);
  sub_164196(dword_23DF24 + 6767640, sub_103288, &off_25C9B0);
  sub_164196(dword_23DF24 + 6767168, sub_103300, &off_25C9B4);
  sub_164196(dword_23DF24 + 6763084, sub_103384, &off_25C9B8);
  sub_164196(dword_23DF24 + 6758492, sub_1033D0, &off_25C9BC);
  sub_164196(dword_23DF24 + 6773436, sub_10341C, &off_25C9C0);
  return sub_164196(dword_23DF24 + 6746156, sub_103464, &off_25C9C4);
}


// ======================================================================
// ADDR: 0x10a7c0
// SYMBOL: sub_10A7C0
int sub_10A7C0()
{
  int v0; // r4
  std::__shared_weak_count *v1; // r5
  unsigned int *v2; // r0
  unsigned int v3; // r1
  int v4; // r4
  std::__shared_weak_count *v5; // r5
  unsigned int *v6; // r0
  unsigned int v7; // r1

  v0 = operator new(0x68u);
  sub_10B5C4();
  v1 = (std::__shared_weak_count *)dword_26307C;
  dword_263078 = v0 + 12;
  dword_26307C = v0;
  if ( v1 )
  {
    v2 = (unsigned int *)((char *)v1 + 4);
    __dmb(0xBu);
    do
      v3 = __ldrex(v2);
    while ( __strex(v3 - 1, v2) );
    __dmb(0xBu);
    if ( !v3 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v1 + 8))(v1);
      std::__shared_weak_count::__release_weak(v1);
    }
  }
  v4 = operator new(0x4Cu);
  sub_10B654();
  v5 = (std::__shared_weak_count *)dword_263074;
  dword_263070 = v4 + 12;
  dword_263074 = v4;
  if ( v5 )
  {
    v6 = (unsigned int *)((char *)v5 + 4);
    __dmb(0xBu);
    do
      v7 = __ldrex(v6);
    while ( __strex(v7 - 1, v6) );
    __dmb(0xBu);
    if ( !v7 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v5 + 8))(v5);
      std::__shared_weak_count::__release_weak(v5);
    }
  }
  sub_164222(dword_23DF24 + 6701452);
  sub_164222(dword_23DF24 + 6701332);
  sub_164222(dword_23DF24 + 6701340);
  sub_164196(dword_23DF24 + 6764840, sub_10ADB8, &off_263058);
  sub_164196(dword_23DF24 + 6770968, sub_10AEE4, &off_26305C);
  sub_164196(dword_23DF24 + 6762160, sub_10AF9C, &off_263060);
  sub_164196(dword_23DF24 + 6756596, sub_10B060, &off_263064);
  sub_164196(dword_23DF24 + 6773300, sub_10B118, &off_263068);
  return sub_164196(dword_23DF24 + 6749612, sub_10B208, &off_26306C);
}


// ======================================================================
// ADDR: 0x11e724
// SYMBOL: sub_11E724
int __fastcall sub_11E724(int a1)
{
  sub_164196(dword_23DF24 + 6762244, sub_11E598, &unk_263824);
  return a1;
}


// ======================================================================
// ADDR: 0x11e758
// SYMBOL: sub_11E758
int __fastcall sub_11E758(int a1)
{
  sub_164196(dword_23DF24 + 6760576, sub_11E78C, &off_263828);
  return a1;
}


// ======================================================================
// ADDR: 0x11f8f8
// SYMBOL: sub_11F8F8
int __fastcall sub_11F8F8(int a1)
{
  dword_381A94 = dword_23DF24 + 9993204;
  sub_164222(dword_23DF24 + 6716612);
  sub_164222(dword_23DF24 + 6717000);
  sub_164222(dword_23DF24 + 6717104);
  sub_164222(dword_23DF24 + 6717208);
  sub_164222(dword_23DF24 + 6718560);
  sub_164222(dword_23DF24 + 6720172);
  sub_164222(dword_23DF24 + 6720288);
  sub_164222(dword_23DF24 + 6720504);
  sub_164222(dword_23DF24 + 6720624);
  sub_164222(dword_23DF24 + 6722192);
  sub_164222(dword_23DF24 + 6739600);
  sub_164222(dword_23DF24 + 6739976);
  sub_164222(dword_23DF24 + 6740256);
  sub_164222(dword_23DF24 + 6740536);
  sub_164222(dword_23DF24 + 6740812);
  sub_164222(dword_23DF24 + 6741108);
  sub_164222(dword_23DF24 + 6741404);
  sub_164222(dword_23DF24 + 6741700);
  sub_164222(dword_23DF24 + 6741996);
  sub_164222(dword_23DF24 + 6742292);
  sub_164222(dword_23DF24 + 6742568);
  return a1;
}


// ======================================================================
// ADDR: 0x1201ec
// SYMBOL: sub_1201EC
int __fastcall sub_1201EC(int a1)
{
  sub_164196(dword_23DF24 + 6750664, sub_120220, &unk_2638CC);
  return a1;
}


// ======================================================================
// ADDR: 0x120378
// SYMBOL: sub_120378
int sub_120378()
{
  int v0; // r3
  std::runtime_error *exception; // r4
  _BYTE v3[12]; // [sp+4h] [bp-Ch] BYREF

  v0 = *(unsigned __int8 *)(dword_23DF24 + 2557022);
  if ( v0 != 48 )
  {
    _android_log_print(6, "AXL", "TouchSenseFix: Invalid class size - %d != %d", v0, 48);
    exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
    std::runtime_error::runtime_error(exception, "Invalid TouchSense class size");
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))std::underflow_error::~underflow_error);
  }
  sub_164196(dword_23DF24 + 6757004, sub_120444, v3);
  sub_164196(dword_23DF24 + 6769496, sub_120480, v3);
  return sub_164196(dword_23DF24 + 6763076, sub_1204BC, &off_2638EC);
}


// ======================================================================
// ADDR: 0x120554
// SYMBOL: sub_120554
int sub_120554()
{
  sub_164196(dword_23DF24 + 6761896, (char *)&loc_12052C + 1, &off_263900);
  sub_164196(dword_23DF24 + 6760680, (char *)&loc_120540 + 1, &off_263904);
  sub_164196(dword_23DF24 + 6772932, sub_12063C, &off_2638F0);
  sub_164196(dword_23DF24 + 6748468, sub_120664, &off_2638F4);
  sub_164196(dword_23DF24 + 6774308, (char *)&loc_120714 + 1, &off_2638F8);
  sub_164196(dword_23DF24 + 6748496, sub_12073C, &off_2638FC);
  return sub_164196(dword_23DF24 + 6748540, sub_120764, &off_263908);
}


// ======================================================================
// ADDR: 0x125f60
// SYMBOL: sub_125F60
int __fastcall sub_125F60(int a1)
{
  int v2; // r6
  int v3; // r5
  void *v4; // r0
  const void *v5; // r6
  int v6; // r5
  int v7; // r0
  int v8; // r5
  int v9; // r0
  int v10; // r3
  _DWORD v12[7]; // [sp+4h] [bp-1Ch] BYREF

  v2 = dword_23DF24;
  v3 = dword_23DF24 + 6790804;
  sub_1641C4(dword_23DF24 + 6790804);
  v4 = malloc(0x70u);
  *(_DWORD *)(v2 + 6790804) = v4;
  if ( v3 )
  {
    v5 = (const void *)(dword_23DF24 + 7172220);
    j_memcpy(v4, (const void *)(dword_23DF24 + 7172220), 0x38u);
    j_memcpy((void *)(*(_DWORD *)v3 + 56), v5, 0x38u);
    v6 = dword_23DF24;
    sub_1641C4(dword_23DF24 + 6839612);
    *(_DWORD *)(v6 + 6839612) = 4;
    sub_164196(dword_23DF24 + 6757152, sub_1260D8, 0);
    sub_164196(dword_23DF24 + 6760232, sub_12616C, &off_263DB8);
    v7 = (unsigned __int8)byte_263DC0;
    __dmb(0xBu);
    if ( !(v7 << 31) && j___cxa_guard_acquire((__guard *)&byte_263DC0) )
    {
      dword_263DBC = *(_DWORD *)(dword_23DF24 + 7182904);
      j___cxa_guard_release((__guard *)&byte_263DC0);
    }
    v12[0] = 0;
    (*(void (__fastcall **)(int, _DWORD *, int *))(*(_DWORD *)dword_263DBC + 24))(
      dword_263DBC,
      v12,
      &elf_gnu_hash_indexes[1618]);
    v8 = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)v12[0] + 24))(v12[0], dword_23DF24 + 6335267);
    (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v12[0] + 864))(v12[0], v8);
    sub_1641C4(dword_23DF24 + 6692460);
    v9 = v12[0];
    v10 = *(_DWORD *)v12[0];
    *(_DWORD *)(dword_23DF24 + 6692460) = sub_126248;
    (*(void (__fastcall **)(int, int, int, int))(v10 + 860))(v9, v8, dword_23DF24 + 6692416, 13);
  }
  else
  {
    _android_log_print(6, "AXL", "Can't allocate memory for extend touch points");
  }
  return a1;
}


// ======================================================================
// ADDR: 0x129118
// SYMBOL: sub_129118
int __fastcall sub_129118(int a1)
{
  sub_164196(dword_23DF24 + 6752524, sub_129220, &off_31413C);
  sub_164196(dword_23DF24 + 6758548, (char *)&loc_129304 + 1, &off_314140);
  sub_164222(dword_23DF24 + 6741468);
  sub_164222(dword_23DF24 + 6741496);
  sub_164222(dword_23DF24 + 6741672);
  sub_164222(dword_23DF24 + 6741564);
  sub_164196(dword_23DF24 + 6770740, sub_129370, &unk_314154);
  sub_164196(dword_23DF24 + 6754772, sub_129394, &off_314158);
  return a1;
}


// ======================================================================
// ADDR: 0x164222
// SYMBOL: sub_164222
int __fastcall sub_164222(int *a1, int a2, _DWORD *a3)
{
  int result; // r0

  result = mprotect((void *)((unsigned int)a1 & 0xFFFFF000), 0x1000u, 3);
  if ( a3 )
  {
    result = *a1;
    *a3 = *a1;
  }
  *a1 = a2;
  return result;
}


// ======================================================================
