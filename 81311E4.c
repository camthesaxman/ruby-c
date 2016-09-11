int __fastcall sub_81311E4(int a1)
{
  int v1; // r4@1
  __int16 v2; // r5@1
  __int16 v3; // r3@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = (*(_WORD *)(a1 + 50) - (signed int)*(_WORD *)(v1 + 46)) * *(_WORD *)(v1 + 56) / *(_WORD *)(v1 + 54);
  *(_WORD *)(a1 + 36) = v2;
  v3 = (*(_WORD *)(v1 + 52) - (signed int)*(_WORD *)(v1 + 48)) * *(_WORD *)(v1 + 56) / *(_WORD *)(v1 + 54);
  *(_WORD *)(a1 + 38) = v3;
  if ( !(*(_WORD *)(a1 + 56) & 1) )
    CreateSprite((int)&gSpriteTemplate_8402500, *(_WORD *)(a1 + 32) + v2, *(_WORD *)(a1 + 34) + v3);
  if ( *(_WORD *)(v1 + 56) == *(_WORD *)(v1 + 54) )
    move_anim_8072740(v1);
  ++*(_WORD *)(v1 + 56);
  return v5;
}
