// ADDR: 0x80300
// SYMBOL: sub_80300
int __fastcall sub_80300(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v6; // r0
  _QWORD v7[2]; // [sp+4h] [bp-2Ch] BYREF
  int v8; // [sp+14h] [bp-1Ch]
  int v9; // [sp+18h] [bp-18h]
  int v10; // [sp+1Ch] [bp-14h]

  if ( !byte_1A49B4 )
    return v10;
  v1 = sub_82698(a1);
  v2 = sub_82644(v1);
  if ( !v2 || (v2 = dword_1A49B8) != 0 )
  {
    if ( !sub_82644(v2) && dword_1A49B8 )
    {
      off_1ABF20(dword_1A49BC, dword_1A49B8);
      dword_1A49B8 = 0;
    }
    return v10;
  }
  v3 = off_1ABF1C(dword_1A49BC, 65553);
  dword_1A49B8 = v3;
  if ( v3 )
  {
    v7[0] = 0xC220000041200000LL;
    v7[1] = 0x3C23D70A41400000LL;
    v8 = 1008981770;
    v9 = -1;
    if ( !off_1ABF24(v3, v7) )
    {
      v4 = off_1ABF0C();
      sub_80664("[sv:err:playback:setsoundbalancer] : failed to set parameters (code:%d)", v4);
      off_1ABF20(dword_1A49BC, dword_1A49B8);
      dword_1A49B8 = 0;
      sub_82698(0);
    }
    return v10;
  }
  v6 = off_1ABF0C();
  sub_80664("[sv:err:playback:setsoundbalancer] : failed to set balancer effect (code:%d)", v6);
  return sub_82698(0);
}


// ======================================================================
// ADDR: 0x8046c
// SYMBOL: sub_8046C
int __fastcall sub_8046C(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v6; // r0
  _DWORD v7[2]; // [sp+0h] [bp-30h] BYREF
  __int64 v8; // [sp+8h] [bp-28h]
  int v9; // [sp+10h] [bp-20h]
  int v10; // [sp+14h] [bp-1Ch]
  int v11; // [sp+18h] [bp-18h]
  int v12; // [sp+1Ch] [bp-14h]

  if ( !byte_1A49B4 )
    return v12;
  v1 = sub_826A4(a1);
  v2 = sub_82650(v1);
  if ( !v2 || (v2 = dword_1A49C0) != 0 )
  {
    if ( !sub_82650(v2) && dword_1A49C0 )
    {
      off_1ABF20(dword_1A49BC, dword_1A49C0);
      dword_1A49C0 = 0;
    }
    return v12;
  }
  v3 = off_1ABF1C(dword_1A49BC, 65555);
  dword_1A49C0 = v3;
  if ( v3 )
  {
    v8 = 0LL;
    v10 = 0;
    v11 = -1;
    v7[1] = 1163165696;
    v7[0] = 0;
    v9 = 1060437492;
    if ( !off_1ABF24(v3, v7) )
    {
      v4 = off_1ABF0C();
      sub_80664("[sv:err:playback:setsoundfilter] : failed to set parameters (code:%d)", v4);
      off_1ABF20(dword_1A49BC, dword_1A49C0);
      dword_1A49C0 = 0;
      sub_826A4(0);
    }
    return v12;
  }
  v6 = off_1ABF0C();
  sub_80664("[sv:err:playback:setsoundfilter] : failed to set filter effect (code:%d)", v6);
  return sub_826A4(0);
}


// ======================================================================
// ADDR: 0x8262c
// SYMBOL: sub_8262C
int sub_8262C()
{
  return (unsigned __int8)byte_116E08;
}


// ======================================================================
// ADDR: 0x82638
// SYMBOL: sub_82638
int sub_82638()
{
  return dword_116E0C;
}


// ======================================================================
