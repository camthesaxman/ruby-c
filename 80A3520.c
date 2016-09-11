signed int sub_80A3520()
{
  signed int result; // r0@14

  if ( v201FFFF > 4u )
  {
def_80A3538:
    result = 0;
  }
  else
  {
    switch ( v201FFFF )
    {
      case 0u:
        LZDecompressVram((int)&gBagScreen_Gfx, 100679680);
        goto _080A35EA;
      case 1u:
        CpuSet(gUnknown_08E77004, gBG2TilemapBuffer, 1024);
        goto _080A35EA;
      case 2u:
        if ( v2024EAC && byte_3000701 != 7 )
          LoadCompressedPalette((int)&gBagScreenFemale_Pal, 0, 64);
        else
          LoadCompressedPalette((int)&gBagScreenMale_Pal, 0, 64);
        goto _080A35EA;
      case 3u:
        if ( v2024EAC && byte_3000701 != 7 )
          LoadCompressedObjectPic((_DWORD *)" [ç\b");
        else
          LoadCompressedObjectPic((_DWORD *)"$Pç\b");
_080A35EA:
        ++v201FFFF;
        goto def_80A3538;
      case 4u:
        LoadCompressedObjectPalette(&gUnknown_083C1CD8);
        v201FFFF = 0;
        result = 1;
        break;
      default:
        goto def_80A3538;
    }
  }
  return result;
}
