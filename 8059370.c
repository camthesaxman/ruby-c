int __fastcall player_npc_set_state_and_x22_etc(unsigned __int8 a1, char a2)
{
  int v2; // r5@1
  char v3; // r4@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( !(PlayerIsAnimActive() << 24) )
  {
    player_set_x22(v3);
    FieldObjectSetSpecialAnim(&dword_30048A0[9 * v202E85D], v2);
  }
  return v5;
}
