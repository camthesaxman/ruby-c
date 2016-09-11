int __fastcall Task_DrawMainMenu(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int v2; // r0@5
  int v3; // r0@9
  int v4; // r0@10
  __int16 v6; // [sp+0h] [bp-10h]@2
  int v7; // [sp+Ch] [bp-4h]@12

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v4000040 = 0;
    v4000044 = 0;
    v4000048 = 4369;
    v400004A = 49;
    v4000050 = 241;
    v4000052 = 0;
    v4000054 = 7;
    v6 = 0;
    LoadPalette(&v6, 254, 2);
    if ( v2024EAC )
    {
      v6 = 21631;
      LoadPalette(&v6, 241, 2);
    }
    else
    {
      v6 = 32260;
      LoadPalette(&v6, 241, 2);
    }
    v2 = LOWORD(dword_3004B20[10 * v1 + 2]);
    if ( v2 == 1 )
    {
      MenuDrawTextWindow(1, 0, 28, 7);
      PrintMainMenuItem(&gMainMenuString_Continue, 2, 1);
      MenuDrawTextWindow(1, 8, 28, 11);
      PrintMainMenuItem(&gMainMenuString_NewGame, 2, 9);
      MenuDrawTextWindow(1, 12, 28, 15);
      v3 = PrintMainMenuItem(&gMainMenuString_Option, 2, 13);
      PrintSaveFileInfo(v3);
    }
    else if ( v2 > 1 && v2 == 2 )
    {
      MenuDrawTextWindow(1, 0, 28, 7);
      PrintMainMenuItem(&gMainMenuString_Continue, 2, 1);
      MenuDrawTextWindow(1, 8, 28, 11);
      PrintMainMenuItem(&gMainMenuString_NewGame, 2, 9);
      MenuDrawTextWindow(1, 12, 28, 15);
      PrintMainMenuItem("гсмн©лс", 2, 13);
      MenuDrawTextWindow(1, 16, 28, 19);
      v4 = PrintMainMenuItem(&gMainMenuString_Option, 2, 17);
      PrintSaveFileInfo(v4);
    }
    else
    {
      MenuDrawTextWindow(1, 0, 28, 3);
      PrintMainMenuItem(&gMainMenuString_NewGame, 2, 1);
      MenuDrawTextWindow(1, 4, 28, 7);
      PrintMainMenuItem(&gMainMenuString_Option, 2, 5);
    }
    dword_3004B20[10 * v1] = (int)Task_HighlightCurrentMenuItem;
  }
  return v7;
}
