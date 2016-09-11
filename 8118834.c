int __fastcall sub_8118834(int a1)
{
  int v1; // r5@1
  int v2; // r2@1
  __int16 v3; // r4@3
  __int16 v4; // r0@3
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 58) + v2019024;
  *(_WORD *)(a1 + 52) = v2;
  if ( v2 << 16 > 23527424 )
    *(_WORD *)(a1 + 52) = v2 - 360;
  v3 = sine2(*(_WORD *)(a1 + 52));
  v4 = cosine2(*(_WORD *)(v1 + 52));
  *(_WORD *)(v1 + 36) = *(_WORD *)(v1 + 54) * v3 >> 12;
  *(_WORD *)(v1 + 38) = (-v4 * *(_WORD *)(v1 + 54) >> 12) + gSpriteCoordOffsetY;
  return v6;
}
