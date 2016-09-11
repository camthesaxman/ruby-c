signed int __fastcall npc_before_player_of_type(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r2@1
  signed int result; // r0@2

  v1 = a1;
  GetXYCoordsOneStepInFrontOfPlayer((_WORD *)0x203923C, (_WORD *)0x203923E);
  v2039240 = PlayerGetZCoord();
  v2 = &dword_30048A0[9 * (unsigned __int8)GetFieldObjectIdByXYZ(v203923C, v203923E, v2039240)];
  if ( *((_BYTE *)v2 + 5) == v1 )
  {
    v202E8DE = *((_BYTE *)v2 + 8);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
