int __fastcall sub_8116880(unsigned __int8 a1)
{
  int v1; // r6@1
  unsigned int v2; // r5@1
  int v3; // r0@2
  int *v4; // r2@3
  int (__fastcall *v5)(unsigned __int8); // r1@5
  int v7; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  LOWORD(dword_3004B20[10 * a1 + 4]) = 0;
  *(_BYTE *)((v201901A & 0xF) + 0x201901B) = 0;
  sub_8117158(0);
  gSprites[68 * v201906C + 62] |= 4u;
  do
  {
    v3 = 68 * *(_BYTE *)(v2 + 33656933);
    *(_WORD *)&gSprites[v3 + 4] = *(_WORD *)&gSprites[v3 + 4] & 0xFC00 | (***(_WORD ***)((char *)&unk_202000C + v3)
                                                                        + *(_WORD *)&gSprites[v3 + 64]) & 0x3FF;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 3 );
  v4 = &dword_3004B20[10 * v1];
  if ( *((_WORD *)v4 + 17) < (signed int)v2019019 )
  {
    MenuDrawTextWindow(0, 0xEu);
    MenuPrint((int)&gUnknown_081C41D2, 1, 0xFu);
    sub_8116C34(v1, sub_81157AC, 60, 3);
    return v7;
  }
  if ( *((_WORD *)v4 + 10) == 6 )
  {
    MenuDrawTextWindow(0, 0xEu);
    MenuPrint((int)&gUnknown_081C41F1, 1, 0xFu);
    v5 = (int (__fastcall *)(unsigned __int8))dp01t_12_3_battle_menu;
  }
  else
  {
    if ( *((_WORD *)v4 + 17) != 9999 )
    {
      *v4 = (int)sub_8115734;
      return v7;
    }
    MenuDrawTextWindow(0, 0xEu);
    MenuPrint((int)gUnknown_081C4231, 1, 0xFu);
    v5 = sub_8115734;
  }
  sub_8116C34(v1, v5, 0xFFFF, 3);
  return v7;
}
