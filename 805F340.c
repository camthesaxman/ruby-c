signed int __fastcall mss_npc_reset_oampriv3_1_unk2_unk3(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  _BYTE *v4; // r4@1
  signed int result; // r0@3

  v2 = a1;
  v3 = a2;
  npc_reset();
  v4 = (_BYTE *)(v2 + 33);
  if ( !*v4 )
    *v4 = player_get_direction_lower_nybble();
  result = 1;
  *(_WORD *)(v3 + 48) = 1;
  return result;
}
