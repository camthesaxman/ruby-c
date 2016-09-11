signed int sub_810B998()
{
  signed int result; // r0@8

  if ( v201FFFF > 4u )
  {
def_810B9AE:
    result = 0;
  }
  else
  {
    switch ( v201FFFF )
    {
      case 0u:
        LZDecompressVram((int)&gMenuPokeblock_Gfx, 100696064);
        goto _0810BA0E;
      case 1u:
        sub_800D238();
        goto _0810BA0E;
      case 2u:
        LoadCompressedPalette((int)&gMenuPokeblock_Pal, 0, 192);
        goto _0810BA0E;
      case 3u:
        LoadCompressedObjectPic((_DWORD *)"ê}Á\b");
_0810BA0E:
        ++v201FFFF;
        goto def_810B9AE;
      case 4u:
        LoadCompressedObjectPalette((_DWORD *)"PÄÁ\b–9");
        v201FFFF = 0;
        result = 1;
        break;
      default:
        goto def_810B9AE;
    }
  }
  return result;
}
