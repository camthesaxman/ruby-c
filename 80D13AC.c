int __fastcall sub_80D13AC(int a1)
{
  int v1; // r4@1
  int v2; // r2@1
  int v3; // r0@1
  signed __int16 v4; // r1@1
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  *(_WORD *)(a1 + 38) -= v2 << 16 >> 24;
  *(_WORD *)(a1 + 36) = *(_WORD *)(a1 + 48) << 16 >> 24;
  *(_WORD *)(a1 + 46) = v2 - 32;
  v3 = battle_side_get_owner(v202F7C8);
  v4 = 160;
  if ( v3 << 24 )
    v4 = -160;
  *(_WORD *)(v1 + 48) += v4;
  if ( (signed int)*(_WORD *)(v1 + 38) > 0 )
  {
    *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
    *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
    *(_WORD *)(v1 + 38) = 0;
    *(_WORD *)(v1 + 36) = 0;
    *(_WORD *)(v1 + 46) = 0;
    StartSpriteAffineAnim(v1, 1);
    *(_DWORD *)(v1 + 28) = sub_80D1424;
  }
  return v6;
}
