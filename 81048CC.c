int __fastcall sub_81048CC(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r0@1
  int v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = sub_81054B8(a1);
  v3 = sub_81056C0(v2);
  v4 = sub_8105804(v3);
  sub_8105854(v4);
  gSprites[68 * v200004E + 62] |= 4u;
  StartSpriteAnimIfDifferent((int)&gSprites[68 * v200003F], 5);
  ++*(_WORD *)(v1 + 8);
  *(_WORD *)(v1 + 16) = 4;
  *(_WORD *)(v1 + 18) = 0;
  sub_8074D08();
  fanfare_play(0x187u);
  audio_play(0xB2u);
  return v6;
}
