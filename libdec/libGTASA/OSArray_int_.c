
// Address: 0x197288
// Original: j__ZN7OSArrayIiEC2ERKS0_
// Demangled: OSArray<int>::OSArray(OSArray<int> const&)
// attributes: thunk
int OSArray<int>::OSArray()
{
  return _ZN7OSArrayIiEC2ERKS0_();
}


// ============================================================

// Address: 0x2a3672
// Original: _ZN7OSArrayIiEC2ERKS0_
// Demangled: OSArray<int>::OSArray(OSArray<int> const&)
int __fastcall OSArray<int>::OSArray(int a1, int a2)
{
  int v3; // r11
  unsigned int v4; // r6
  void *v5; // r0
  int v6; // r9
  unsigned int v7; // r5
  int v8; // r10
  unsigned int v9; // r8
  _DWORD *v10; // r0
  void *v11; // r11
  _DWORD *v12; // r6
  int v13; // r0
  int v15; // [sp+0h] [bp-20h]

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v3 = a2;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 )
  {
    v5 = malloc(4 * v4);
    *(_DWORD *)a1 = v4;
    *(_DWORD *)(a1 + 8) = v5;
    if ( *(_DWORD *)(v3 + 4) )
    {
      v6 = 0;
      v7 = 0;
      v15 = v3;
      while ( 1 )
      {
        v8 = *(_DWORD *)(v3 + 8);
        if ( v4 >= v6 + 1 )
        {
          v12 = *(_DWORD **)(a1 + 8);
        }
        else
        {
          v9 = 4 * (v6 + 1) / 3u + 3;
          v10 = malloc(4 * v9);
          v11 = *(void **)(a1 + 8);
          v12 = v10;
          if ( v11 )
          {
            memcpy_0(v10, *(const void **)(a1 + 8), 4 * v6);
            free(v11);
            v6 = *(_DWORD *)(a1 + 4);
          }
          v3 = v15;
          *(_DWORD *)(a1 + 8) = v12;
          *(_DWORD *)a1 = v9;
        }
        v13 = *(_DWORD *)(v8 + 4 * v7++);
        v12[v6] = v13;
        v6 = *(_DWORD *)(a1 + 4) + 1;
        *(_DWORD *)(a1 + 4) = v6;
        if ( v7 >= *(_DWORD *)(v3 + 4) )
          break;
        v4 = *(_DWORD *)a1;
      }
    }
  }
  return a1;
}


// ============================================================
