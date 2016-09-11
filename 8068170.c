int __fastcall player_get_pos_to_and_height(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  PlayerGetDestCoords((_WORD *)a1, (_WORD *)(a1 + 2));
  *(_BYTE *)(v1 + 4) = PlayerGetZCoord();
  return v3;
}
