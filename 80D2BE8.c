int __fastcall sub_80D2BE8(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    if ( *(_BYTE *)(a1 + 63) & 0x10 )
      move_anim_8072740(a1);
  }
  else
  {
    *(_WORD *)(a1 + 32) += word_3004B00[0];
    *(_WORD *)(a1 + 34) += word_3004B02;
    StartSpriteAnim(a1, word_3004B04);
    ++*(_WORD *)(v1 + 46);
  }
  return v3;
}
