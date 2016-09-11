int sub_804DC18()
{
  int v0; // r4@1
  int v1; // r0@1
  unsigned __int8 v2; // r0@3
  int v3; // r0@4
  int v5; // [sp+4h] [bp-4h]@0

  v0 = (unsigned __int8)sub_804B2B0();
  v1 = sub_804D63C();
  if ( !v0 )
  {
    v1 = 257;
    if ( *(_WORD *)(dword_3004828 + 156) == 257 )
    {
      *(_WORD *)(dword_3004828 + 158) = -9030;
      v2 = bitmask_all_link_players_but_self();
      SendBlock(v2, (char *)(dword_3004828 + 158), 0x14u);
      *(_BYTE *)(dword_3004828 + 156) = 2;
      v1 = dword_3004828 + 157;
      *(_BYTE *)(dword_3004828 + 157) = 2;
    }
  }
  RunTasks(v1);
  AnimateSprites();
  v3 = BuildOamBuffer();
  UpdatePaletteFade(v3);
  return v5;
}
