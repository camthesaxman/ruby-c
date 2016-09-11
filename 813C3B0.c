int __fastcall sub_813C3B0(unsigned __int8 a1)
{
  int v1; // r8@1
  unsigned int v2; // r1@1
  unsigned int v3; // r1@3
  unsigned int v4; // r1@5
  unsigned int v5; // r1@7
  unsigned int v6; // r1@9
  int v8; // [sp+14h] [bp-4h]@0

  v1 = a1;
  intro_reset_and_hide_bgs();
  v2 = 0;
  do
  {
    *(_BYTE *)(v2 + 0x2000000) = 0;
    *(_BYTE *)(v2 + 33554464) = 17;
    *(_BYTE *)(v2 + 33554496) = 34;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0x1F );
  v40000D4 = 0x2000000;
  v40000D8 = 100663296;
  v40000DC = -2147483600;
  v3 = 0;
  do
  {
    *(_WORD *)(2 * v3 + 0x6003000) = -4095;
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 <= 0x27F );
  v4 = 0;
  do
  {
    *(_WORD *)(2 * v4 + 0x6003800) = -4094;
    v4 = (v4 + 1) & 0xFFFF;
  }
  while ( v4 <= 0x7F );
  v5 = 0;
  do
  {
    *(_WORD *)(2 * v5 + 0x6003900) = -4096;
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 0x17F );
  v6 = 0;
  do
  {
    *(_WORD *)(2 * v6 + 0x6003C00) = -4094;
    v6 = (v6 + 1) & 0xFFFF;
  }
  while ( v6 <= 0x7F );
  v202ECA8 = 0x7FFF;
  v202F0A8 = 0x7FFF;
  sub_813D084(1);
  v202ECAC = 0;
  v202F0AC = 0;
  LZ77UnCompVram(&gUnknown_0840A778, 100679680);
  LZ77UnCompVram(&gUnknown_0840A7E4, 100691968);
  LoadPalette((int)&gUnknown_0840A758, 0, 32);
  ResetSpriteData();
  FreeAllSpritePalettes();
  gReservedSpritePaletteCount = 8;
  LoadCompressedObjectPic((_DWORD *)"\b%Ð\b");
  LoadCompressedObjectPic((_DWORD *)"`©@\b");
  LoadCompressedObjectPalette((_DWORD *)"Ä%Ð\bÒ\a");
  LoadSpritePalettes((int)" ©@\bÓ\a");
  dword_3004B20[10 * v1] = (int)sub_813C54C;
  return v8;
}
