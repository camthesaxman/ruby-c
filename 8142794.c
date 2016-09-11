int __fastcall sub_8142794(unsigned __int8 a1)
{
  int *v1; // r4@1
  char *v2; // r1@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 7) )
  {
    --*((_WORD *)v1 + 7);
  }
  else
  {
    v2 = &gSprites[68 * *((_WORD *)v1 + 8)];
    if ( *((_WORD *)v2 + 16) == 160 )
    {
      MenuDrawTextWindow(1u, 2u);
      sub_8143300(1, 2);
      MenuDrawTextWindow(2u, 0xEu);
      MenuPrint((int)"Æ¿»ÁÏ¿", 4, 0xFu);
      *v1 = (int)sub_8142818;
    }
    else
    {
      ++*((_WORD *)v2 + 16);
    }
  }
  return v4;
}
