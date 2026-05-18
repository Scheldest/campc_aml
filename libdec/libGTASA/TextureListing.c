
// Address: 0x18ee28
// Original: j__ZNK14TextureListing11GetMipCountEv
// Demangled: TextureListing::GetMipCount(void)
// attributes: thunk
int __fastcall TextureListing::GetMipCount(TextureListing *this)
{
  return _ZNK14TextureListing11GetMipCountEv(this);
}


// ============================================================

// Address: 0x191478
// Original: j__ZNK14TextureListing12GetTotalSizeEv
// Demangled: TextureListing::GetTotalSize(void)
// attributes: thunk
int __fastcall TextureListing::GetTotalSize(TextureListing *this)
{
  return _ZNK14TextureListing12GetTotalSizeEv(this);
}


// ============================================================

// Address: 0x1932bc
// Original: j__ZNK14TextureListing10GetMipSizeEj
// Demangled: TextureListing::GetMipSize(uint)
// attributes: thunk
int __fastcall TextureListing::GetMipSize(TextureListing *this, unsigned int a2)
{
  return _ZNK14TextureListing10GetMipSizeEj(this, a2);
}


// ============================================================

// Address: 0x199a4c
// Original: j__ZNK14TextureListing11GetRQFormatEv
// Demangled: TextureListing::GetRQFormat(void)
// attributes: thunk
int __fastcall TextureListing::GetRQFormat(TextureListing *this)
{
  return _ZNK14TextureListing11GetRQFormatEv(this);
}


// ============================================================

// Address: 0x19fbb4
// Original: j__ZNK14TextureListing13GetRLESegSizeEv
// Demangled: TextureListing::GetRLESegSize(void)
// attributes: thunk
int __fastcall TextureListing::GetRLESegSize(TextureListing *this)
{
  return _ZNK14TextureListing13GetRLESegSizeEv(this);
}


// ============================================================

// Address: 0x1e74d0
// Original: _ZNK14TextureListing12GetTotalSizeEv
// Demangled: TextureListing::GetTotalSize(void)
int __fastcall TextureListing::GetTotalSize(TextureListing *this)
{
  int v1; // r6
  int v2; // r1
  unsigned int v3; // r5
  unsigned int v4; // r4
  int v5; // r1
  int v6; // r3
  int v7; // r2
  int v8; // r12
  unsigned int v9; // lr
  int v10; // r2
  int result; // r0
  unsigned int v12; // r4
  int v13; // r6
  int v14; // r11
  int v15; // r5
  int v16; // r8
  unsigned int v17; // r10
  unsigned int v18; // r3
  unsigned int v19; // lr
  int v20; // r4

  v1 = *((__int16 *)this + 3);
  v2 = 1;
  if ( v1 > -1 )
    goto LABEL_11;
  v3 = *((unsigned __int16 *)this + 2);
  v4 = v1 & 0x7FFF;
  v2 = 1;
  if ( v3 + v4 < 3 )
    goto LABEL_11;
  v5 = -1;
  do
  {
    v6 = 1;
    if ( v4 >> 1 > 1 )
      v6 = v4 >> 1;
    v7 = 1;
    --v5;
    if ( v3 >> 1 > 1 )
      v7 = v3 >> 1;
    v4 = v6;
    v3 = v7;
  }
  while ( (unsigned int)(v7 + v6) > 2 );
  if ( v5 )
  {
    v2 = -v5;
    LOWORD(v1) = *((_WORD *)this + 3);
LABEL_11:
    v8 = *((unsigned __int16 *)this + 1);
    v9 = *((unsigned __int16 *)this + 2);
    v10 = 0;
    result = 0;
    v12 = v1 & 0x7FFF;
    while ( 1 )
    {
      v13 = v12 >> v10;
      v14 = 1;
      v15 = v9 >> v10;
      if ( (int)(v12 >> v10) > 1 )
        v14 = v12 >> v10;
      v16 = 1;
      v17 = 0;
      if ( v15 > 1 )
        v16 = v9 >> v10;
      if ( v8 > 33777 )
      {
        v18 = v9;
        v19 = v12;
        switch ( v8 )
        {
          case 35840:
          case 35842:
            v20 = 32;
            if ( v16 > 8 )
              v20 = 4 * v15;
            goto LABEL_38;
          case 35841:
          case 35843:
            v20 = 32;
            if ( v16 > 16 )
              v20 = 2 * v15;
LABEL_38:
            if ( v14 <= 8 )
              v13 = 8;
            v17 = (unsigned int)(v20 * v13 + 7) >> 3;
            goto LABEL_41;
          default:
            if ( (unsigned int)(v8 - 33778) < 2 )
            {
              if ( v16 <= 4 )
                v15 = 4;
              if ( v14 <= 4 )
                v13 = 4;
              v17 = v13 * v15;
LABEL_41:
              v12 = v19;
              v9 = v18;
              goto LABEL_50;
            }
            v9 = v18;
            if ( v8 != 36196 )
              goto LABEL_50;
            break;
        }
LABEL_45:
        if ( v16 <= 4 )
          v15 = 4;
        if ( v14 <= 4 )
          v13 = 4;
        v17 = (unsigned int)(v13 * v15) >> 1;
        goto LABEL_50;
      }
      if ( v8 <= 32818 )
        break;
      if ( (unsigned int)(v8 - 32819) < 2 )
        goto LABEL_35;
      if ( (unsigned int)(v8 - 33776) < 2 )
        goto LABEL_45;
      if ( v8 == 33635 )
        goto LABEL_35;
LABEL_50:
      ++v10;
      result += v17;
      if ( v2 == v10 )
        return result;
    }
    if ( v8 == 5121 )
    {
      v17 = 4 * v16 * v14;
      goto LABEL_50;
    }
    if ( v8 == 6409 )
    {
      v17 = v14 * v16;
      goto LABEL_50;
    }
    if ( v8 != 6410 )
      goto LABEL_50;
LABEL_35:
    v17 = 2 * v16 * v14;
    goto LABEL_50;
  }
  return 0;
}


