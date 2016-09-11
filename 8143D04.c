int __fastcall sub_8143D04(unsigned __int8 a1)
{
  __int16 v1; // r6@1
  unsigned int v2; // r1@3
  unsigned int v3; // r1@5
  unsigned int v4; // r1@7
  int *v5; // r4@10
  int v7; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  if ( byte_3001BAC && byte_3001BAC == 1 )
  {
    v5 = &dword_3004B20[10 * a1];
    *((_WORD *)v5 + 7) = (unsigned __int8)CreateTask((int)sub_8144514, 0);
    LOWORD(dword_3004B20[10 * *((_WORD *)v5 + 7) + 2]) = 1;
    HIWORD(dword_3004B20[10 * *((_WORD *)v5 + 7) + 2]) = v1;
    LOWORD(dword_3004B20[10 * *((_WORD *)v5 + 7) + 3]) = *((_WORD *)v5 + 11);
    BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
    v400001C = 0;
    v400001E = 32;
    v400000E = 1795;
    v4000000 = 6464;
    byte_3001BAC = 0;
    v203935C = 0;
    *v5 = (int)sub_8143B38;
  }
  else
  {
    ResetSpriteData();
    FreeAllSpritePalettes();
    gReservedSpritePaletteCount = 8;
    LZ77UnCompVram(&gUnknown_083F66F0, 100663296);
    LZ77UnCompVram(&gBirchGrassTilemap, 100677632);
    LoadPalette((int)&unk_83F62EE, 1, 62);
    v2 = 0;
    do
    {
      *(_BYTE *)(v2 + 33677312) = 17;
      v2 = (v2 + 1) & 0xFFFF;
    }
    while ( v2 <= 0x7FF );
    v3 = 0;
    do
    {
      *(_BYTE *)(v3 + 33679360) = 34;
      v3 = (v3 + 1) & 0xFFFF;
    }
    while ( v3 <= 0x7FF );
    v4 = 0;
    do
    {
      *(_BYTE *)(v4 + 33681408) = 51;
      v4 = (v4 + 1) & 0xFFFF;
    }
    while ( v4 <= 0x7FF );
    v201F800 = 0;
    v201F802 = 21503;
    v201F804 = 21151;
    v201F806 = 32404;
    LoadSpriteSheet((int)&gUnknown_0840CAA0);
    LoadSpritePalette((int)&gUnknown_0840CAB0);
    ++byte_3001BAC;
  }
  return v7;
}
