int ContestEffect_35()
{
  unsigned int v0; // r4@1
  unsigned int v1; // r2@2
  int v2; // r1@2
  unsigned int v3; // r4@2
  int v4; // r0@3
  signed int v5; // r0@3
  signed int v6; // r2@5
  int v7; // r0@7
  _BYTE *v8; // r6@9
  int v10; // [sp+10h] [bp-4h]@0

  v0 = (*(_BYTE *)(v20192E1 + 0x20192D0) - 1) & 0xFF;
  if ( *(_BYTE *)(v20192E1 + 0x20192D0) )
  {
    while ( 1 )
    {
      v1 = 0;
      v2 = (char)v0;
      v3 = v0 << 24;
      if ( v20192D0 != v2 )
      {
        do
        {
          v4 = (v1 << 24) + 0x1000000;
          v1 = (unsigned int)v4 >> 24;
          v5 = v4 >> 24;
        }
        while ( v5 <= 3 && *(_BYTE *)(v5 + 33657552) != v2 );
      }
      v6 = v1 << 24;
      if ( !(*(_BYTE *)(28 * (v6 >> 24) + 0x201926B) & 0x80) && !(*(_BYTE *)(28 * (v6 >> 24) + 0x201926C) & 7) )
        break;
      v7 = v3 - 0x1000000;
      v0 = (v3 - 0x1000000) >> 24;
      if ( v7 < 0 )
        return v10;
    }
    v8 = &gContestMoves[8 * *(_WORD *)(28 * v20192E1 + 0x2019266)];
    if ( v8[1] << 29 == gContestMoves[8 * *(_WORD *)(28 * (v6 >> 24) + 0x2019266) + 1] << 29 )
    {
      *(_WORD *)(28 * v20192E1 + 0x2019262) += 2 * gContestEffects[4 * *v8 + 1];
      sub_80B13EC(v20192E1, 31);
    }
  }
  return v10;
}