// ============================================================

// Address: 0x1e7692
// Original: _ZNK14TextureListing11GetMipCountEv
// Demangled: TextureListing::GetMipCount(void)
int __fastcall TextureListing::GetMipCount(TextureListing *this)
{
  int v1; // r1
  int result; // r0
  unsigned int v3; // r2
  unsigned int v4; // r1
  int v5; // r3
  int v6; // r2
  bool v7; // cc

  v1 = *((__int16 *)this + 3);
  if ( v1 > -1 )
    return 1;
  v3 = *((unsigned __int16 *)this + 2);
  v4 = v1 & 0x7FFF;
  result = 1;
  if ( v4 + v3 >= 3 )
  {
    do
    {
      v5 = 1;
      ++result;
      if ( v3 >> 1 > 1 )
        v5 = v3 >> 1;
      v6 = 1;
      if ( v4 >> 1 > 1 )
        v6 = v4 >> 1;
      v7 = (unsigned int)(v6 + v5) > 2;
      v4 = v6;
      v3 = v5;
    }
    while ( v7 );
  }
  return result;
}


// ============================================================

// Address: 0x1e76d8
// Original: _ZNK14TextureListing10GetMipSizeEj
// Demangled: TextureListing::GetMipSize(uint)
int __fastcall TextureListing::GetMipSize(TextureListing *this, char a2)
{
  __int16 v2; // r4
  int v3; // lr
  unsigned int v4; // r2
  int v5; // r12
  int v6; // r3
  int result; // r0
  int v8; // r2
  int v9; // r1
  int v10; // r0

  v2 = *((_WORD *)this + 3);
  v3 = 1;
  v4 = *((unsigned __int16 *)this + 2);
  v5 = 1;
  v6 = *((unsigned __int16 *)this + 1);
  result = 0;
  v8 = v4 >> a2;
  v9 = (unsigned __int16)(v2 & 0x7FFF) >> a2;
  if ( v8 > 1 )
    v3 = v8;
  if ( v9 > 1 )
    v5 = v9;
  if ( v6 > 33777 )
  {
    switch ( v6 )
    {
      case 35840:
      case 35842:
        v10 = 32;
        if ( v5 <= 8 )
          v9 = 8;
        if ( v3 > 8 )
          v10 = 4 * v8;
        return (unsigned int)(v10 * v9 + 7) >> 3;
      case 35841:
      case 35843:
        v10 = 32;
        if ( v5 <= 8 )
          v9 = 8;
        if ( v3 > 16 )
          v10 = 2 * v8;
        return (unsigned int)(v10 * v9 + 7) >> 3;
      default:
        if ( (unsigned int)(v6 - 33778) < 2 )
        {
          if ( v3 <= 4 )
            v8 = 4;
          if ( v5 <= 4 )
            v9 = 4;
          return v9 * v8;
        }
        if ( v6 != 36196 )
          return result;
        break;
    }
    goto LABEL_36;
  }
  if ( v6 > 32818 )
  {
    if ( (unsigned int)(v6 - 32819) < 2 )
      return 2 * v3 * v5;
    if ( (unsigned int)(v6 - 33776) >= 2 )
    {
      if ( v6 != 33635 )
        return result;
      return 2 * v3 * v5;
    }
LABEL_36:
    if ( v3 <= 4 )
      v8 = 4;
    if ( v5 <= 4 )
      v9 = 4;
    return (unsigned int)(v9 * v8) >> 1;
  }
  switch ( v6 )
  {
    case 5121:
      return 4 * v3 * v5;
    case 6409:
      return v5 * v3;
    case 6410:
      return 2 * v3 * v5;
  }
  return result;
}


