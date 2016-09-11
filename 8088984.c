int __fastcall sub_8088984(int a1)
{
  int v1; // r4@1
  int v3; // [sp+10h] [bp-4h]@0

  v1 = a1;
  script_env_2_enable();
  player_bitmagic();
  v202E85E = 1;
  SetPlayerAvatarStateMask(8u);
  PlayerGetDestCoords((_WORD *)(v1 + 10), (_WORD *)(v1 + 12));
  MoveCoords((unsigned int)LOBYTE(dword_30048A0[9 * v202E85D + 6]) >> 4, (_WORD *)(v1 + 10), (_WORD *)(v1 + 12));
  ++*(_WORD *)(v1 + 8);
  return v3;
}
