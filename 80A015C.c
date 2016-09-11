int __fastcall sub_80A015C(int a1)
{
  int v1; // r8@1
  unsigned int v2; // r7@1
  int v3; // r6@2
  int v4; // r9@2
  int v5; // r4@5
  int v6; // r5@7
  int v7; // r2@7
  char v8; // r0@7
  int v9; // r4@7
  _BYTE *v10; // r0@7
  int v12; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  do
  {
    v3 = (unsigned __int16)sub_809F760(v1, v2);
    v4 = (unsigned __int16)sub_809F798(v1, v2);
    if ( v3 )
    {
      if ( v201800B == 2 )
      {
        v5 = 2 * v2;
        sub_80A198C(gBattleMoves[12 * v3 + 2], 87, 8 * (2 * v2 + 4) & 0xFF, v2);
      }
      else
      {
        v5 = 2 * v2;
        sub_80A198C(
          (((gContestMoves[8 * v3 + 1] << 24) & 0x7FFFFFFu) + 301989888) >> 24,
          87,
          8 * (2 * v2 + 4) & 0xFF,
          v2);
      }
      v6 = (v5 + 4) & 0xFF;
      sub_80A1FF8(&gMoveNames[13 * v3], 13, 15, v6);
      GetStringCenterAlignXOffset(1u, 0x18u, v5 + 4);
      v8 = GetMonData(v1, 21, v7);
      v9 = (unsigned __int8)CalcPPWithPPUps(v3, v8, v2);
      v10 = (_BYTE *)sub_8072C14((int)&gStringVar1, v4, 0xEu, 1u);
      *v10 = -70;
      sub_8072C14((int)(v10 + 1), v9, 0x20u, 1u);
      MenuPrint((int)&gStringVar1, 25, v6);
    }
    else
    {
      sub_80A1918(v2, 1);
      sub_80A1FF8(&OtherText_OneDash, 13, 15, ((v2 << 25) + 0x4000000) >> 24);
      MenuPrint((int)&gUnknown_0840E682, 26, ((v2 << 25) + 0x4000000) >> 24);
    }
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 3 );
  return v12;
}
