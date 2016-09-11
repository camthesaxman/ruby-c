_BOOL4 player_is_anim_in_certain_ranges()
{
  unsigned int v0; // r1@1

  v0 = LOBYTE(dword_30048A0[9 * v202E85D + 7]);
  return v0 <= 3
      || ((v0 - 16) & 0xFF) <= 4
      || ((v0 - 25) & 0xFF) <= 0xF
      || ((v0 - 98) & 0xFF) <= 0xB
      || ((v0 - 122) & 0xFF) <= 3;
}
