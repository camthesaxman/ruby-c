signed int sub_809DF00()
{
  char *v0; // r0@4
  signed int v1; // r1@4

  if ( v2018074 <= 0xCu )
  {
    switch ( v2018074 )
    {
      case 0u:
        LZDecompressVram((int)&gStatusScreen_Gfx, 100663296);
        break;
      case 1u:
        v0 = gUnknown_08E73508;
        v1 = 100720640;
        goto _0809DFB0;
      case 2u:
        LZDecompressVram((int)&gUnknown_08E74E88, 100722688);
        break;
      case 3u:
        LZDecompressVram((int)&gStatusScreen_Tilemap, 100681728);
        break;
      case 4u:
        v0 = (char *)&gUnknown_08E73E88;
        v1 = 100685824;
        goto _0809DFB0;
      case 5u:
        v0 = (char *)&gUnknown_08E74688;
        v1 = 100689920;
_0809DFB0:
        CpuSet(v0, v1, 1024);
        break;
      case 6u:
        LoadCompressedPalette((int)&gStatusScreen_Pal, 0, 160);
        break;
      case 7u:
        LoadCompressedObjectPic(&gUnknown_083C11B8);
        break;
      case 8u:
        LoadCompressedObjectPic((_DWORD *)"L'ç\b");
        break;
      case 9u:
        LoadCompressedObjectPic(&gUnknown_083C12F4);
        break;
      case 0xAu:
        LoadCompressedObjectPalette((_DWORD *)"P*ç\b1u");
        break;
      case 0xBu:
        LoadCompressedObjectPalette((_DWORD *)"H(ç\b0u");
        break;
      case 0xCu:
        LoadCompressedPalette((int)&gMoveTypes_Pal, 0x1D0u, 96);
        v2018074 = 0;
        return 1;
      default:
        break;
    }
  }
  ++v2018074;
  return 0;
}
