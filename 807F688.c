int __fastcall sub_807F688(int a1)
{
  int v1; // r1@1
  int v3; // [sp+4h] [bp-4h]@0

  *(_WORD *)(a1 + 38) = (unsigned __int8)gSpriteCoordOffsetY;
  v1 = v202FED6 + 32 + (*(_WORD *)(a1 + 46) << 6);
  *(_WORD *)(a1 + 32) = v1;
  if ( v1 << 16 > 17760256 )
    *(_WORD *)(a1 + 32) = (v202FED6 + 480 - ((4 - *(_WORD *)(a1 + 46)) << 6)) & 0x1FF;
  return v3;
}
