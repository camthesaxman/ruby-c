int sub_80B368C()
{
  unsigned int v0; // r5@1
  int v1; // r0@2
  unsigned __int8 v2; // r0@3
  int v4; // [sp+18h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = *(_WORD *)(8 * v0 + 0x20386A4);
    if ( v1 != 16 )
    {
      v2 = AddPseudoFieldObject(
             BYTE1(dword_30048A0[9 * v1 + 1]),
             (int)SpriteCallbackDummy,
             16 * *(_WORD *)(8 * v0 + 0x20386A6) + 8,
             (((unsigned int)*(_WORD *)(8 * v0 + 0x20386A8) << 20) + 0x200000) >> 16);
      StartSpriteAnim((int)&gSprites[68 * v2], *(_BYTE *)(8 * v0 + 0x20386AA));
    }
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0xF );
  return v4;
}
