int __fastcall sub_80ABCDC(unsigned __int8 a1)
{
  unsigned int v1; // r6@1
  int v2; // r4@2
  char *v3; // r5@2
  char *v4; // r0@6
  _BYTE *v5; // r1@6
  char v7; // [sp+8h] [bp-44h]@2
  int v8; // [sp+28h] [bp-24h]@1
  int v9; // [sp+48h] [bp-4h]@13

  v8 = a1;
  word_30042A0 = 160;
  word_3004280 = 160;
  FillWindowRect_DefaultPalette((int)&unk_3004210, 0, gUnknown_083CA340[0], 0x1Fu, 9u, 0x27u);
  v1 = 0;
  do
  {
    v2 = *(_WORD *)(2 * v1 + (v2038695 << 6) + 0x203858E);
    v3 = &v7;
    if ( *(_WORD *)(28 * v2038695 + 0x2019268)
      && sub_80B214C(v2038695) << 24
      && AreMovesContestCombo(*(_WORD *)(28 * v2038695 + 0x2019268), v2) << 24
      && *(_BYTE *)(28 * v2038695 + 0x2019275) & 0x10 )
    {
      v4 = &v7;
      v5 = &UnknownText_UnknownFormatting2;
_080ABDC6:
      v3 = StringCopy(v4, v5);
      goto _080ABDCC;
    }
    if ( v2 && *(_WORD *)(28 * v2038695 + 0x2019268) == v2 && gContestMoves[8 * v2] != 3 )
    {
      v4 = &v7;
      v5 = &gUnknown_083CC3A7;
      goto _080ABDC6;
    }
_080ABDCC:
    StringCopy(v3, &gMoveNames[13 * v2]);
    sub_8002E4C(
      (int)&unk_3004210,
      (int)&v7,
      (1310720 * v1 + 50855936) >> 16,
      8 * gUnknown_083CA340[4 * v1] + 4,
      8 * (unsigned __int8)byte_83CA341[4 * v1],
      1);
    sub_8002F44((int)&unk_3004210);
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 3 );
  sub_814A5C0(0, 0xFFFF, 12, 11679);
  sub_80AC0AC(v2019204);
  sub_80AEBEC(*(_WORD *)(2 * v2019204 + (v2038695 << 6) + 0x203858E));
  dword_3004B20[10 * v8] = (int)sub_80ABEA0;
  return v9;
}
