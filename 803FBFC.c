signed int __fastcall sub_803FBFC(unsigned __int8 a1)
{
  int v1; // r3@1
  signed int v2; // r0@1

  v1 = 0;
  v2 = *((_WORD *)&gLinkPlayers + 14 * a1 + 12);
  if ( v2 <= 2 )
  {
    if ( v2 >= 1 )
      return 1;
    if ( v2 )
      return v1;
    goto _0803FC28;
  }
  if ( v2 == 3 )
_0803FC28:
    v1 = 0;
  return v1;
}
