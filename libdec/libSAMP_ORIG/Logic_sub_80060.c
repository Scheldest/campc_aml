// ADDR: 0x800cc
// SYMBOL: sub_800CC
bool sub_800CC()
{
  int v0; // r0
  int v1; // r0
  int v2; // r4
  int v3; // r0

  v0 = (unsigned __int8)byte_1A49D0;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A49D0) )
  {
    dword_1A49C4 = 0;
    unk_1A49C8 = 0;
    dword_1A49CC = 0;
    j___cxa_guard_release((__guard *)&byte_1A49D0);
  }
  sub_80664("[sv:dbg:playback:bassinithook] : module loading...");
  off_1ABEE4(42, 1);
  off_1ABEE4(0, 900);
  off_1ABEE4(1, 10);
  off_1ABEE4(24, 4);
  off_1ABEE4(10, 3);
  sub_80664("[sv:dbg:playback:bassinithook] : calling function BASS_Init(device:-1, freq:%u, flags:0x%x)...", 48000, 6);
  if ( !off_1ABED8(-1, 48000, 6) )
  {
    v1 = off_1ABF0C();
    sub_80664("[sv:err:playback:bassinithook] : failed to init bass library (code:%d)", v1);
  }
  v2 = off_1ABEF0(0, 0, 0, -2, 0);
  dword_1A49BC = v2;
  if ( v2 )
  {
    off_1ABF10(1065353216, 1065353216, 0);
    off_1ABF14(&dword_1A49C4, &dword_1A49C4, &dword_1A49C4, &dword_1A49C4);
    off_1ABF18();
    sub_80664("[sv:dbg:playback:bassinithook] : module loaded");
    byte_1A49B4 = 1;
    sub_805D4();
  }
  else
  {
    v3 = off_1ABF0C();
    sub_80664("[sv:err:playback:init] : failed to create device output channel (code:%d)", v3);
  }
  return v2 != 0;
}


// ======================================================================
// ADDR: 0x825cc
// SYMBOL: sub_825CC
int sub_825CC()
{
  return (unsigned __int8)byte_1A49E7;
}


// ======================================================================
// ADDR: 0x825fc
// SYMBOL: sub_825FC
char __fastcall sub_825FC(char result)
{
  byte_1A49E7 = result;
  return result;
}


// ======================================================================
// ADDR: 0x82680
// SYMBOL: sub_82680
char __fastcall sub_82680(char result)
{
  byte_116E08 = result;
  return result;
}


// ======================================================================
// ADDR: 0x8268c
// SYMBOL: sub_8268C
int __fastcall sub_8268C(int result)
{
  dword_116E0C = result;
  return result;
}


// ======================================================================
// ADDR: 0x82698
// SYMBOL: sub_82698
char __fastcall sub_82698(char result)
{
  byte_1A49EB = result;
  return result;
}


// ======================================================================
// ADDR: 0x826a4
// SYMBOL: sub_826A4
char __fastcall sub_826A4(char result)
{
  byte_1A49EC = result;
  return result;
}


// ======================================================================
