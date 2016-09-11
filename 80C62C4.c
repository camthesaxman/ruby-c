signed int sub_80C62C4()
{
  int v0; // r4@3
  int *v1; // r1@4
  int (*v2)(); // r0@4

  sub_80BB63C();
  if ( v202E8DC == 1 || (unsigned __int8)player_get_direction_lower_nybble() != 2 )
    return 0;
  GetXYCoordsOneStepInFrontOfPlayer((_WORD *)0x203923C, (_WORD *)0x203923E);
  v0 = (unsigned __int8)MapGridGetMetatileBehaviorAt(v203923C, v203923E);
  if ( (unsigned __int8)sub_80571EC(v0) != 1 )
  {
    if ( (unsigned __int8)sub_805720C(v0) == 1 )
    {
      sub_80C6264();
      dword_300485C = (int)sub_808AB90;
      v1 = &dword_3005CE4;
      v2 = sub_80C64A8;
      goto _080C6380;
    }
    if ( (unsigned __int8)is_tile_x98(v0) == 1 )
    {
      sub_80C6264();
      dword_300485C = (int)sub_808AB90;
      v1 = &dword_3005CE4;
      v2 = sub_80C660C;
      goto _080C6380;
    }
    return 0;
  }
  sub_80C6264();
  dword_300485C = (int)sub_808AB90;
  v1 = &dword_3005CE4;
  v2 = sub_80C639C;
_080C6380:
  *v1 = (int)v2;
  return 1;
}
