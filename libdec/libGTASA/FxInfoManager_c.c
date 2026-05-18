
// Address: 0x18a9ac
// Original: j__ZN15FxInfoManager_c17ProcessRenderInfoEffffhP12RenderInfo_t
// Demangled: FxInfoManager_c::ProcessRenderInfo(float,float,float,float,uchar,RenderInfo_t *)
// attributes: thunk
int __fastcall FxInfoManager_c::ProcessRenderInfo(int a1, int a2, int a3, int a4, float a5, int a6, int a7)
{
  return _ZN15FxInfoManager_c17ProcessRenderInfoEffffhP12RenderInfo_t(a1, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x18dda8
// Original: j__ZN15FxInfoManager_c19ProcessMovementInfoEffffhP14MovementInfo_t
// Demangled: FxInfoManager_c::ProcessMovementInfo(float,float,float,float,uchar,MovementInfo_t *)
// attributes: thunk
int __fastcall FxInfoManager_c::ProcessMovementInfo(int a1, int a2, int a3, int a4, float a5, int a6, int a7)
{
  return _ZN15FxInfoManager_c19ProcessMovementInfoEffffhP14MovementInfo_t(a1, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x18e7d8
// Original: j__ZN15FxInfoManager_c9AddFxInfoEi
// Demangled: FxInfoManager_c::AddFxInfo(int)
// attributes: thunk
int __fastcall FxInfoManager_c::AddFxInfo(FxInfoManager_c *this, int a2)
{
  return _ZN15FxInfoManager_c9AddFxInfoEi(this, a2);
}


// ============================================================

// Address: 0x192230
// Original: j__ZN15FxInfoManager_cD2Ev
// Demangled: FxInfoManager_c::~FxInfoManager_c()
// attributes: thunk
void __fastcall FxInfoManager_c::~FxInfoManager_c(FxInfoManager_c *this)
{
  _ZN15FxInfoManager_cD2Ev(this);
}


// ============================================================

// Address: 0x19bba4
// Original: j__ZN15FxInfoManager_c4LoadEji
// Demangled: FxInfoManager_c::Load(uint,int)
// attributes: thunk
int __fastcall FxInfoManager_c::Load(FxInfoManager_c *this, unsigned int a2, int a3)
{
  return _ZN15FxInfoManager_c4LoadEji(this, a2, a3);
}


// ============================================================

// Address: 0x19f68c
// Original: j__ZN15FxInfoManager_c19ProcessEmissionInfoEfffhP14EmissionInfo_t
// Demangled: FxInfoManager_c::ProcessEmissionInfo(float,float,float,uchar,EmissionInfo_t *)
// attributes: thunk
int __fastcall FxInfoManager_c::ProcessEmissionInfo(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return _ZN15FxInfoManager_c19ProcessEmissionInfoEfffhP14EmissionInfo_t(a1, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x369784
// Original: _ZN15FxInfoManager_cD2Ev
// Demangled: FxInfoManager_c::~FxInfoManager_c()
void __fastcall FxInfoManager_c::~FxInfoManager_c(FxInfoManager_c *this)
{
  ;
}


// ============================================================

// Address: 0x369788
// Original: _ZN15FxInfoManager_c9AddFxInfoEi
// Demangled: FxInfoManager_c::AddFxInfo(int)
int __fastcall FxInfoManager_c::AddFxInfo(FxInfoManager_c *this, int a2)
{
  int Mem; // r4
  __int16 v3; // r0
  __int16 v4; // r0
  int v5; // r1
  __int16 v6; // r0
  __int16 v7; // r0
  __int16 v8; // r0
  __int16 v9; // r0

  Mem = 0;
  if ( a2 < 8320 )
  {
    if ( a2 >= 4352 )
    {
      switch ( a2 )
      {
        case 8193:
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_665A8C;
          FxInterpInfo32_c::FxInterpInfo32_c((FxInterpInfo32_c *)(Mem + 8));
          *(_BYTE *)(Mem + 14) = 1;
          v3 = 8193;
          goto LABEL_57;
        case 8194:
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_665AA4;
          FxInterpInfo32_c::FxInterpInfo32_c((FxInterpInfo32_c *)(Mem + 8));
          *(_BYTE *)(Mem + 14) = 3;
          v6 = 8194;
          goto LABEL_55;
        case 8195:
        case 8197:
        case 8198:
        case 8199:
        case 8201:
        case 8202:
        case 8203:
        case 8204:
        case 8205:
        case 8206:
        case 8207:
        case 8209:
        case 8210:
        case 8211:
        case 8212:
        case 8213:
        case 8214:
        case 8215:
        case 8216:
        case 8217:
        case 8218:
        case 8219:
        case 8220:
        case 8221:
        case 8222:
        case 8223:
        case 8225:
        case 8226:
        case 8227:
        case 8228:
        case 8229:
        case 8230:
        case 8231:
        case 8232:
        case 8233:
        case 8234:
        case 8235:
        case 8236:
        case 8237:
        case 8238:
        case 8239:
        case 8240:
        case 8241:
        case 8242:
        case 8243:
        case 8244:
        case 8245:
        case 8246:
        case 8247:
        case 8248:
        case 8249:
        case 8250:
        case 8251:
        case 8252:
        case 8253:
        case 8254:
        case 8255:
          return Mem;
        case 8196:
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_665ABC;
          FxInterpInfo32_c::FxInterpInfo32_c((FxInterpInfo32_c *)(Mem + 8));
          *(_BYTE *)(Mem + 14) = 1;
          v3 = 8196;
          goto LABEL_57;
        case 8200:
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_665AD4;
          FxInterpInfo32_c::FxInterpInfo32_c((FxInterpInfo32_c *)(Mem + 8));
          *(_BYTE *)(Mem + 14) = 4;
          v4 = 8200;
          goto LABEL_59;
        case 8208:
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_665AEC;
          FxInterpInfo32_c::FxInterpInfo32_c((FxInterpInfo32_c *)(Mem + 8));
          *(_BYTE *)(Mem + 14) = 7;
          v7 = 8208;
          goto LABEL_53;
        case 8224:
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_665B04;
          FxInterpInfo32_c::FxInterpInfo32_c((FxInterpInfo32_c *)(Mem + 8));
          *(_BYTE *)(Mem + 14) = 3;
          v6 = 8224;
          goto LABEL_55;
        case 8256:
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_665B1C;
          FxInterpInfo32_c::FxInterpInfo32_c((FxInterpInfo32_c *)(Mem + 8));
          *(_BYTE *)(Mem + 14) = 1;
          v3 = 8256;
          goto LABEL_57;
        default:
          if ( a2 == 4352 )
          {
            Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
            *(_DWORD *)Mem = &off_665A5C;
            FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInterpInfoFloat_c *)(Mem + 8));
            v4 = 4352;
            *(_BYTE *)(Mem + 14) = 4;
            goto LABEL_59;
          }
          if ( a2 != 4608 )
            return Mem;
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_665A74;
          FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInterpInfoFloat_c *)(Mem + 8));
          *(_BYTE *)(Mem + 14) = 2;
          v8 = 4608;
          break;
      }
LABEL_45:
      *(_WORD *)(Mem + 4) = v8;
      v5 = 8;
    }
    else
    {
      switch ( a2 )
      {
        case 4097:
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_6659B4;
          FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInterpInfoFloat_c *)(Mem + 8));
          *(_BYTE *)(Mem + 14) = 1;
          v3 = 4097;
          goto LABEL_57;
        case 4098:
        case 4099:
        case 4101:
        case 4102:
        case 4103:
        case 4105:
        case 4106:
        case 4107:
        case 4108:
        case 4109:
        case 4110:
        case 4111:
        case 4113:
        case 4114:
        case 4115:
        case 4116:
        case 4117:
        case 4118:
        case 4119:
        case 4120:
        case 4121:
        case 4122:
        case 4123:
        case 4124:
        case 4125:
        case 4126:
        case 4127:
          return Mem;
        case 4100:
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_6659CC;
          FxInterpInfo32_c::FxInterpInfo32_c((FxInterpInfo32_c *)(Mem + 8));
          *(_BYTE *)(Mem + 14) = 7;
          v7 = 4100;
          goto LABEL_53;
        case 4104:
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_6659E4;
          FxInterpInfo32_c::FxInterpInfo32_c((FxInterpInfo32_c *)(Mem + 8));
          *(_BYTE *)(Mem + 14) = 2;
          v8 = 4104;
          goto LABEL_45;
        case 4112:
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_6659FC;
          FxInterpInfo32_c::FxInterpInfo32_c((FxInterpInfo32_c *)(Mem + 8));
          *(_BYTE *)(Mem + 14) = 3;
          v6 = 4112;
          break;
        case 4128:
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_665A14;
          FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInterpInfoFloat_c *)(Mem + 8));
          *(_BYTE *)(Mem + 14) = 2;
          v8 = 4128;
          goto LABEL_45;
        default:
          if ( a2 == 4160 )
          {
            Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
            *(_DWORD *)Mem = &off_665A2C;
            FxInterpInfoU255_c::FxInterpInfoU255_c((FxInterpInfoU255_c *)(Mem + 8));
            *(_BYTE *)(Mem + 14) = 2;
            v8 = 4160;
            goto LABEL_45;
          }
          if ( a2 != 4224 )
            return Mem;
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_665A44;
          FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInterpInfoFloat_c *)(Mem + 8));
          *(_BYTE *)(Mem + 14) = 3;
          v6 = 4224;
          break;
      }
