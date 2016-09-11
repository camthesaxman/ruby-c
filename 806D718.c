signed int __fastcall sub_806D718(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int v2; // r5@1
  __int16 v4; // [sp+0h] [bp-10h]@1

  v1 = a1;
  v4 = 0x7FFF;
  v2 = 0;
  if ( a1 <= 1u )
    LZDecompressVram((int)&gPartyMenuMisc_Gfx, 100663296);
  if ( v1 == 2 || !v1 )
    LZDecompressVram((int)&gPartyMenuMisc_Tilemap, 100677632);
  if ( v1 == 3 || !v1 )
    LoadCompressedPalette(&gPartyMenuMisc_Pal, 0, 352);
  if ( v1 == 4 || !v1 )
  {
    LoadPalette(&v4, 0, 2);
    LoadPalette(&gFontDefaultPalette, 240, 32);
  }
  if ( v1 == 5 || !v1 )
    LZDecompressVram((int)&gPartyMenuHpBar_Gfx, 100687872);
  if ( v1 == 6 || !v1 )
    LZDecompressVram((int)&gPartyMenuOrderText_Gfx, 100688256);
  if ( v1 == 7 || !v1 )
    LZDecompressVram((int)&gStatusGfx_Icons, 100692352);
  if ( v1 == 8 || !v1 )
  {
    LoadCompressedPalette(&gStatusPal_Icons, 176, 32);
    v2 = 1;
  }
  return v2;
}
