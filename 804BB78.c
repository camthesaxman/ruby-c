int sub_804BB78()
{
  int v0; // r0@1
  unsigned __int8 v1; // r0@5
  int v3; // [sp+4h] [bp-4h]@0

  v0 = *(_BYTE *)(dword_3004828 + 189);
  if ( v0 == 1 )
  {
    if ( sub_8007ECC() << 24 )
    {
      v1 = bitmask_all_link_players_but_self();
      SendBlock(v1, (char *)(dword_3004828 + 158), 0x14u);
      ++*(_BYTE *)(dword_3004828 + 189);
    }
  }
  else if ( v0 != 2 )
  {
    return v3;
  }
  *(_BYTE *)(dword_3004828 + 189) = 0;
  return v3;
}
