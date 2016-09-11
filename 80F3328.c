int __fastcall sub_80F3328(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( *(_WORD *)(a1 + 46) == v20087DC )
    StartSpriteAnim(a1, 0);
  else
    StartSpriteAnim(a1, 1);
  return v2;
}