// ============================================================

// Address: 0x1e77e8
// Original: _ZNK14TextureListing13GetRLESegSizeEv
// Demangled: TextureListing::GetRLESegSize(void)
int __fastcall TextureListing::GetRLESegSize(TextureListing *this)
{
  int v1; // r1
  int result; // r0

  v1 = *((unsigned __int16 *)this + 1);
  result = 8;
  if ( v1 < 35840 )
  {
    if ( (unsigned int)(v1 - 33776) >= 2 )
    {
      if ( (unsigned int)(v1 - 33778) >= 2 )
        return 4;
      else
        return 16;
    }
  }
  else
  {
    switch ( v1 )
    {
      case 35840:
      case 35842:
        return 16;
      case 35841:
      case 35843:
        result = 32;
        break;
      default:
        if ( v1 != 36196 )
          return 4;
        break;
    }
  }
  return result;
}


// ============================================================

// Address: 0x1e7830
// Original: _ZNK14TextureListing11GetRQFormatEv
// Demangled: TextureListing::GetRQFormat(void)
int __fastcall TextureListing::GetRQFormat(TextureListing *this)
{
  int v1; // r0
  int result; // r0

  v1 = *((unsigned __int16 *)this + 1);
  if ( v1 <= 33775 )
  {
    if ( v1 > 32818 )
    {
      switch ( v1 )
      {
        case 32819:
          return 4;
        case 32820:
          return 3;
        case 33635:
          return 2;
        default:
          return 0;
      }
    }
    else
    {
      if ( v1 == 5121 )
        return 0;
      if ( v1 == 6409 )
        return 5;
      if ( v1 != 6410 )
        return 0;
      else
        return 6;
    }
  }
  else
  {
    switch ( v1 )
    {
      case 33776:
        result = 7;
        break;
      case 33777:
        result = 8;
        break;
      case 33778:
        result = 9;
        break;
      case 33779:
        result = 10;
        break;
      default:
        switch ( v1 )
        {
          case 35840:
            result = 16;
            break;
          case 35841:
            result = 14;
            break;
          case 35842:
            result = 17;
            break;
          case 35843:
            result = 15;
            break;
          default:
            if ( v1 == 36196 )
              result = 18;
            else
              result = 0;
            break;
        }
        break;
    }
  }
  return result;
}


// ============================================================
