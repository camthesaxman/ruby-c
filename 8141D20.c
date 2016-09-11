int __fastcall sub_8141D20(int a1)
{
  int v1; // r4@1
  int v2; // r0@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( gSprites[68 * *(_BYTE *)(v202F7C8 + 0x2024BE0) + 63] & 0x10 )
  {
    v2 = *(_WORD *)(a1 + 46) + 1;
    *(_WORD *)(v1 + 46) = v2;
    if ( v2 << 16 > 0 )
    {
      StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v202F7C8 + 0x2024BE0)], 0);
      move_anim_8072740(v1);
    }
  }
  return v4;
}
