int __fastcall sub_80B02A8(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 62) &= 0xFBu;
  StartSpriteAnim(a1, *(_BYTE *)(28 * *(_WORD *)(a1 + 46) + 0x201926B) & 3);
  StartSpriteAffineAnim(v1, 2);
  *(_DWORD *)(v1 + 28) = sub_80B02F4;
  audio_play(0x18u);
  return v3;
}
