int __fastcall sub_80894C4(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8088FA4(*(_BYTE *)(a1 + 10)) << 24 )
  {
    DestroySprite((int)&gSprites[68 * *(_WORD *)(v1 + 10)]);
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 10) = 16;
  }
  return v3;
}
