// ADDR: 0x124358
// SYMBOL: sub_124358
int __fastcall sub_124358(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  int v6; // r5
  int v7; // r10
  int v8; // r11
  int v9; // r9
  int *v10; // r2
  int *v11; // r6
  int *v12; // r8
  _DWORD *v13; // r0
  const char *v14; // r6
  _DWORD *v15; // r5
  size_t v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r5
  int v19; // r0
  int v20; // r6
  int v21; // r0
  int *v22; // r5
  int v23; // r1
  int v24; // r0
  int v25; // r5
  std::runtime_error *exception; // r4
  int v29; // [sp+14h] [bp-2Ch]
  _BYTE v30[4]; // [sp+18h] [bp-28h] BYREF
  _BYTE v31[4]; // [sp+1Ch] [bp-24h] BYREF
  _BYTE v32[32]; // [sp+20h] [bp-20h] BYREF

  if ( dword_263C34 )
  {
    _android_log_print(
      6,
      "AXL",
      "CHandlingHook: Double calling CHandlingHook constructor. There can be only one copy of this class");
    exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
    std::runtime_error::runtime_error(exception, "Double calling CHandlingHook constructor");
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))std::underflow_error::~underflow_error);
  }
  v5 = -678;
  dword_263C34 = a1;
  v6 = 12;
  v7 = 24;
  v8 = 13;
  v9 = 210;
  v10 = &dword_22C944;
  while ( 2 )
  {
    v11 = &v10[v5];
    switch ( v10[v5 + 678] )
    {
      case 0:
        v29 = v6;
        v12 = v10;
        ((void (*)(void))sub_124658)();
        v13 = sub_FB2B4(dword_263C74, (int)"{ eVehicle_t::NOT_A_HANDLING, \"", 31);
        v14 = (const char *)v11[679];
        v15 = v13;
        v16 = strlen(v14);
        v17 = sub_FB2B4(v15, (int)v14, v16);
        v18 = sub_FB2B4(v17, (int)"\" },", 4);
        std::ios_base::getloc((std::ios_base *)v31);
        v19 = std::locale::use_facet((std::locale *)v31, (std::locale::id *)&std::ctype<char>::id);
        v20 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v19 + 28))(v19, 10);
        std::locale::~locale((std::locale *)v31);
        std::ostream::put(v18, v20);
        std::ostream::flush(v18);
        v10 = v12;
        v6 = v29;
        goto LABEL_9;
      case 2:
        ++v8;
        goto LABEL_8;
      case 3:
        ++v7;
        goto LABEL_8;
      case 4:
        ++v6;
        goto LABEL_8;
      default:
LABEL_8:
        ++v9;
LABEL_9:
        v5 += 2;
        if ( v5 * 4 )
          continue;
        v21 = a5;
        if ( v6 > a5 )
          v21 = v6;
        sub_1246CC(v21);
        sub_164196(dword_23DF24 + 6769752, sub_124A1C, v30);
        sub_164196(dword_23DF24 + 6767236, sub_124A64, v30);
        sub_164196(dword_23DF24 + 6773176, sub_124AA8, v30);
        sub_164196(dword_23DF24 + 6773840, sub_124B00, v30);
        sub_164196(dword_23DF24 + 6748052, sub_124B0C, &unk_263C38);
        sub_164196(dword_23DF24 + 6763396, sub_124C90, &unk_263C3C);
        sub_164196(dword_23DF24 + 6751372, sub_124CB8, &off_263C40);
        sub_164196(dword_23DF24 + 6758256, sub_12525C, 0);
        v22 = &dword_22C944;
        do
        {
          v23 = v22[1];
          switch ( *v22 )
          {
            case 1:
              sub_12528C(a1, v23);
              break;
            case 2:
              sub_1253B8(a1, v23);
              break;
            case 3:
              sub_125590(a1, v23);
              break;
            case 4:
              sub_125788(a1, v23);
              break;
            default:
              break;
          }
          v22 += 2;
        }
        while ( v22 != &`vtable for'descent_builder::builder_t<ColHook> );
        sub_124658(&`vtable for'descent_builder::builder_t<ColHook>);
        std::ios_base::getloc((std::ios_base *)v32);
        v24 = std::locale::use_facet((std::locale *)v32, (std::locale::id *)&std::ctype<char>::id);
        v25 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v24 + 28))(v24, 10);
        std::locale::~locale((std::locale *)v32);
        std::ostream::put(dword_263C74, v25);
        std::ostream::flush(dword_263C74);
        return a1;
    }
  }
}


// ======================================================================
