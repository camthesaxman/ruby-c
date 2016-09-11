int __fastcall sub_8035C10(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8031B74(*(_WORD *)(a1 + 6));
  *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | *(_WORD *)(v1 + 56) & 0x3FF;
  FreeSpriteOamMatrix(v1);
  DestroySprite(v1);
  return v3;
}