LABEL_55:
      *(_WORD *)(Mem + 4) = v6;
      v5 = 12;
    }
    goto LABEL_60;
  }
  if ( a2 >= 16512 )
  {
    if ( a2 < 16896 )
    {
      if ( a2 == 16512 )
      {
        Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
        *(_DWORD *)Mem = &off_665C3C;
        FxInterpInfo32_c::FxInterpInfo32_c((FxInterpInfo32_c *)(Mem + 8));
        *(_BYTE *)(Mem + 14) = 1;
        v3 = 16512;
        goto LABEL_57;
      }
      if ( a2 != 16640 )
        return Mem;
      Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
      *(_DWORD *)Mem = &off_665C54;
      FxInterpInfoU255_c::FxInterpInfoU255_c((FxInterpInfoU255_c *)(Mem + 8));
      *(_BYTE *)(Mem + 14) = 7;
      v7 = 16640;
LABEL_53:
      *(_WORD *)(Mem + 4) = v7;
      v5 = 28;
    }
    else
    {
      switch ( a2 )
      {
        case 16896:
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_665C6C;
          FxInterpInfoU255_c::FxInterpInfoU255_c((FxInterpInfoU255_c *)(Mem + 8));
          *(_BYTE *)(Mem + 14) = 0;
          *(_WORD *)(Mem + 4) = 16896;
          return Mem;
        case 17408:
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_665C84;
          FxInterpInfoU255_c::FxInterpInfoU255_c((FxInterpInfoU255_c *)(Mem + 8));
          v5 = 20;
          *(_BYTE *)(Mem + 14) = 5;
          v9 = 17408;
LABEL_47:
          *(_WORD *)(Mem + 4) = v9;
          break;
        case 32769:
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_665C9C;
          FxInterpInfoU255_c::FxInterpInfoU255_c((FxInterpInfoU255_c *)(Mem + 8));
          v5 = 32;
          *(_BYTE *)(Mem + 14) = 8;
          *(_WORD *)(Mem + 4) = -32767;
          break;
        default:
          return Mem;
      }
    }
LABEL_60:
    *(_DWORD *)(Mem + 20) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, v5, 4);
    return Mem;
  }
  if ( a2 >= 9216 )
  {
    switch ( a2 )
    {
      case 16385:
        Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
        *(_DWORD *)Mem = &off_665B94;
        FxInterpInfoU255_c::FxInterpInfoU255_c((FxInterpInfoU255_c *)(Mem + 8));
        *(_BYTE *)(Mem + 14) = 4;
        v4 = 16385;
        goto LABEL_59;
      case 16386:
        Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
        *(_DWORD *)Mem = &off_665BAC;
        FxInterpInfo32_c::FxInterpInfo32_c((FxInterpInfo32_c *)(Mem + 8));
        *(_BYTE *)(Mem + 14) = 4;
        v4 = 16386;
        goto LABEL_59;
      case 16387:
      case 16389:
      case 16390:
      case 16391:
      case 16393:
      case 16394:
      case 16395:
      case 16396:
      case 16397:
      case 16398:
      case 16399:
      case 16401:
      case 16402:
      case 16403:
      case 16404:
      case 16405:
      case 16406:
      case 16407:
      case 16408:
      case 16409:
      case 16410:
      case 16411:
      case 16412:
      case 16413:
      case 16414:
      case 16415:
      case 16417:
      case 16418:
      case 16419:
      case 16420:
      case 16421:
      case 16422:
      case 16423:
      case 16424:
      case 16425:
      case 16426:
      case 16427:
      case 16428:
      case 16429:
      case 16430:
      case 16431:
      case 16432:
      case 16433:
      case 16434:
      case 16435:
      case 16436:
      case 16437:
      case 16438:
      case 16439:
      case 16440:
      case 16441:
      case 16442:
      case 16443:
      case 16444:
      case 16445:
      case 16446:
      case 16447:
        return Mem;
      case 16388:
        Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
        *(_DWORD *)Mem = &off_665BC4;
        FxInterpInfo255_c::FxInterpInfo255_c((FxInterpInfo255_c *)(Mem + 8));
        *(_BYTE *)(Mem + 14) = 4;
        v4 = 16388;
        goto LABEL_59;
      case 16392:
        Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
        *(_DWORD *)Mem = &off_665BDC;
        FxInterpInfo255_c::FxInterpInfo255_c((FxInterpInfo255_c *)(Mem + 8));
        *(_BYTE *)(Mem + 14) = 0;
        *(_WORD *)(Mem + 4) = 16392;
        break;
      case 16400:
        Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
        *(_DWORD *)Mem = &off_665BF4;
        FxInterpInfoU255_c::FxInterpInfoU255_c((FxInterpInfoU255_c *)(Mem + 8));
        *(_BYTE *)(Mem + 14) = 2;
        v8 = 16400;
        goto LABEL_45;
      case 16416:
        Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
        *(_DWORD *)Mem = &off_665C0C;
        FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInterpInfoFloat_c *)(Mem + 8));
        v5 = 36;
        *(_BYTE *)(Mem + 14) = 9;
        v9 = 16416;
        goto LABEL_47;
      case 16448:
        Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
        *(_DWORD *)Mem = &off_665C24;
        FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInterpInfoFloat_c *)(Mem + 8));
        *(_BYTE *)(Mem + 14) = 3;
        v6 = 16448;
        goto LABEL_55;
      default:
        if ( a2 == 9216 )
        {
          Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
          *(_DWORD *)Mem = &off_665B7C;
          FxInterpInfoU255_c::FxInterpInfoU255_c((FxInterpInfoU255_c *)(Mem + 8));
          *(_BYTE *)(Mem + 14) = 0;
          *(_WORD *)(Mem + 4) = 9216;
        }
        break;
    }
    return Mem;
  }
  switch ( a2 )
  {
    case 8320:
      Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
      *(_DWORD *)Mem = &off_665B34;
      FxInterpInfo32_c::FxInterpInfo32_c((FxInterpInfo32_c *)(Mem + 8));
      *(_BYTE *)(Mem + 14) = 1;
      v3 = 8320;
LABEL_57:
      *(_WORD *)(Mem + 4) = v3;
      v5 = 4;
      goto LABEL_60;
    case 8448:
      Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
      *(_DWORD *)Mem = &off_665B4C;
      FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInterpInfoFloat_c *)(Mem + 8));
      *(_BYTE *)(Mem + 14) = 4;
      v4 = 8448;
