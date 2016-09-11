signed int sub_81462B8()
{
  unsigned int v0; // r1@6
  signed int result; // r0@15

  if ( v201FFFF > 6u )
  {
def_81462D2:
    result = 0;
  }
  else
  {
    switch ( v201FFFF )
    {
      case 0u:
        LZDecompressVram((int)&gBerryCheck_Gfx, 100663296);
        goto _081463D0;
      case 1u:
        LZDecompressVram((int)&gUnknown_08E788E4, 100673536);
        goto _081463D0;
      case 2u:
        LZDecompressVram((int)&gUnknown_08E78A84, 100675584);
        goto _081463D0;
      case 3u:
        v0 = 0;
        do
        {
          if ( v2024EAC )
            gBG2TilemapBuffer[v0] = 20546;
          else
            gBG2TilemapBuffer[v0] = 16450;
          v0 = (v0 + 1) & 0xFFFF;
        }
        while ( v0 <= 0x3FF );
        v40000D4 = gBG2TilemapBuffer;
        v40000D8 = 100677632;
        v40000DC = -2147482624;
        goto _081463D0;
      case 4u:
        LoadCompressedPalette((int)&gBerryCheck_Pal, 0, 192);
        goto _081463D0;
      case 5u:
        LoadCompressedObjectPic((_DWORD *)"´‹ç\b");
_081463D0:
        ++v201FFFF;
        goto def_81462D2;
      case 6u:
        LoadCompressedObjectPalette(&gUnknown_083C1F7C);
        v201FFFF = 0;
        result = 1;
        break;
      default:
        goto def_81462D2;
    }
  }
  return result;
}
