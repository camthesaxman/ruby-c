int sub_806451C()
{
  unsigned int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    if ( LOBYTE(dword_30048A0[9 * v0]) << 31 )
      npc_sync_anim_pause_bits((int)&dword_30048A0[9 * v0]);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0xF );
  return v2;
}