LABEL_59:
      *(_WORD *)(Mem + 4) = v4;
      v5 = 16;
      goto LABEL_60;
    case 8704:
      Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 4);
      *(_DWORD *)Mem = &off_665B64;
      FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInterpInfoFloat_c *)(Mem + 8));
      *(_BYTE *)(Mem + 14) = 0;
      *(_WORD *)(Mem + 4) = 8704;
      break;
  }
  return Mem;
}


// ============================================================

// Address: 0x36a140
// Original: _ZN15FxInfoManager_c19ProcessEmissionInfoEfffhP14EmissionInfo_t
// Demangled: FxInfoManager_c::ProcessEmissionInfo(float,float,float,uchar,EmissionInfo_t *)
int __fastcall FxInfoManager_c::ProcessEmissionInfo(int a1, int a2, float a3, int a4, int a5, int a6)
{
  int result; // r0
  int v10; // r1
  int v12; // r5
  _BYTE *v13; // r0

  *(_DWORD *)(a6 + 92) = 0x40000000;
  *(_DWORD *)(a6 + 96) = 0;
  *(_DWORD *)(a6 + 100) = 0x40000000;
  *(_QWORD *)(a6 + 32) = 0LL;
  *(_QWORD *)(a6 + 40) = 0LL;
  *(_QWORD *)(a6 + 20) = 0LL;
  *(_QWORD *)(a6 + 28) = 0LL;
  *(_QWORD *)(a6 + 4) = 0LL;
  *(_QWORD *)(a6 + 12) = 0LL;
  *(_QWORD *)(a6 + 48) = 1065353216LL;
  *(_QWORD *)(a6 + 56) = 0x3F80000000000000LL;
  *(_QWORD *)(a6 + 64) = 0LL;
  *(_QWORD *)(a6 + 72) = 0LL;
  result = a6 + 76;
  *(_QWORD *)(a6 + 76) = 0LL;
  *(_QWORD *)(a6 + 84) = 0LL;
  *(float *)a6 = a3 * 10.0;
  v10 = *(char *)(a1 + 8);
  if ( v10 >= 1 )
  {
    v12 = 0;
    do
    {
      v13 = *(_BYTE **)(*(_DWORD *)(a1 + 4) + 4 * v12);
      if ( (v13[5] & 0x10) != 0 )
      {
        (*(void (__fastcall **)(_BYTE *, int, _DWORD, float, int, int, int))(*(_DWORD *)v13 + 12))(
          v13,
          a2,
          0,
          COERCE_FLOAT(LODWORD(a3)),
          a4,
          a5,
          a6);
        LOBYTE(v10) = *(_BYTE *)(a1 + 8);
      }
      ++v12;
      result = (char)v10;
    }
    while ( v12 < (char)v10 );
  }
  return result;
}


