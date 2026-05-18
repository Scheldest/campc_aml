// ADDR: 0x111ad4
// SYMBOL: sub_111AD4
int sub_111AD4()
{
  int result; // r0
  std::runtime_error *exception; // r4

  result = dword_263438;
  if ( !dword_263438 )
  {
    exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
    std::runtime_error::runtime_error(exception, "descent_builder: object not created yet");
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))std::underflow_error::~underflow_error);
  }
  return result;
}


// ======================================================================
// ADDR: 0x111b24
// SYMBOL: sub_111B24
int __fastcall sub_111B24(int a1, int a2)
{
  int result; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r0
  int v8; // s0
  int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r0
  __int64 v13; // r0
  int v14; // r0

  result = *(_DWORD *)(a1 + 16);
  if ( result != a2 )
  {
    if ( a2 == 2 )
    {
      v12 = sub_111BD4();
      v13 = sub_163144(a1 + 20, v12, "arzhud_bg_radar");
      v14 = sub_115004(v13, HIDWORD(v13));
      result = sub_114E60(v14, 1);
    }
    else
    {
      if ( a2 != 1 )
      {
        if ( a2 )
        {
LABEL_10:
          *(_DWORD *)(a1 + 16) = a2;
          return result;
        }
        v5 = sub_1630A8(a1 + 20);
        v7 = sub_115004(v5, v6);
        result = sub_114E60(v7, 0);
        v8 = 1127481344;
LABEL_9:
        *(_DWORD *)(a1 + 44) = v8;
        goto LABEL_10;
      }
      v9 = sub_1630A8(a1 + 20);
      v11 = sub_115004(v9, v10);
      result = sub_114E60(v11, 1);
    }
    v8 = 1120403456;
    goto LABEL_9;
  }
  return result;
}


// ======================================================================
