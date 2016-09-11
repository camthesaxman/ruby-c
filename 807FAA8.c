int __fastcall sub_807FAA8(int a1)
{
  int v1; // r3@1
  __int16 v2; // r0@1
  int v3; // r1@3
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 > 5 )
  {
    *(_WORD *)(v1 + 48) = 0;
    ++*(_WORD *)(v1 + 46);
  }
  *(_WORD *)(v1 + 34) = *(_WORD *)(v1 + 46) + gSpriteCoordOffsetY;
  v3 = v202FEE4 + 32 + (*(_WORD *)(v1 + 50) << 6);
  *(_WORD *)(v1 + 32) = v3;
  if ( v3 << 16 > 17760256 )
    *(_WORD *)(v1 + 32) = (v202FEE4 + 480 - ((4 - *(_WORD *)(v1 + 50)) << 6)) & 0x1FF;
  return v5;
}
