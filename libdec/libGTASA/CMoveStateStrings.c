
// Address: 0x4ac988
// Original: _ZN17CMoveStateStrings18GetMoveStateStringEi
// Demangled: CMoveStateStrings::GetMoveStateString(int)
int __fastcall CMoveStateStrings::GetMoveStateString(CMoveStateStrings *this, int a2)
{
  int result; // r0

  switch ( a2 )
  {
    case 1:
      result = *((_DWORD *)this + 1);
      break;
    case 2:
      result = *((_DWORD *)this + 2);
      break;
    case 3:
      result = *((_DWORD *)this + 3);
      break;
    case 4:
      result = *((_DWORD *)this + 4);
      break;
    case 6:
      result = *((_DWORD *)this + 5);
      break;
    case 7:
      result = *((_DWORD *)this + 6);
      break;
    default:
      result = *(_DWORD *)this;
      break;
  }
  return result;
}


// ============================================================
