int __fastcall sub_80D4C64(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  int v4; // r0@1
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 52);
  *(_WORD *)(v1 + 52) = v2;
  v3 = *(_WORD *)(v1 + 50) + *(_WORD *)(v1 + 54);
  *(_WORD *)(v1 + 54) = v3;
  *(_WORD *)(v1 + 36) = v2 << 16 >> 23;
  *(_WORD *)(v1 + 38) = v3 << 16 >> 23;
  v4 = *(_WORD *)(v1 + 46) - 1;
  *(_WORD *)(v1 + 46) = v4;
  if ( !(v4 << 16) )
  {
    FreeSpriteOamMatrix(v1);
    DestroySprite(v1);
  }
  return v6;
}
