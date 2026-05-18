// ADDR: 0x80254
// SYMBOL: sub_80254
int sub_80254()
{
  int result; // r0

  result = (unsigned __int8)byte_1A49B3;
  if ( byte_1A49B3 )
  {
    sub_80664("[sv:dbg:playback:free] : module releasing...");
    byte_1A49B4 = 0;
    result = sub_80664("[sv:dbg:playback:free] : module released");
    byte_1A49B3 = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x821e0
// SYMBOL: sub_821E0
void __fastcall sub_821E0(int a1, _DWORD *a2)
{
  int v4; // r0
  const std::nothrow_t *v5; // r1

  if ( a2 )
  {
    sub_821E0(a1, *a2);
    sub_821E0(a1, a2[1]);
    v4 = a2[5];
    v5 = 0;
    a2[5] = 0;
    if ( v4 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    operator delete(a2, v5);
  }
}


// ======================================================================
// ADDR: 0x83120
// SYMBOL: sub_83120
int sub_83120()
{
  int result; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r6
  int v4; // r4
  int v5; // t1

  result = (unsigned __int8)byte_1A49FC;
  if ( byte_1A49FC )
  {
    v1 = sub_80664("[sv:dbg:record:free] : module releasing...");
    sub_83224(v1);
    off_1ABEE8(dword_1A4A1C);
    off_1ABF38();
    if ( byte_1A49FC && byte_1A4A24 )
    {
      sub_80664("[sv:dbg:record:stopchecking] : checking device stoped");
      off_1ABEE8(dword_1A4A20);
      byte_1A4A24 = 0;
    }
    off_1ABF08(dword_1A4A20);
    j_opus_encoder_destroy(dword_1A4A18);
    v2 = dword_1A4A04;
    v3 = dword_1A4A00;
    dword_116E18 = -1;
    dword_1A4A10 = dword_1A4A0C;
    if ( dword_1A4A04 != dword_1A4A00 )
    {
      v4 = dword_1A4A04;
      do
      {
        v5 = *(unsigned __int8 *)(v4 - 12);
        v4 -= 12;
        if ( v5 << 31 )
          operator delete(*(void **)(v2 - 4));
        v2 = v4;
      }
      while ( v4 != v3 );
    }
    dword_1A4A04 = v3;
    sub_80664("[sv:dbg:record:free] : module released");
    result = 0;
    byte_1A49FC = 0;
  }
  return result;
}


// ======================================================================
