
// Address: 0x198c9c
// Original: j__ZN16ES2VectorBinding5ApplyEj
// Demangled: ES2VectorBinding::Apply(uint)
// attributes: thunk
int __fastcall ES2VectorBinding::Apply(ES2VectorBinding *this, unsigned int a2)
{
  return _ZN16ES2VectorBinding5ApplyEj(this, a2);
}


// ============================================================

// Address: 0x1cdd1c
// Original: _ZN16ES2VectorBinding5ApplyEj
// Demangled: ES2VectorBinding::Apply(uint)
int __fastcall ES2VectorBinding::Apply(int this, unsigned int a2)
{
  bool v2; // zf
  int v3; // r3
  int v4; // r2
  int v5; // r1
  _DWORD *v6; // r2
  _DWORD *v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r2
  int v11; // r1
  _DWORD *v12; // r2
  int v13; // r12
  int v14; // r3
  int v15; // r2
  int v16; // r1
  unsigned int v17; // r2
  __int64 v18; // d16
  int v19; // r3
  int v20; // r2
  int v21; // r1
  _QWORD *v22; // r2
  __int64 v23; // d17

  v2 = *(_BYTE *)(this + 4) == 0;
  if ( *(_BYTE *)(this + 4) )
    v2 = *(_DWORD *)this == -1;
  if ( !v2 )
  {
    switch ( *(_DWORD *)(this + 24) )
    {
      case 1:
        v3 = renderQueue;
        **(_DWORD **)(renderQueue + 628) = 0;
        *(_DWORD *)(v3 + 628) += 4;
        v4 = renderQueue;
        **(_DWORD **)(renderQueue + 628) = a2;
        *(_DWORD *)(v4 + 628) += 4;
        v5 = renderQueue;
        v6 = (_DWORD *)((*(_DWORD *)(renderQueue + 628) + 3) & 0xFFFFFFFC);
        *(_DWORD *)(renderQueue + 628) = v6;
        v7 = (_DWORD *)(v5 + 628);
        *v6 = *(_DWORD *)(this + 8);
        v8 = 4;
        goto LABEL_9;
      case 2:
        v9 = renderQueue;
        **(_DWORD **)(renderQueue + 628) = 1;
        *(_DWORD *)(v9 + 628) += 4;
        v10 = renderQueue;
        **(_DWORD **)(renderQueue + 628) = a2;
        *(_DWORD *)(v10 + 628) += 4;
        v11 = renderQueue;
        v12 = (_DWORD *)((*(_DWORD *)(renderQueue + 628) + 3) & 0xFFFFFFFC);
        *(_DWORD *)(renderQueue + 628) = v12;
        v13 = *(_DWORD *)(this + 12);
        v7 = (_DWORD *)(v11 + 628);
        *v12 = *(_DWORD *)(this + 8);
        v12[1] = v13;
        v8 = 8;
        goto LABEL_9;
      case 3:
        v14 = renderQueue;
        **(_DWORD **)(renderQueue + 628) = 2;
        *(_DWORD *)(v14 + 628) += 4;
        v15 = renderQueue;
        **(_DWORD **)(renderQueue + 628) = a2;
        *(_DWORD *)(v15 + 628) += 4;
        v16 = renderQueue;
        v17 = (*(_DWORD *)(renderQueue + 628) + 3) & 0xFFFFFFFC;
        *(_DWORD *)(renderQueue + 628) = v17;
        v18 = *(_QWORD *)(this + 8);
        v7 = (_DWORD *)(v16 + 628);
        *(_DWORD *)(v17 + 8) = *(_DWORD *)(this + 16);
        *(_QWORD *)v17 = v18;
        v8 = 12;
        goto LABEL_9;
      case 4:
        v19 = renderQueue;
        **(_DWORD **)(renderQueue + 628) = 3;
        *(_DWORD *)(v19 + 628) += 4;
        v20 = renderQueue;
        **(_DWORD **)(renderQueue + 628) = a2;
        *(_DWORD *)(v20 + 628) += 4;
        v21 = renderQueue;
        v22 = (_QWORD *)((*(_DWORD *)(renderQueue + 628) + 3) & 0xFFFFFFFC);
        *(_DWORD *)(renderQueue + 628) = v22;
        v23 = *(_QWORD *)(this + 16);
        v7 = (_DWORD *)(v21 + 628);
        *v22 = *(_QWORD *)(this + 8);
        v22[1] = v23;
        v8 = 16;
LABEL_9:
        *v7 += v8;
        break;
      default:
        break;
    }
    *(_BYTE *)(this + 4) = 0;
  }
  return this;
}


// ============================================================
