int __fastcall player_get_next_pos_and_height(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  signed __int16 v4; // [sp+0h] [bp-10h]@1
  int v5; // [sp+Ch] [bp-4h]@3

  v1 = a1;
  GetXYCoordsOneStepInFrontOfPlayer((_WORD *)a1, (_WORD *)(a1 + 2));
  PlayerGetDestCoords(&v4, &v4 + 1);
  v2 = (unsigned __int8)MapGridGetZCoordAt(v4, *(&v4 + 1));
  if ( v2 )
    LOBYTE(v2) = PlayerGetZCoord();
  *(_BYTE *)(v1 + 4) = v2;
  return v5;
}
