int sub_8049A20()
{
  signed int v0; // r2@1
  int v1; // r1@1
  _BYTE *i; // r3@1
  unsigned __int8 v3; // r0@6
  int v5; // [sp+0h] [bp-18h]@2
  int v6; // [sp+14h] [bp-4h]@7

  v0 = 0;
  v1 = dword_3004824;
  for ( i = (_BYTE *)(dword_3004824 + 66); v0 < *i; ++v0 )
    *((_BYTE *)&v5 + v0) = *(_BYTE *)(v1 + 81 + v0);
  if ( sub_80499F0((int)&v5, *(_BYTE *)(dword_3004824 + 66), *(_BYTE *)(dword_3004824 + 65)) << 24 )
  {
    sub_804AADC(3, 1);
    *(_WORD *)(dword_3004824 + 140) = -17477;
    if ( sub_8007ECC() << 24 )
    {
      v3 = bitmask_all_link_players_but_self();
      SendBlock(v3, (char *)(dword_3004824 + 140), 0x14u);
    }
  }
  else
  {
    sub_804AADC(3, 2);
    *(_WORD *)(dword_3004824 + 140) = -17460;
    sub_804AADC(180, 0);
  }
  return v6;
}
