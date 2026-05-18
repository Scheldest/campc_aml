
// Address: 0x19410c
// Original: j__ZN11CCheckpoint6RenderEv
// Demangled: CCheckpoint::Render(void)
// attributes: thunk
int __fastcall CCheckpoint::Render(CCheckpoint *this)
{
  return _ZN11CCheckpoint6RenderEv(this);
}


// ============================================================

// Address: 0x5c3df0
// Original: _ZN11CCheckpoint6RenderEv
// Demangled: CCheckpoint::Render(void)
int __fastcall CCheckpoint::Render(CCheckpoint *this)
{
  __int64 v2; // r0
  float v3; // r12
  float v4; // lr
  float v5; // r4
  int v6; // r8
  unsigned __int8 v7; // r5
  unsigned __int8 v8; // r11
  bool v9; // zf
  float v10; // s2
  float v11; // s0
  float v12; // s4
  float v13; // s6
  int v14; // r2
  float32x2_t v15; // d16
  unsigned __int64 v16; // d1
  float v17; // s0
  int v18; // r6
  char v19; // r5
  float v20; // s2
  float v21; // s10
  float v22; // s12
  float v23; // s3
  float v24; // s8
  float v25; // s4
  float v26; // s8
  int *v27; // r2
  float *v29; // [sp+8h] [bp-80h]
  _BOOL4 v30; // [sp+2Ch] [bp-5Ch]
  float v31; // [sp+38h] [bp-50h]
  float v32; // [sp+3Ch] [bp-4Ch] BYREF
  float v33; // [sp+40h] [bp-48h] BYREF
  CSprite *v34[2]; // [sp+44h] [bp-44h] BYREF
  float v35; // [sp+4Ch] [bp-3Ch]
  _BYTE v36[12]; // [sp+50h] [bp-38h] BYREF
  float v37[11]; // [sp+5Ch] [bp-2Ch] BYREF

  LODWORD(v2) = *(unsigned __int16 *)this;
  switch ( (int)v2 )
  {
    case 0:
    case 1:
    case 2:
      if ( CWaterLevel::GetWaterLevelNoWaves(
             *((CWaterLevel **)this + 4),
             *((float *)this + 5),
             *((float *)this + 6),
             COERCE_FLOAT(v37),
             0,
             0,
             v29) == 1 )
      {
        if ( v37[0] < *((float *)this + 6) )
        {
          LODWORD(v3) = 1;
        }
        else
        {
          *((float *)this + 6) = v37[0];
          v3 = 0.0;
        }
      }
      else
      {
        LODWORD(v3) = 1;
      }
      LODWORD(v4) = *((unsigned __int8 *)this + 8);
      LODWORD(v5) = *((unsigned __int8 *)this + 9);
      v6 = 1;
      v7 = *((_BYTE *)this + 10);
      v8 = *((_BYTE *)this + 11);
      *(_DWORD *)&v36[8] = *((_DWORD *)this + 6);
      *(_QWORD *)v36 = *((_QWORD *)this + 2);
      *(float *)&v36[8] = *(float *)&v36[8] + 3.0;
      if ( *(_WORD *)this == 1 )
      {
        *(float *)&v30 = v5;
        v31 = v3;
        RwRenderStateSet(1, *(_DWORD *)gpFinishFlagTex);
        RwRenderStateSet(8, 0);
        RwRenderStateSet(6, 1);
        RwRenderStateSet(12, 1);
        RwRenderStateSet(2, 1);
        if ( CSprite::CalcScreenCoors((int)v36, (int)v34, (int)&v33, (int)&v32, 0, 1) == 1 )
          CSprite::RenderOneXLUSprite(
            v34[0],
            *(float *)&v34[1],
            v35,
            (float)(*((float *)this + 11) * v33) * 0.5,
            (float)(*((float *)this + 11) * v32) * 0.5,
            COERCE_FLOAT(*((_BYTE *)this + 8)),
            *((_BYTE *)this + 9),
            *((_BYTE *)this + 10),
            0xFFu,
            1.0 / v35,
            COERCE_FLOAT(*((_BYTE *)this + 11)),
            0,
            0,
            0.0,
            0.0,
            v5);
        v6 = 0;
        RwRenderStateSet(1, 0);
        RwRenderStateSet(8, 1);
        RwRenderStateSet(6, 1);
        RwRenderStateSet(12, 0);
        v3 = v31;
        v5 = *(float *)&v30;
      }
      LODWORD(v2) = C3dMarkers::PlaceMarker(
                      *((C3dMarkers **)this + 1),
                      2u,
                      (_WORD)this + 16,
                      COERCE_CVECTOR_(*((float *)this + 11) * 1.5),
                      v4,
                      (float *)LODWORD(v5),
                      v7,
                      v8,
                      *((_WORD *)this + 6),
                      *((float *)this + 10),
                      COERCE_FLOAT(1),
                      0.0,
                      0.0,
                      0.0,
                      v3,
                      v30);
      v9 = v6 == 1;
      if ( v6 == 1 )
      {
        LODWORD(v2) = *(unsigned __int16 *)this;
        v9 = (_DWORD)v2 == 0;
      }
      if ( !v9 )
        return v2;
      v10 = *((float *)this + 11);
      v11 = *((float *)this + 6);
      v12 = *((float *)this + 7);
      v13 = *((float *)this + 8);
      v2 = *((_QWORD *)this + 2);
      if ( LOBYTE(C3dMarkers::ms_directionArrows[0]) )
      {
        if ( byte_A59FF0 )
        {
          if ( byte_A5A020 )
          {
            if ( byte_A5A050 )
            {
              if ( (_BYTE)dword_A5A080 )
                return v2;
              v14 = 4;
            }
            else
            {
              v14 = 3;
            }
          }
          else
          {
            v14 = 2;
          }
        }
        else
        {
          v14 = 1;
        }
      }
      else
      {
        v14 = 0;
      }
      v26 = -*((float *)this + 9);
      v27 = &C3dMarkers::ms_directionArrows[12 * v14];
      *(_BYTE *)v27 = 1;
      *(_QWORD *)(v27 + 1) = v2;
      LODWORD(v2) = v27 + 8;
      *((_QWORD *)v27 + 4) = 0x40000000FFLL;
      *((_QWORD *)v27 + 5) = 0xFF00000040LL;
      *((float *)v27 + 3) = v11 + 3.0;
      *((float *)v27 + 4) = v10 / 1.6;
      *((float *)v27 + 5) = -v12;
      *((float *)v27 + 6) = -v13;
      *((float *)v27 + 7) = v26;
      return v2;
    case 3:
      LODWORD(v2) = FindPlayerCoors((int)v36);
      v15.n64_u64[0] = vsub_f32(*(float32x2_t *)&v36[4], *(float32x2_t *)((char *)this + 20)).n64_u64[0];
      v16 = vmul_f32(v15, v15).n64_u64[0];
      v17 = *((float *)this + 11);
      if ( sqrtf(
             (float)((float)((float)(*(float *)v36 - *((float *)this + 4))
                           * (float)(*(float *)v36 - *((float *)this + 4)))
                   + *(float *)&v16)
           + *((float *)&v16 + 1)) >= (float)(v17 + v17) )
        LODWORD(v2) = C3dMarkers::PlaceMarker(
                        *((C3dMarkers **)this + 1),
                        4u,
                        (_WORD)this + 16,
                        (CVector *)LODWORD(v17),
                        COERCE_FLOAT(*((_BYTE *)this + 8)),
                        (float *)*((unsigned __int8 *)this + 9),
                        *((_BYTE *)this + 10),
                        *((_BYTE *)this + 11),
                        *((_WORD *)this + 6),
                        *((float *)this + 10),
                        COERCE_FLOAT(*((_WORD *)this + 7)),
                        *((float *)this + 7),
                        *((float *)this + 8),
                        *((float *)this + 9),
                        0.0,
                        v30);
      return v2;
    case 4:
    case 5:
    case 7:
    case 8:
      goto LABEL_2;
    case 6:
      v18 = 1;
      v19 = -16;
      do
      {
        v20 = *((float *)this + 8);
        v21 = *((float *)this + 7);
        v22 = *((float *)this + 9);
        v23 = *((float *)this + 13);
        v24 = *((float *)this + 6);
        v25 = *((float *)this + 4) + (float)((float)(v21 * (float)v18) * v23);
        *(float *)&v36[4] = (float)((float)(v20 * (float)v18) * v23) + *((float *)this + 5);
        *(float *)v36 = v25;
        *(float *)&v36[8] = (float)((float)(v22 * (float)v18) * v23) + v24;
        C3dMarkers::PlaceMarker(
          *((C3dMarkers **)this + 1),
          4u,
          (unsigned __int16)v36,
          *((CVector **)this + 11),
          COERCE_FLOAT(*((_BYTE *)this + 8)),
          (float *)*((unsigned __int8 *)this + 9),
          *((_BYTE *)this + 10),
          v19 + *((_BYTE *)this + 11),
          *((_WORD *)this + 6),
          *((float *)this + 10),
          COERCE_FLOAT(*((_WORD *)this + 7)),
          v21,
          v20,
          v22,
          0.0,
          v30);
        ++v18;
        v19 -= 16;
      }
      while ( v18 != 4 );
LABEL_2:
      LODWORD(v2) = C3dMarkers::PlaceMarker(
                      *((C3dMarkers **)this + 1),
                      4u,
                      (_WORD)this + 16,
                      *((CVector **)this + 11),
                      COERCE_FLOAT(*((_BYTE *)this + 8)),
                      (float *)*((unsigned __int8 *)this + 9),
                      *((_BYTE *)this + 10),
                      *((_BYTE *)this + 11),
                      *((_WORD *)this + 6),
                      *((float *)this + 10),
                      COERCE_FLOAT(*((_WORD *)this + 7)),
                      *((float *)this + 7),
                      *((float *)this + 8),
                      *((float *)this + 9),
                      0.0,
                      v30);
      return v2;
    default:
      return v2;
  }
}


// ============================================================
