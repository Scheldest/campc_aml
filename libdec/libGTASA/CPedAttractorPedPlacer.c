
// Address: 0x18c0f0
// Original: j__ZN22CPedAttractorPedPlacer16PlacePedAtEffectERK9C2dEffectP7CEntityP4CPedf
// Demangled: CPedAttractorPedPlacer::PlacePedAtEffect(C2dEffect const&,CEntity *,CPed *,float)
// attributes: thunk
int __fastcall CPedAttractorPedPlacer::PlacePedAtEffect(
        CPedAttractorPedPlacer *this,
        const C2dEffect *a2,
        CEntity *a3,
        CPed *a4,
        float a5)
{
  return _ZN22CPedAttractorPedPlacer16PlacePedAtEffectERK9C2dEffectP7CEntityP4CPedf(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x4ac186
// Original: _ZN22CPedAttractorPedPlacer16PlacePedAtEffectERK9C2dEffectP7CEntityP4CPedf
// Demangled: CPedAttractorPedPlacer::PlacePedAtEffect(C2dEffect const&,CEntity *,CPed *,float)
void __fastcall CPedAttractorPedPlacer::PlacePedAtEffect(
        CPedAttractorPedPlacer *this,
        CMatrix **a2,
        CEntity *a3,
        CPed *a4,
        float a5)
{
  double v9; // d16
  double v10; // d16
  CGeneral *v11; // s18
  float v12; // s20
  double v13; // d16
  float v14; // s22
  float v15; // s24
  float v16; // s26
  CVector *v17; // r1
  float v18; // r1
  int v19; // r3
  float v20; // r0
  float *v21; // r1
  CGeneral *RadianAngleBetweenPoints; // r0
  float v23; // r1
  int v24; // r1
  CMatrix *v25; // r0
  CGeneral *v26; // r0
  float v27; // r1
  int v28; // r0
  float v29; // [sp+0h] [bp-B8h]
  float v30; // [sp+0h] [bp-B8h]
  float v31[3]; // [sp+4h] [bp-B4h] BYREF
  _BYTE v32[64]; // [sp+10h] [bp-A8h] BYREF
  int v33; // [sp+50h] [bp-68h]
  int v34; // [sp+54h] [bp-64h]
  double v35; // [sp+58h] [bp-60h]
  int v36; // [sp+60h] [bp-58h]
  float v37; // [sp+64h] [bp-54h] BYREF
  float v38; // [sp+68h] [bp-50h]
  float v39; // [sp+6Ch] [bp-4Ch]

  v33 = 0;
  v34 = 0;
  if ( a2 )
  {
    if ( !a2[5] )
    {
      CPlaceable::AllocateMatrix((CPlaceable *)a2);
      CSimpleTransform::UpdateMatrix((CSimpleTransform *)(a2 + 1), a2[5]);
    }
    CMatrix::operator=();
  }
  else
  {
    CMatrix::SetUnity((CMatrix *)v32);
  }
  CVector::FromMultiply((CVector *)v31, (const CMatrix *)v32, this);
  v9 = *(double *)((char *)this + 28);
  v36 = *((_DWORD *)this + 9);
  v35 = v9;
  Multiply3x3((const CMatrix *)&v37, (const CVector *)v32);
  v10 = *((double *)this + 5);
  v36 = *((_DWORD *)this + 12);
  v11 = (CGeneral *)LODWORD(v37);
  v12 = v38;
  v35 = v10;
  Multiply3x3((const CMatrix *)&v37, (const CVector *)v32);
  v13 = *((double *)this + 2);
  v36 = *((_DWORD *)this + 6);
  v14 = v37;
  v15 = v38;
  v16 = v39;
  v35 = v13;
  Multiply3x3((const CMatrix *)&v37, (const CVector *)v32);
  v37 = (float)(v14 * *(float *)&a4) + v31[0];
  v38 = (float)(v15 * *(float *)&a4) + v31[1];
  v39 = (float)(v16 * *(float *)&a4) + v31[2];
  CPedPlacement::FindZCoorForPed((CPedPlacement *)&v37, v17);
  v18 = v38;
  v19 = *((_DWORD *)a3 + 5);
  v20 = v39;
  if ( v19 )
  {
    *(float *)(v19 + 48) = v37;
    *(float *)(*((_DWORD *)a3 + 5) + 52) = v18;
    v21 = (float *)(*((_DWORD *)a3 + 5) + 56);
  }
  else
  {
    *((float *)a3 + 1) = v37;
    *((float *)a3 + 2) = v18;
    v21 = (float *)((char *)a3 + 12);
  }
  *v21 = v20;
  RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(v11, v12, 0.0, 0.0, v29);
  v24 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v23);
  *((_DWORD *)a3 + 343) = v24;
  *((_DWORD *)a3 + 344) = v24;
  v25 = (CMatrix *)*((_DWORD *)a3 + 5);
  if ( v25 )
    CMatrix::SetRotateZOnly(v25, *(float *)&v24);
  else
    *((_DWORD *)a3 + 4) = v24;
  v26 = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(v11, v12, 0.0, 0.0, v30);
  v28 = CGeneral::LimitRadianAngle(v26, v27);
  *((_DWORD *)a3 + 344) = v28;
  *((_DWORD *)a3 + 343) = v28;
  CMatrix::~CMatrix((CMatrix *)v32);
}


// ============================================================
