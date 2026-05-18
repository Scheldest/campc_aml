// ADDR: 0x156334
// SYMBOL: sub_156334
int __fastcall sub_156334(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  char *v8; // r1
  char v9; // r1
  char *v10; // r0
  char v11; // r0
  int v12; // r5

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  v7 = sub_21FCD0();
  v8 = *(char **)(v7 + 4);
  *(_DWORD *)(a1 + 72) = v7;
  if ( v8 )
    v9 = *v8;
  else
    v9 = 0;
  v10 = *(char **)v7;
  *(_BYTE *)(a1 + 76) = v9;
  if ( v10 )
    v11 = *v10;
  else
    v11 = 0;
  *(_BYTE *)(a1 + 77) = v11;
  sub_22178C(a1 + 78, 0x200u);
  *(_BYTE *)(a1 + 590) = a3;
  v12 = operator new(0x210u);
  *(_DWORD *)(a1 + 592) = 529;
  *(_DWORD *)(a1 + 596) = 512;
  *(_DWORD *)(a1 + 600) = v12;
  sub_22177C(v12, 0x200u, a3);
  *(_DWORD *)(a1 + 604) = a4;
  *(_BYTE *)(v12 + 512) = 0;
  return a1;
}


// ======================================================================
// ADDR: 0x156414
// SYMBOL: sub_156414
int __fastcall sub_156414(int **a1, unsigned __int8 *a2, int a3, int a4, int a5, int a6)
{
  int result; // r0
  int *v10; // r0
  const char *v11; // r1
  int (__fastcall *v12)(int (__fastcall ***)(_DWORD, _DWORD), const char *, int); // r3
  int *v13; // r0
  unsigned int v14; // r1
  unsigned int v15; // r0
  int v16; // r9
  _DWORD *v17; // r0
  _DWORD *v18; // r6
  unsigned int v19; // r5
  _DWORD *v20; // r0
  int v21; // r0
  bool v22; // zf
  int v23; // r1
  _DWORD *v24; // t1
  void (*v25)(void); // r3
  unsigned int v26; // r1
  unsigned int v27; // r0
  int v28; // r9
  int i; // r6
  int *v30; // r0
  int (__fastcall *v31)(int *, int); // r2
  int v32; // r1
  int v33; // r2
  int *v34; // r0
  void (__fastcall *v35)(int (__fastcall ***)(_DWORD, _DWORD), const char *, int); // r3
  unsigned int v36; // r1
  unsigned int v37; // r0
  unsigned __int8 *v38; // r0
  unsigned __int8 *v39; // r5
  int v40; // t1
  int v41; // r0
  unsigned __int8 *v42; // r0
  unsigned __int8 *v43; // r5
  int v44; // t1
  int v45; // r2
  const char *v46; // r1
  _DWORD *v47; // r0
  _DWORD *v48; // r5
  unsigned int v49; // r6
  _DWORD *v50; // r0
  int v51; // r0
  int v52; // r1
  _DWORD *v53; // t1
  int v54; // r0
  int j; // r5
  int v56; // r0

  result = *a2;
  switch ( *a2 )
  {
    case 0u:
      v10 = *a1;
      v11 = "null";
      v12 = *(int (__fastcall **)(int (__fastcall ***)(_DWORD, _DWORD), const char *, int))(**a1 + 4);
      goto LABEL_30;
    case 1u:
      v13 = *a1;
      if ( !*(_DWORD *)(*((_DWORD *)a2 + 2) + 8) )
      {
        v45 = *v13;
        v46 = "{}";
        return (*(int (__fastcall **)(int *, const char *, int))(v45 + 4))(v13, v46, 2);
      }
      if ( a3 )
      {
        (*(void (__fastcall **)(int *, const char *, int))(*v13 + 4))(v13, "{\n", 2);
        v14 = *((unsigned __int8 *)a1 + 592);
        v15 = (unsigned int)a1[149];
        if ( !(v14 << 31) )
          v15 = v14 >> 1;
        v16 = a6 + a5;
        if ( v15 < a6 + a5 )
          std::string::resize(a1 + 148, 2 * v15, 32);
        v17 = (_DWORD *)*((_DWORD *)a2 + 2);
        v18 = (_DWORD *)*v17;
        if ( v17[2] != 1 )
        {
          v19 = 0;
          do
          {
            (*(void (**)(void))(**a1 + 4))();
            (*(void (__fastcall **)(int *, int))**a1)(*a1, 34);
            sub_156AEC(a1, v18 + 4, a4);
            (*(void (__fastcall **)(int *, const char *, int))(**a1 + 4))(*a1, "\": ", 3);
            sub_156414(a1, v18 + 8, 1, a4, a5, v16);
            (*(void (__fastcall **)(int *, const char *, int))(**a1 + 4))(*a1, ",\n", 2);
            v20 = (_DWORD *)v18[1];
            if ( v20 )
            {
              do
              {
                v18 = v20;
                v20 = (_DWORD *)*v20;
              }
              while ( v20 );
            }
            else
            {
              v21 = (int)(v18 + 2);
              v22 = *(_DWORD *)v18[2] == (_DWORD)v18;
              v18 = (_DWORD *)v18[2];
              if ( !v22 )
              {
                do
                {
                  v23 = *(_DWORD *)v21;
                  v24 = *(_DWORD **)(*(_DWORD *)v21 + 8);
                  v21 = *(_DWORD *)v21 + 8;
                  v18 = v24;
                }
                while ( *v24 != v23 );
              }
            }
            ++v19;
          }
          while ( v19 < *(_DWORD *)(*((_DWORD *)a2 + 2) + 8) - 1 );
        }
        (*(void (**)(void))(**a1 + 4))();
        (*(void (__fastcall **)(int *, int))**a1)(*a1, 34);
        sub_156AEC(a1, v18 + 4, a4);
        (*(void (__fastcall **)(int *, const char *, int))(**a1 + 4))(*a1, "\": ", 3);
        sub_156414(a1, v18 + 8, 1, a4, a5, v16);
        (*(void (__fastcall **)(int *, int))**a1)(*a1, 10);
        v25 = *(void (**)(void))(**a1 + 4);
        goto LABEL_72;
      }
      (*(void (__fastcall **)(int *, int))*v13)(v13, 123);
      v47 = (_DWORD *)*((_DWORD *)a2 + 2);
      v48 = (_DWORD *)*v47;
      if ( v47[2] != 1 )
      {
        v49 = 0;
        do
        {
          (*(void (__fastcall **)(int *, int))**a1)(*a1, 34);
          sub_156AEC(a1, v48 + 4, a4);
          (*(void (__fastcall **)(int *, const char *, int))(**a1 + 4))(*a1, "\":", 2);
          sub_156414(a1, v48 + 8, 0, a4, a5, a6);
          (*(void (__fastcall **)(int *, int))**a1)(*a1, 44);
          v50 = (_DWORD *)v48[1];
          if ( v50 )
          {
            do
            {
              v48 = v50;
              v50 = (_DWORD *)*v50;
            }
            while ( v50 );
          }
          else
          {
            v51 = (int)(v48 + 2);
            v22 = *(_DWORD *)v48[2] == (_DWORD)v48;
            v48 = (_DWORD *)v48[2];
            if ( !v22 )
            {
              do
              {
                v52 = *(_DWORD *)v51;
                v53 = *(_DWORD **)(*(_DWORD *)v51 + 8);
                v51 = *(_DWORD *)v51 + 8;
                v48 = v53;
              }
              while ( *v53 != v52 );
            }
          }
          ++v49;
        }
        while ( v49 < *(_DWORD *)(*((_DWORD *)a2 + 2) + 8) - 1 );
      }
      (*(void (__fastcall **)(int *, int))**a1)(*a1, 34);
      sub_156AEC(a1, v48 + 4, a4);
      (*(void (__fastcall **)(int *, const char *, int))(**a1 + 4))(*a1, "\":", 2);
      sub_156414(a1, v48 + 8, 0, a4, a5, a6);
      goto LABEL_73;
    case 2u:
      v13 = *a1;
      if ( **((_DWORD **)a2 + 2) != *(_DWORD *)(*((_DWORD *)a2 + 2) + 4) )
      {
        if ( a3 )
        {
          (*(void (__fastcall **)(int *, void *, int))(*v13 + 4))(v13, &unk_891FD, 2);
          v26 = *((unsigned __int8 *)a1 + 592);
          v27 = (unsigned int)a1[149];
          if ( !(v26 << 31) )
            v27 = v26 >> 1;
          v28 = a6 + a5;
          if ( v27 < a6 + a5 )
            std::string::resize(a1 + 148, 2 * v27, 32);
          for ( i = **((_DWORD **)a2 + 2); i != *(_DWORD *)(*((_DWORD *)a2 + 2) + 4) - 16; i += 16 )
          {
            (*(void (**)(void))(**a1 + 4))();
            sub_156414(a1, i, 1, a4, a5, v28);
            (*(void (__fastcall **)(int *, const char *, int))(**a1 + 4))(*a1, ",\n", 2);
          }
          (*(void (**)(void))(**a1 + 4))();
          sub_156414(a1, *(_DWORD *)(*((_DWORD *)a2 + 2) + 4) - 16, 1, a4, a5, v28);
          (*(void (__fastcall **)(int *, int))**a1)(*a1, 10);
          (*(void (**)(void))(**a1 + 4))();
        }
        else
        {
          (*(void (__fastcall **)(int *, int))*v13)(v13, 91);
          v54 = *(_DWORD *)(*((_DWORD *)a2 + 2) + 4);
          for ( j = **((_DWORD **)a2 + 2); j != v54 - 16; j += 16 )
          {
            sub_156414(a1, j, 0, a4, a5, a6);
            (*(void (__fastcall **)(int *, int))**a1)(*a1, 44);
            v54 = *(_DWORD *)(*((_DWORD *)a2 + 2) + 4);
          }
          sub_156414(a1, j, 0, a4, a5, a6);
        }
        v30 = *a1;
        v31 = *(int (__fastcall **)(int *, int))**a1;
        v32 = 93;
        return v31(v30, v32);
      }
      v45 = *v13;
      v46 = "[]";
      return (*(int (__fastcall **)(int *, const char *, int))(v45 + 4))(v13, v46, 2);
    case 3u:
      (*(void (__fastcall **)(int *, int))**a1)(*a1, 34);
      sub_156AEC(a1, *((_DWORD *)a2 + 2), a4);
      v30 = *a1;
      v31 = *(int (__fastcall **)(int *, int))**a1;
      v32 = 34;
      return v31(v30, v32);
    case 4u:
      v10 = *a1;
      v12 = *(int (__fastcall **)(int (__fastcall ***)(_DWORD, _DWORD), const char *, int))(**a1 + 4);
      if ( !a2[8] )
      {
        v11 = "false";
        goto LABEL_76;
      }
      v11 = "true";
LABEL_30:
      v33 = 4;
      return v12((int (__fastcall ***)(_DWORD, _DWORD))v10, v11, v33);
    case 5u:
      return sub_15711C(a1, a2, *((_DWORD *)a2 + 2), *((_DWORD *)a2 + 3));
    case 6u:
      return sub_156FD8(a1, a2, *((_DWORD *)a2 + 2), *((_DWORD *)a2 + 3));
    case 7u:
      return sub_157308(a1, a2, *((_DWORD *)a2 + 2), *((_DWORD *)a2 + 3));
    case 8u:
      v34 = *a1;
      v35 = *(void (__fastcall **)(int (__fastcall ***)(_DWORD, _DWORD), const char *, int))(**a1 + 4);
      if ( a3 )
      {
        v35((int (__fastcall ***)(_DWORD, _DWORD))v34, "{\n", 2);
        v36 = *((unsigned __int8 *)a1 + 592);
        v37 = (unsigned int)a1[149];
        if ( (v36 & 1) == 0 )
          v37 = v36 >> 1;
        if ( v37 < a6 + a5 )
          std::string::resize(a1 + 148, 2 * v37, 32);
        (*(void (**)(void))(**a1 + 4))();
        (*(void (__fastcall **)(int *, const char *, int))(**a1 + 4))(*a1, "\"bytes\": [", 10);
        v38 = *(unsigned __int8 **)(*((_DWORD *)a2 + 2) + 4);
        v39 = (unsigned __int8 *)**((_DWORD **)a2 + 2);
        if ( v39 != v38 )
        {
          if ( v39 != v38 - 1 )
          {
            do
            {
              v40 = *v39++;
              sub_156F54(a1, v40);
              (*(void (__fastcall **)(int *, const char *, int))(**a1 + 4))(*a1, ", ", 2);
            }
            while ( v39 != (unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)a2 + 2) + 4) - 1) );
          }
          sub_156F54(a1, *v39);
        }
        (*(void (__fastcall **)(int *, const char *, int))(**a1 + 4))(*a1, "],\n", 3);
        (*(void (**)(void))(**a1 + 4))();
        (*(void (__fastcall **)(int *, const char *, int))(**a1 + 4))(*a1, "\"subtype\": ", 11);
        v41 = *((_DWORD *)a2 + 2);
        if ( *(_BYTE *)(v41 + 24) )
          sub_156FD8(a1, *(unsigned __int8 *)(v41 + 24), *(_DWORD *)(v41 + 16), *(_DWORD *)(v41 + 20));
        else
          (*(void (__fastcall **)(int *, const char *, int))(**a1 + 4))(*a1, "null", 4);
        (*(void (__fastcall **)(int *, int))**a1)(*a1, 10);
        v25 = *(void (**)(void))(**a1 + 4);
