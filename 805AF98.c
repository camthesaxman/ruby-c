int npc_hide_all_but_player()
{
  unsigned int v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = 0;
  do
  {
    if ( v0 != v202E85D )
      RemoveFieldObject(&dword_30048A0[9 * v0]);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0xF );
  return v2;
}
