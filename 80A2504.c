signed int sub_80A2504()
{
  int *v0; // r1@2
  int (*v1)(); // r0@2
  unsigned int v2; // r7@3
  unsigned int v3; // r6@4
  int v4; // r5@4
  int v5; // r4@5
  char v6; // r4@6
  signed int result; // r0@9

  if ( (npc_before_player_of_type(82) & 0xFF) == 1 )
  {
    dword_300485C = (int)sub_808AB90;
    v0 = &dword_3005CE4;
    v1 = sub_80A2634;
_080A25A8:
    *v0 = (int)v1;
    result = 1;
  }
  else
  {
    PlayerGetDestCoords((_WORD *)0x203923C, (_WORD *)0x203923E);
    v2 = 0;
    do
    {
      v3 = 0;
      v4 = (signed __int16)(v2 - 1 + v203923E);
      do
      {
        v5 = (signed __int16)(v3 - 1 + v203923C);
        if ( (unsigned __int8)MapGridGetZCoordAt(v5, v4) == v2039240 )
        {
          v6 = MapGridGetMetatileBehaviorAt(v5, v4);
          if ( (unsigned __int8)sub_8056E14((unsigned __int8)v6) == 1
            || (unsigned __int8)MetatileBehavior_IsAsh(v6) == 1 )
          {
            dword_300485C = (int)sub_808AB90;
            v0 = &dword_3005CE4;
            v1 = sub_80A25E8;
            goto _080A25A8;
          }
        }
        v3 = (v3 + 1) & 0xFF;
      }
      while ( v3 <= 2 );
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 <= 2 );
    result = 0;
  }
  return result;
}
