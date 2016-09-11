int CreatePCMenu()
{
  unsigned int v0; // r4@1
  char v1; // r5@2
  char v2; // r7@5
  unsigned __int8 v3; // r4@5
  int v5; // [sp+18h] [bp-4h]@0

  v0 = (unsigned __int16)GetStringWidthInTilesForScriptMenu((int)&gUnknown_0841076D);
  if ( v0 <= (unsigned __int16)GetStringWidthInTilesForScriptMenu((int)"миг©их©╢м") )
    v1 = 8;
  else
    v1 = v0;
  if ( FlagGet(0x804u) << 24 )
  {
    v2 = 4;
    v3 = v1 + 2;
    MenuDrawTextWindow(0, 0);
    MenuPrint((int)"б╩фф", 1, 5u);
    MenuPrint((int)&gUnknown_08410782, 1, 7u);
  }
  else
  {
    v2 = 3;
    v3 = v1 + 2;
    MenuDrawTextWindow(0, 0);
    MenuPrint((int)&gUnknown_08410782, 1, 5u);
  }
  if ( FlagGet(0x84Bu) << 24 )
    MenuPrint((int)"ф╩х©нн©╢м", 1, 1u);
  else
    MenuPrint((int)"миг©их©╢м", 1, 1u);
  MenuPrint((int)&gUnknown_0841076D, 1, 3u);
  InitMenu(0, 1, 1, v2, 0, v1 + 1);
  sub_80B5230(0, 0, v3, 2 * v2 + 1, 0, v2);
  return v5;
}