// ============================================================

// Address: 0x36a210
// Original: _ZN15FxInfoManager_c19ProcessMovementInfoEffffhP14MovementInfo_t
// Demangled: FxInfoManager_c::ProcessMovementInfo(float,float,float,float,uchar,MovementInfo_t *)
int __fastcall FxInfoManager_c::ProcessMovementInfo(int a1, int a2, int a3, int a4, float a5, int a6, int a7)
{
  int result; // r0
  int v12; // r1
  int v13; // r5
  _BYTE *v14; // r0

  *(_WORD *)(a7 + 40) = 0;
  result = a7 + 24;
  *(_QWORD *)(a7 + 24) = 0LL;
  *(_QWORD *)(a7 + 32) = 0LL;
  v12 = *(char *)(a1 + 9);
  v13 = *(char *)(a1 + 8);
  if ( v13 < v12 )
  {
    do
    {
      v14 = *(_BYTE **)(*(_DWORD *)(a1 + 4) + 4 * v13);
      if ( (v14[5] & 0x20) != 0 )
      {
        (*(void (__fastcall **)(_BYTE *, int, int, int, _DWORD, int, int))(*(_DWORD *)v14 + 12))(
          v14,
          a2,
          a3,
          a4,
          LODWORD(a5),
          a6,
          a7);
        LOBYTE(v12) = *(_BYTE *)(a1 + 9);
      }
      ++v13;
      result = (char)v12;
    }
    while ( v13 < (char)v12 );
  }
  return result;
}


