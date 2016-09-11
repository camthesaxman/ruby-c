signed int sub_803FBBC()
{
  int v0; // r5@1
  signed int v1; // r0@1

  v0 = 0;
  v1 = *((_WORD *)&gLinkPlayers + 14 * (unsigned __int8)GetMultiplayerId() + 12);
  if ( v1 <= 2 )
  {
    if ( v1 >= 1 )
      return 1;
    if ( v1 )
      return v0;
    goto _0803FBEC;
  }
  if ( v1 == 3 )
_0803FBEC:
    v0 = 0;
  return v0;
}
