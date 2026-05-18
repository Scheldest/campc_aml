
// Address: 0x18b060
// Original: j__ZN19CUpsideDownCarCheck15IsCarUpsideDownEPK8CVehicle
// Demangled: CUpsideDownCarCheck::IsCarUpsideDown(CVehicle const*)
// attributes: thunk
int __fastcall CUpsideDownCarCheck::IsCarUpsideDown(CUpsideDownCarCheck *this, const CVehicle *a2)
{
  return _ZN19CUpsideDownCarCheck15IsCarUpsideDownEPK8CVehicle(this, a2);
}


// ============================================================

// Address: 0x18b1e8
// Original: j__ZN19CUpsideDownCarCheck18RemoveCarFromCheckEi
// Demangled: CUpsideDownCarCheck::RemoveCarFromCheck(int)
// attributes: thunk
int __fastcall CUpsideDownCarCheck::RemoveCarFromCheck(CUpsideDownCarCheck *this, int a2)
{
  return _ZN19CUpsideDownCarCheck18RemoveCarFromCheckEi(this, a2);
}


// ============================================================

// Address: 0x18cba8
// Original: j__ZN19CUpsideDownCarCheck12UpdateTimersEv
// Demangled: CUpsideDownCarCheck::UpdateTimers(void)
// attributes: thunk
int __fastcall CUpsideDownCarCheck::UpdateTimers(CUpsideDownCarCheck *this)
{
  return _ZN19CUpsideDownCarCheck12UpdateTimersEv(this);
}


// ============================================================

// Address: 0x195310
// Original: j__ZN19CUpsideDownCarCheck29HasCarBeenUpsideDownForAWhileEi
// Demangled: CUpsideDownCarCheck::HasCarBeenUpsideDownForAWhile(int)
// attributes: thunk
int __fastcall CUpsideDownCarCheck::HasCarBeenUpsideDownForAWhile(CUpsideDownCarCheck *this, int a2)
{
  return _ZN19CUpsideDownCarCheck29HasCarBeenUpsideDownForAWhileEi(this, a2);
}


// ============================================================

// Address: 0x198a4c
// Original: j__ZN19CUpsideDownCarCheck13AddCarToCheckEi
// Demangled: CUpsideDownCarCheck::AddCarToCheck(int)
// attributes: thunk
int __fastcall CUpsideDownCarCheck::AddCarToCheck(CUpsideDownCarCheck *this, int a2)
{
  return _ZN19CUpsideDownCarCheck13AddCarToCheckEi(this, a2);
}


// ============================================================

// Address: 0x328234
// Original: _ZN19CUpsideDownCarCheck4InitEv
// Demangled: CUpsideDownCarCheck::Init(void)
_QWORD *__fastcall CUpsideDownCarCheck::Init(CUpsideDownCarCheck *this)
{
  _QWORD *result; // r0

  *((_QWORD *)this + 4) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 5) = 0xFFFFFFFFLL;
  *(_QWORD *)this = 0xFFFFFFFFLL;
  *((_QWORD *)this + 1) = 0xFFFFFFFFLL;
  result = (_QWORD *)((char *)this + 16);
  *result = 0xFFFFFFFFLL;
  result[1] = 0xFFFFFFFFLL;
  return result;
}


// ============================================================

// Address: 0x3282d8
// Original: _ZN19CUpsideDownCarCheck15IsCarUpsideDownEi
// Demangled: CUpsideDownCarCheck::IsCarUpsideDown(int)
bool __fastcall CUpsideDownCarCheck::IsCarUpsideDown(CUpsideDownCarCheck *this, unsigned int a2)
{
  _DWORD *v2; // r0
  int v3; // r3
  int v4; // r3
  bool v5; // r3
  float v6; // s2

  v2 = (_DWORD *)(*(_DWORD *)CPools::ms_pVehiclePool + 2604 * (a2 >> 8));
  v3 = v2[360];
  if ( v3 == 9 )
  {
    v4 = 518;
  }
  else
  {
    if ( v3 )
    {
      v5 = 1;
      goto LABEL_7;
    }
    v4 = 605;
  }
  v5 = LOBYTE(v2[v4]) < 4u;
LABEL_7:
  v6 = *(float *)(*(_DWORD *)(*(_DWORD *)CPools::ms_pVehiclePool + 2604 * (a2 >> 8) + 20) + 40);
  return (v6 < 0.0 || v6 < 0.3 && v5) && (*(int (__fastcall **)(_DWORD *, _DWORD))(*v2 + 232))(v2, 0) != 0;
}