// ============================================================

// Address: 0x36a290
// Original: _ZN15FxInfoManager_c17ProcessRenderInfoEffffhP12RenderInfo_t
// Demangled: FxInfoManager_c::ProcessRenderInfo(float,float,float,float,uchar,RenderInfo_t *)
unsigned __int16 *__fastcall FxInfoManager_c::ProcessRenderInfo(
        int *a1,
        int a2,
        int a3,
        int a4,
        float a5,
        int a6,
        int a7)
{
  unsigned __int16 *result; // r0
  int v12; // r1
  int v13; // r6

  *(_DWORD *)(a7 + 8) = 0;
  *(_DWORD *)a7 = -1;
  *(_BYTE *)(a7 + 54) = 0;
  *(_BYTE *)(a7 + 55) = 0;
  *(_BYTE *)(a7 + 120) = 0;
  *(_BYTE *)(a7 + 52) = 0;
  *(_DWORD *)(a7 + 44) = 0;
  *(_BYTE *)(a7 + 121) = 0;
  *(_BYTE *)(a7 + 122) = 0;
  *(_BYTE *)(a7 + 123) = -1;
  *(_QWORD *)(a7 + 12) = 0x3DCCCCCD3DCCCCCDLL;
  *(_QWORD *)(a7 + 20) = 0LL;
  result = (unsigned __int16 *)(a7 + 28);
  *(_QWORD *)(a7 + 28) = 0xBF0000003F000000LL;
  *(_QWORD *)(a7 + 36) = 0xBF0000003F000000LL;
  v12 = *a1;
  v13 = *((char *)a1 + 9);
  if ( *a1 > v13 )
  {
    do
    {
      result = *(unsigned __int16 **)(a1[1] + 4 * v13);
      if ( result[2] >= 0x4000u )
      {
        result = (unsigned __int16 *)(*(int (__fastcall **)(unsigned __int16 *, int, int, int, _DWORD, int, int))(*(_DWORD *)result + 12))(
                                       result,
                                       a2,
                                       a3,
                                       a4,
                                       LODWORD(a5),
                                       a6,
                                       a7);
        v12 = *a1;
      }
      ++v13;
    }
    while ( v13 < v12 );
  }
  return result;
}


