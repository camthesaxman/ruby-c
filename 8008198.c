int sub_8008198()
{
  int v0; // r1@1
  signed int i; // r2@1

  v0 = 0;
  for ( i = 0; i < (unsigned __int8)gSavedLinkPlayerCount; ++i )
    v0 = (v0 | (1 << i)) & 0xFF;
  return v0;
}
