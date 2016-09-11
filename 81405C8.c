int __fastcall sub_81405C8(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( *(_WORD *)(a1 + 46) )
  {
    FreeSpriteOamMatrix(a1);
    DestroySprite(v1);
  }
  else
  {
    *(_WORD *)(a1 + 46) = -1;
  }
  return v4;
}
