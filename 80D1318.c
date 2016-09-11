int __fastcall sub_80D1318(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)IndexOfSpritePaletteTag(0x27DBu);
  if ( v2 != 255 )
    BlendPalette((unsigned int)((v2 << 20) + 16842752) >> 16, 0xFu, word_3004B0A, word_3004B08);
  StartSpriteAffineAnim(v1, 1);
  *(_DWORD *)(v1 + 28) = sub_80793C4;
  call_via_r1(v1, sub_80793C4);
  return v4;
}
