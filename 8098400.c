int sub_8098400()
{
  __int16 v1; // [sp+10h] [bp-10h]@1
  int v2; // [sp+1Ch] [bp-4h]@4

  v400000A = 3841;
  LZ77UnCompVram(&gPSSMenuMisc_Gfx, 100689920);
  LZ77UnCompWram(&gPSSMenuMisc_Tilemap, 33554600);
  LoadPalette((int)&gPSSMenu3_Pal, 32, 32);
  LoadPalette((int)&gPSSMenu4_Pal, 48, 32);
  v1 = 0;
  v40000D4 = &v1;
  v40000D8 = 100694016;
  v40000DC = -2130705408;
  sub_8098780(-2130705408);
  if ( v203847C )
  {
    sub_8098690(1);
    sub_8099200(1);
    sub_809D034(100694016, 10, 0, 33554600);
  }
  else
  {
    sub_809D034(100694016, 10, 0, 33554600);
    sub_8098690(1);
  }
  v20008AF = 0;
  return v2;
}
