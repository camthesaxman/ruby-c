char *sub_8040D08()
{
  unsigned __int8 v0; // r0@1

  v0 = GetMultiplayerId();
  return (char *)&unk_3002978 + 28 * sub_803FC34(*((_WORD *)&gLinkPlayers + 14 * v0 + 12) ^ 2);
}