// ============================================================

// Address: 0x46e45c
// Original: _ZN15FxInfoManager_c4LoadEji
// Demangled: FxInfoManager_c::Load(uint,int)
int __fastcall FxInfoManager_c::Load(FxInfoManager_c *this, unsigned int a2, int a3)
{
  int v6; // r1
  int Mem; // r0
  int v8; // r1
  int v9; // r9
  FxInfoManager_c *v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r0
  int v15; // [sp+4h] [bp-1A4h] BYREF
  char v16[128]; // [sp+8h] [bp-1A0h] BYREF
  char v17[256]; // [sp+88h] [bp-120h] BYREF
  int v18; // [sp+188h] [bp-20h]

  ReadLine(a2, v17, 256);
  ReadLine(a2, v17, 256);
  sscanf(v17, "%s %d", v16, this);
  v6 = *(_DWORD *)this;
  *((_WORD *)this + 4) = -1;
  Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 4 * v6, 4);
  v8 = *(_DWORD *)this;
  *((_DWORD *)this + 1) = Mem;
  if ( v8 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      v15 = 1;
      ReadLine(a2, v17, 256);
      sscanf(v17, (const char *)&dword_46EBB4, v16);
      if ( !strcmp(v16, "FX_INFO_EMRATE_DATA:") )
        break;
      if ( !strcmp(v16, "FX_INFO_EMSIZE_DATA:") )
      {
        v10 = this;
        v11 = 4100;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_EMSPEED_DATA:") )
      {
        v10 = this;
        v11 = 4104;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_EMDIR_DATA:") )
      {
        v10 = this;
        v11 = 4112;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_EMANGLE_DATA:") )
      {
        v10 = this;
        v11 = 4128;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_EMLIFE_DATA:") )
      {
        v10 = this;
        v11 = 4160;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_EMPOS_DATA:") )
      {
        v10 = this;
        v11 = 4224;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_EMWEATHER_DATA:") )
      {
        v10 = this;
        v11 = 4352;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_EMROTATION_DATA:") )
      {
        v10 = this;
        v11 = 4608;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_NOISE_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 8193;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_FORCE_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 8194;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_FRICTION_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 8196;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_ATTRACTPT_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 8200;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_ATTRACTLINE_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 8208;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_GROUNDCOLLIDE_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 8224;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_WIND_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 8256;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_JITTER_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 8320;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_ROTSPEED_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 8448;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_FLOAT_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 8704;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_UNDERWATER_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 9216;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_COLOUR_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 16385;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_SIZE_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 16386;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_SPRITERECT_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 16388;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_HEATHAZE_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 16392;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_TRAIL_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 16400;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_FLAT_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 16416;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_DIR_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 16448;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_ANIMTEX_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 16512;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_COLOURRANGE_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 16640;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_SELFLIT_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 16896;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_COLOURBRIGHT_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 17408;
        goto LABEL_113;
      }
      if ( !strcmp(v16, "FX_INFO_SMOKE_DATA:") )
      {
        if ( a3 >= 1 )
        {
          ReadLine(a2, v17, 256);
          sscanf(v17, "%s %d", v16, &v15);
        }
        v10 = this;
        v11 = 32769;
        goto LABEL_113;
      }
LABEL_114:
      *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v9) + 6) = v15;
      if ( (*(_WORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v9) + 4) & 0x1000) == 0 )
      {
        if ( (*(_WORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v9) + 4) & 0x2000) != 0 )
        {
          if ( *((unsigned __int8 *)this + 8) == 255 )
            *((_BYTE *)this + 8) = v9;
        }
        else if ( (*(_WORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v9) + 4) & 0xC000) != 0
               && *((unsigned __int8 *)this + 9) == 255 )
        {
          *((_BYTE *)this + 9) = v9;
        }
      }
      v8 = *(_DWORD *)this;
      if ( ++v9 >= *(_DWORD *)this )
        goto LABEL_123;
    }
    v10 = this;
    v11 = 4097;
LABEL_113:
    *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v9) = FxInfoManager_c::AddFxInfo(v10, v11);
    v12 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v9);
    (*(void (__fastcall **)(int, unsigned int, int))(*(_DWORD *)v12 + 8))(v12, a2, a3);
    ReadLine(a2, v17, 256);
    goto LABEL_114;
  }
LABEL_123:
  v13 = *((unsigned __int8 *)this + 9);
  if ( v13 == 255 )
  {
    *((_BYTE *)this + 9) = v8;
    LOBYTE(v13) = v8;
  }
  if ( *((unsigned __int8 *)this + 8) == 255 )
    *((_BYTE *)this + 8) = v13;
  return _stack_chk_guard - v18;
}


// ============================================================
