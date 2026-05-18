// ADDR: 0x737f4
// SYMBOL: sub_737F4
int __fastcall sub_737F4(int a1, int a2)
{
  int v3; // r0
  int v5; // r1
  int v6; // r0
  _DWORD v8[10]; // [sp+0h] [bp-28h] BYREF

  if ( a2 != a1 )
  {
    v3 = *(_DWORD *)(a1 + 16);
    if ( v3 == a1 )
    {
      if ( *(_DWORD *)(a2 + 16) == a2 )
      {
        (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v3 + 12))(v3, v8);
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 16) + 16))(*(_DWORD *)(a1 + 16));
        *(_DWORD *)(a1 + 16) = 0;
        (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a2 + 16) + 12))(*(_DWORD *)(a2 + 16), a1);
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a2 + 16) + 16))(*(_DWORD *)(a2 + 16));
        v6 = v8[0];
        *(_DWORD *)(a2 + 16) = 0;
        *(_DWORD *)(a1 + 16) = a1;
        (*(void (__fastcall **)(_DWORD *, int))(v6 + 12))(v8, a2);
        (*(void (__fastcall **)(_DWORD *))(v8[0] + 16))(v8);
      }
      else
      {
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v3 + 12))(v3, a2);
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 16) + 16))(*(_DWORD *)(a1 + 16));
        *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
      }
      *(_DWORD *)(a2 + 16) = a2;
    }
    else
    {
      v5 = *(_DWORD *)(a2 + 16);
      if ( a2 == v5 )
      {
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v5 + 12))(*(_DWORD *)(a2 + 16), a1);
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a2 + 16) + 16))(*(_DWORD *)(a2 + 16));
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 16) = a1;
      }
      else
      {
        *(_DWORD *)(a1 + 16) = v5;
        *(_DWORD *)(a2 + 16) = v3;
      }
    }
  }
  return v8[5];
}


// ======================================================================
// ADDR: 0x7c73c
// SYMBOL: sub_7C73C
int __fastcall sub_7C73C(int a1, int a2)
{
  int v3; // r3
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  v3 = *(_DWORD *)(a1 + 76);
  v5[0] = a2;
  sub_7C4F0(a1 + 72, v3, (char *)v5);
  *(_DWORD *)(v5[0] + 4) = a1;
  return v5[1];
}


// ======================================================================
// ADDR: 0x7ccac
// SYMBOL: sub_7CCAC
int __fastcall sub_7CCAC(int a1, int a2, float a3)
{
  __int64 v6; // d16
  __int64 v7; // d17
  int v8; // r6
  __int64 v9; // d17
  __int64 v10; // d18
  __int64 v11; // d19
  _QWORD v13[2]; // [sp+8h] [bp-30h] BYREF

  sub_7C360(a1);
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)a1 = &off_11108C;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(float *)&v6 = 1.0;
  *((float *)&v6 + 1) = 1.0;
  *(float *)&v7 = 1.0;
  *((float *)&v7 + 1) = 1.0;
  v8 = operator new(0x78u);
  v13[0] = v6;
  v13[1] = v7;
  sub_7D380(v8, a2, (int)v13, 0, a3);
  *(_DWORD *)(a1 + 84) = v8;
  sub_7C73C(a1, v8);
  v9 = unk_116DA8;
  v10 = unk_116DB0;
  v11 = unk_116DB8;
  *(_QWORD *)(a1 + 112) = unk_116DA0;
  *(_QWORD *)(a1 + 120) = v9;
  *(_QWORD *)(a1 + 128) = v10;
  *(_QWORD *)(a1 + 136) = v11;
  return a1;
}


// ======================================================================
// ADDR: 0x7cf5c
// SYMBOL: sub_7CF5C
int __fastcall sub_7CF5C(int a1, int a2, float a3)
{
  __int64 v6; // d16
  __int64 v7; // d17
  int v8; // r6
  __int64 v9; // d17
  __int64 v10; // d18
  __int64 v11; // d19
  _QWORD v13[2]; // [sp+8h] [bp-30h] BYREF

  sub_7C360(a1);
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)a1 = &off_1110C0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(float *)&v6 = 1.0;
  *((float *)&v6 + 1) = 1.0;
  *(float *)&v7 = 1.0;
  *((float *)&v7 + 1) = 1.0;
  v8 = operator new(0x78u);
  v13[0] = v6;
  v13[1] = v7;
  sub_7D380(v8, a2, (int)v13, 0, a3);
  *(_DWORD *)(a1 + 84) = v8;
  sub_7C73C(a1, v8);
  v9 = unk_116DA8;
  v10 = unk_116DB0;
  v11 = unk_116DB8;
  *(_QWORD *)(a1 + 112) = unk_116DA0;
  *(_QWORD *)(a1 + 120) = v9;
  *(_QWORD *)(a1 + 128) = v10;
  *(_QWORD *)(a1 + 136) = v11;
  return a1;
}


// ======================================================================
// ADDR: 0x7d794
// SYMBOL: sub_7D794
int __fastcall sub_7D794(int a1, int a2)
{
  int32x2_t v2; // d0
  int result; // r0

  result = sub_7C360(a1);
  *(_DWORD *)(result + 84) = a2;
  v2.n64_u32[0] = unk_116D60;
  *(_DWORD *)result = &off_111158;
  *(int32x4_t *)(result + 88) = vdupq_lane_s32(v2, 0);
  *(_DWORD *)(result + 104) = v2.n64_u32[0];
  return result;
}


// ======================================================================
