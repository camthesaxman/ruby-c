int __fastcall unc_grass_normal(int a1)
{
  int v1; // r5@1
  __int16 v2; // kr0C_2@5
  int v3; // r4@5
  int v4; // r7@5
  char v5; // r6@5
  int *v6; // r2@10
  int v7; // r1@10
  signed int v8; // r6@13
  unsigned __int8 v10; // [sp+0h] [bp-1Ch]@5
  int v11; // [sp+18h] [bp-4h]@16

  v1 = a1;
  if ( v202E844 & 1 && (v2025739 != *(_WORD *)(a1 + 56) / 0x100u || v2025738 != (*(_WORD *)(a1 + 56) & 0xFF)) )
  {
    *(_WORD *)(a1 + 48) -= v202E848;
    *(_WORD *)(a1 + 50) -= v202E84C;
    *(_WORD *)(a1 + 56) = v2025738 | (unsigned __int16)(v2025739 << 8);
  }
  v2 = *(_WORD *)(a1 + 52) / 0x100u;
  v3 = *(_WORD *)(a1 + 52) & 0xFF;
  v4 = *(_WORD *)(a1 + 54) & 0xFF;
  v5 = MapGridGetMetatileBehaviorAt(*(_WORD *)(a1 + 48), *(_WORD *)(a1 + 50));
  if ( TryGetFieldObjectIdByLocalIdAndMap(v2, v3, v4, &v10) << 24
    || !(MetatileBehavior_IsTallGrass(v5) << 24)
    || *(_WORD *)(v1 + 60) && *(_BYTE *)(v1 + 63) & 0x10 )
  {
    FieldEffectStop(v1, 4u);
  }
  else
  {
    v6 = &dword_30048A0[9 * v10];
    v7 = *(_DWORD *)(v1 + 48);
    if ( v6[4] != v7 && v6[5] != v7 )
      *(_WORD *)(v1 + 60) = 1;
    v8 = 0;
    if ( !*(_BYTE *)(v1 + 43) )
      v8 = 4;
    sub_806487C(v1, 0);
    sub_812882C(v1, *(_WORD *)(v1 + 46) & 0xFF, v8);
  }
  return v11;
}