// ============================================================

// Address: 0x32836c
// Original: _ZN19CUpsideDownCarCheck15IsCarUpsideDownEPK8CVehicle
// Demangled: CUpsideDownCarCheck::IsCarUpsideDown(CVehicle const*)
bool __fastcall CUpsideDownCarCheck::IsCarUpsideDown(CUpsideDownCarCheck *this, const CVehicle *a2)
{
  int v2; // r0
  unsigned __int8 *v3; // r0
  bool v4; // r0
  float v5; // s2

  v2 = *((_DWORD *)a2 + 360);
  if ( v2 == 9 )
  {
    v3 = (unsigned __int8 *)a2 + 2072;
  }
  else
  {
    if ( v2 )
    {
      v4 = 1;
      goto LABEL_7;
    }
    v3 = (unsigned __int8 *)a2 + 2420;
  }
  v4 = *v3 < 4u;
LABEL_7:
  v5 = *(float *)(*((_DWORD *)a2 + 5) + 40);
  return (v5 < 0.0 || v4 && v5 < 0.3)
      && (*(int (__fastcall **)(const CVehicle *, _DWORD))(*(_DWORD *)a2 + 232))(a2, 0) != 0;
}


// ============================================================

// Address: 0x3283e0
// Original: _ZN19CUpsideDownCarCheck12UpdateTimersEv
// Demangled: CUpsideDownCarCheck::UpdateTimers(void)
char *__fastcall CUpsideDownCarCheck::UpdateTimers(CUpsideDownCarCheck *this)
{
  int v2; // r5
  unsigned int v3; // r8
  int v4; // r1
  bool v5; // r1
  float v6; // s0
  char *result; // r0
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r1

  v2 = 0;
  v3 = (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
  do
  {
    v8 = *((_DWORD *)this + 2 * v2);
    if ( v8 < 0
      || *(unsigned __int8 *)(*(_DWORD *)(CPools::ms_pVehiclePool + 4) + ((unsigned int)v8 >> 8)) != (unsigned __int8)v8
      || (v9 = (_DWORD *)(*(_DWORD *)CPools::ms_pVehiclePool + 2604 * ((unsigned int)v8 >> 8))) == 0 )
    {
      *((_DWORD *)this + 2 * v2) = -1;
      goto LABEL_16;
    }
    v10 = v9[360];
    if ( v10 == 9 )
    {
      v4 = 518;
LABEL_3:
      v5 = LOBYTE(v9[v4]) < 4u;
      goto LABEL_5;
    }
    if ( !v10 )
    {
      v4 = 605;
      goto LABEL_3;
    }
    v5 = 1;
LABEL_5:
    v6 = *(float *)(v9[5] + 40);
    if ( (v6 < 0.0 || v5 && v6 < 0.3) && (*(int (__fastcall **)(_DWORD *, _DWORD))(*v9 + 232))(v9, 0) == 1 )
    {
      result = (char *)this + 8 * v2;
      *((_DWORD *)result + 1) += v3;
      goto LABEL_17;
    }
LABEL_16:
    result = (char *)this + 8 * v2;
    *((_DWORD *)result + 1) = 0;
LABEL_17:
    ++v2;
  }
  while ( v2 != 6 );
  return result;
}


// ============================================================

// Address: 0x3284e8
// Original: _ZN19CUpsideDownCarCheck20AreAnyCarsUpsideDownEv
// Demangled: CUpsideDownCarCheck::AreAnyCarsUpsideDown(void)
bool __fastcall CUpsideDownCarCheck::AreAnyCarsUpsideDown(CUpsideDownCarCheck *this)
{
  return *(int *)this >= 0 && *((_DWORD *)this + 1) > 0x7D0u
      || *((int *)this + 2) > -1 && *((_DWORD *)this + 3) > 0x7D0u
      || *((int *)this + 4) >= 0 && *((_DWORD *)this + 5) > 0x7D0u
      || *((int *)this + 6) >= 0 && *((_DWORD *)this + 7) > 0x7D0u
      || *((int *)this + 8) >= 0 && *((_DWORD *)this + 9) > 0x7D0u
      || *((int *)this + 10) >= 0 && *((_DWORD *)this + 11) > 0x7D0u;
}


// ============================================================

// Address: 0x328546
// Original: _ZN19CUpsideDownCarCheck13AddCarToCheckEi
// Demangled: CUpsideDownCarCheck::AddCarToCheck(int)
int *__fastcall CUpsideDownCarCheck::AddCarToCheck(int *this, int a2)
{
  int *v2; // r3
  int v3; // r2

  if ( *this < 0 )
  {
    v3 = 0;
    v2 = this;
  }
  else
  {
    v2 = this + 2;
    if ( this[2] <= -1 )
    {
      v3 = 1;
    }
    else
    {
      v2 = this + 4;
      if ( this[4] < 0 )
      {
        v3 = 2;
      }
      else
      {
        v2 = this + 6;
        if ( this[6] < 0 )
        {
          v3 = 3;
        }
        else
        {
          v2 = this + 8;
          if ( this[8] < 0 )
          {
            v3 = 4;
          }
          else
          {
            v2 = this + 10;
            if ( this[10] > -1 )
              return this;
            v3 = 5;
          }
        }
      }
    }
  }
  this += 2 * v3;
  *v2 = a2;
  this[1] = 0;
  return this;
}


// ============================================================

// Address: 0x3285ac
// Original: _ZN19CUpsideDownCarCheck18RemoveCarFromCheckEi
// Demangled: CUpsideDownCarCheck::RemoveCarFromCheck(int)
_DWORD *__fastcall CUpsideDownCarCheck::RemoveCarFromCheck(_DWORD *this, int a2)
{
  if ( *this == a2 )
  {
    *this = -1;
    this[1] = 0;
  }
  if ( this[2] == a2 )
  {
    this[2] = -1;
    this[3] = 0;
  }
  if ( this[4] == a2 )
  {
    this[4] = -1;
    this[5] = 0;
  }
  if ( this[6] == a2 )
  {
    this[6] = -1;
    this[7] = 0;
  }
  if ( this[8] == a2 )
  {
    this[8] = -1;
    this[9] = 0;
  }
  if ( this[10] == a2 )
  {
    this[10] = -1;
    this[11] = 0;
  }
  return this;
}


// ============================================================

// Address: 0x32860e
// Original: _ZN19CUpsideDownCarCheck29HasCarBeenUpsideDownForAWhileEi
// Demangled: CUpsideDownCarCheck::HasCarBeenUpsideDownForAWhile(int)
int __fastcall CUpsideDownCarCheck::HasCarBeenUpsideDownForAWhile(CUpsideDownCarCheck *this, int a2)
{
  int result; // r0
  int v4; // r3

  result = 0;
  v4 = 0;
  if ( *(_DWORD *)this != a2 )
  {
    if ( *((_DWORD *)this + 2) == a2 )
    {
      v4 = 1;
    }
    else if ( *((_DWORD *)this + 4) == a2 )
    {
      v4 = 2;
    }
    else if ( *((_DWORD *)this + 6) == a2 )
    {
      v4 = 3;
    }
    else if ( *((_DWORD *)this + 8) == a2 )
    {
      v4 = 4;
    }
    else
    {
      if ( *((_DWORD *)this + 10) != a2 )
        return 0;
      v4 = 5;
    }
  }
  if ( *((_DWORD *)this + 2 * v4 + 1) > 0x7D0u )
    return 1;
  return result;
}


// ============================================================
