int __fastcall sub_80A04CC(unsigned __int16 a1)
{
  int v1; // r4@1
  _BYTE *v2; // r2@2
  _BYTE *v3; // r1@5
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( a1 != 0xFFFF )
  {
    v2 = &gBattleMoves[12 * a1];
    if ( (unsigned int)v2[1] > 1 )
    {
      sub_8072C14((int)&gStringVar1, v2[1], 0x15u, 1u);
      MenuPrint((int)&gStringVar1, 7, 0xFu);
    }
    else
    {
      sub_8072C74((int)&gStringVar1, (int)&OtherText_ThreeDashes2, 0x15u, 1u);
      MenuPrint((int)&gStringVar1, 7, 0xFu);
    }
    v3 = &gBattleMoves[12 * v1];
    if ( v3[3] )
    {
      sub_8072C14((int)&gStringVar1, v3[3], 0x15u, 1u);
      MenuPrint((int)&gStringVar1, 7, 0x11u);
    }
    else
    {
      sub_8072C74((int)&gStringVar1, (int)&OtherText_ThreeDashes2, 0x15u, 1u);
      MenuPrint((int)&gStringVar1, 7, 0x11u);
    }
  }
  return v5;
}
