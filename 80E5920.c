int __fastcall sub_80E5920(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned int v2; // r0@1
  int *v3; // r4@6
  unsigned __int8 v4; // r0@6
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)sub_80E5D34(a1);
  if ( !v2 )
    goto _080E5954;
  if ( v2 != 7 )
  {
    if ( v2 <= 9 || !(sub_80E5EC0() << 24) )
    {
      sub_80E5708(v1);
      return v6;
    }
_080E5954:
    v3 = &dword_30048A0[9 * v202E85D];
    audio_play(0x22u);
    *((_BYTE *)v3 + 1) |= 2u;
    v4 = sub_80608A4(v1);
    player_npc_set_state_and_x22_etc(v4, 2);
  }
  return v6;
}
