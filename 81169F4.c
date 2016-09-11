int __fastcall dp01t_12_3_battle_menu(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@1
  int v3; // r0@1
  int v4; // r0@1
  char *v5; // r1@2
  int *v6; // r2@3
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  LOWORD(dword_3004B20[10 * a1 + 5]) = 0;
  v3 = sub_8116CAC(a1);
  v4 = sub_8116CF8(v3);
  sub_81185E8(v4);
  sub_8117158(0);
  sub_81182F8(6);
  do
  {
    v5 = &gSprites[68 * *(_BYTE *)(v2 + 33656899) + 62];
    *v5 &= 0xFBu;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 0xB );
  v6 = &dword_3004B20[10 * v1];
  if ( *((_WORD *)v6 + 17) == 9999 )
  {
    MenuDrawTextWindow(0, 0xEu);
    MenuPrint((int)gUnknown_081C4231, 1, 0xFu);
    sub_8116C34(v1, sub_8115734, 0xFFFF, 3);
  }
  else
  {
    *v6 = (int)sub_8115734;
  }
  return v8;
}
