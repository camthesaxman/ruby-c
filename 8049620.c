int sub_8049620()
{
  int v0; // r2@2
  unsigned __int8 v1; // r0@2
  int v3; // [sp+4h] [bp-4h]@0

  sub_804AA0C(0);
  *(_BYTE *)(dword_3004824 + 123) = 5;
  if ( (unsigned __int8)GetMultiplayerId() == 1 )
  {
    v0 = dword_3004824;
    *(_WORD *)(dword_3004824 + 140) = -21829;
    *(_WORD *)(v0 + 142) = *(_BYTE *)(v0 + 65);
    v1 = bitmask_all_link_players_but_self();
    SendBlock(v1, (char *)(dword_3004824 + 140), 0x14u);
  }
  else
  {
    *(_BYTE *)(dword_3004824 + 132) = 1;
  }
  return v3;
}
