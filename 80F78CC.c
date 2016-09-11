int __fastcall sub_80F78CC(int a1)
{
  int v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = *(_WORD *)(a1 + 46);
  if ( *(_BYTE *)(v20388B8 + 6 + v1) )
    StartSpriteAnim(a1, 2 * v1 + 1);
  else
    StartSpriteAnim(a1, 2 * v1);
  return v3;
}