LABEL_72:
        v25();
LABEL_73:
        v30 = *a1;
        v31 = *(int (__fastcall **)(int *, int))**a1;
        v32 = 125;
        return v31(v30, v32);
      }
      v35((int (__fastcall ***)(_DWORD, _DWORD))v34, "{\"bytes\":[", 10);
      v42 = *(unsigned __int8 **)(*((_DWORD *)a2 + 2) + 4);
      v43 = (unsigned __int8 *)**((_DWORD **)a2 + 2);
      if ( v43 != v42 )
      {
        while ( v43 != v42 - 1 )
        {
          v44 = *v43++;
          sub_156F54(a1, v44);
          (*(void (__fastcall **)(int *, int))**a1)(*a1, 44);
          v42 = *(unsigned __int8 **)(*((_DWORD *)a2 + 2) + 4);
        }
        sub_156F54(a1, *v43);
      }
      (*(void (__fastcall **)(int *, const char *, int))(**a1 + 4))(*a1, "],\"subtype\":", 12);
      v56 = *((_DWORD *)a2 + 2);
      if ( *(_BYTE *)(v56 + 24) )
      {
        sub_156FD8(a1, *(unsigned __int8 *)(v56 + 24), *(_DWORD *)(v56 + 16), *(_DWORD *)(v56 + 20));
        goto LABEL_73;
      }
      v10 = *a1;
      v11 = "null}";
      v12 = *(int (__fastcall **)(int (__fastcall ***)(_DWORD, _DWORD), const char *, int))(**a1 + 4);
LABEL_76:
      v33 = 5;
      return v12((int (__fastcall ***)(_DWORD, _DWORD))v10, v11, v33);
    case 9u:
      return (*(int (__fastcall **)(int *, const char *, int))(**a1 + 4))(*a1, "<discarded>", 11);
    default:
      return result;
  }
}


// ======================================================================
// ADDR: 0x156a98
// SYMBOL: sub_156A98
int __fastcall sub_156A98(int a1)
{
  if ( *(unsigned __int8 *)(a1 + 592) << 31 )
    operator delete(*(void **)(a1 + 600));
  return sub_1563DC(a1);
}


// ======================================================================
