int sub_80A029C()
{
  int v0; // r5@3
  int v1; // r4@4
  int v2; // r4@9
  _BYTE *v3; // r0@9
  int v5; // [sp+8h] [bp-4h]@0

  if ( v201807C )
  {
    v0 = v201807C;
    if ( v201800B == 2 )
    {
      v1 = 2 * v201807C;
      sub_80A198C(gBattleMoves[12 * v201807C + 2], 87, 96, 4);
    }
    else
    {
      sub_80A198C((((gContestMoves[8 * v201807C + 1] << 24) & 0x7FFFFFFu) + 301989888) >> 24, 87, 96, 4);
      v1 = 2 * v0;
    }
    if ( v201800B == 2 )
      sub_80A1FF8(&gMoveNames[13 * v0], 10, 15, 12);
    else
      sub_80A1FF8(&gMoveNames[13 * v0], 9, 15, 12);
    GetStringCenterAlignXOffset(1u, 0x18u, 0xCu);
    v2 = gBattleMoves[4 * (v1 + v0) + 4];
    v3 = (_BYTE *)sub_8072C14((int)&gStringVar1, v2, 0xEu, 1u);
    *v3 = -70;
    sub_8072C14((int)(v3 + 1), v2, 0x20u, 1u);
    MenuPrint((int)&gStringVar1, 25, 0xCu);
  }
  else
  {
    sub_80A1FF8(&OtherText_Cancel2, 13, 15, 12);
  }
  return v5;
}
