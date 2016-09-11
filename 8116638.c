int __fastcall sub_8116638(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r0@1
  signed int v3; // r1@1
  char *v4; // r0@5
  int *v5; // r0@9
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 9);
  if ( *((_WORD *)v2 + 9) && v3 >= 0 && v3 <= 2 )
  {
    if ( *((_WORD *)v2 + 6) == 12 )
    {
      fanfare_play(0x185u);
      MenuDrawTextWindow(0, 0xEu);
      v4 = (char *)&gUnknown_081C41A5;
    }
    else
    {
      fanfare_play(0x186u);
      MenuDrawTextWindow(0, 0xEu);
      v4 = gUnknown_081C4199;
    }
    MenuPrint((int)v4, 1, 0xFu);
  }
  else
  {
    m4aSongNumStart(32);
    MenuDrawTextWindow(0, 0xEu);
    MenuPrint((int)gUnknown_081C41AE, 1, 0xFu);
  }
  v5 = &dword_3004B20[10 * v1];
  *((_WORD *)v5 + 5) = 0;
  *v5 = (int)sub_811659C;
  return v7;
}
