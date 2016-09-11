int __fastcall sub_81049C8(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  gSpriteCoordOffsetY = 0;
  v4000016 = 0;
  if ( sub_8105ACC() << 24 )
  {
    ++*(_WORD *)(v1 + 8);
    sub_8105AEC();
  }
  return v3;
}
