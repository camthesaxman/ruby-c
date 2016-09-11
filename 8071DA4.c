int __fastcall unref_sub_8071DA4(int a1, __int16 a2)
{
  __int16 v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v2 = a2;
  v202E9C8 = 33745160;
  InitWindowFromConfig(33745160, a1);
  v202E9D0 = v2;
  v202E9D2 = SetTextWindowBaseTileNum(v2);
  LoadTextWindowGraphics(v202E9C8);
  v202E9CE = SetMessageBoxBaseTileNum(v202E9D2);
  v202E9D4 = InitWindowTileData(v202E9C8, v202E9CE);
  return v4;
}
