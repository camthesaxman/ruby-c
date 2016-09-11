int __fastcall sub_8104940(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@3
  int v3; // r0@6
  int v4; // r0@6
  int v5; // r0@6
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  gSpriteCoordOffsetY = *(_WORD *)(a1 + 16);
  v4000016 = gSpriteCoordOffsetY;
  if ( *(_WORD *)(a1 + 18) & 1 )
    *(_WORD *)(a1 + 16) = -*(_WORD *)(a1 + 16);
  v2 = *(_WORD *)(a1 + 18) + 1;
  *(_WORD *)(v1 + 18) = v2;
  if ( !(v2 & 0x1F) )
    *(_WORD *)(v1 + 16) = *(_WORD *)(v1 + 16) << 16 >> 17;
  if ( !*(_WORD *)(v1 + 16) )
  {
    v3 = sub_81058A0();
    v4 = sub_81058C4(v3);
    v5 = sub_8105284(v4);
    sub_81059E8(v5);
    gSprites[68 * v200004E + 62] &= 0xFBu;
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 18) = 0;
  }
  return v7;
}
