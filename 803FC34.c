signed int __fastcall sub_803FC34(unsigned __int16 a1)
{
  signed int v1; // r2@1
  void *v2; // r1@1

  v1 = 0;
  v2 = &gLinkPlayers;
  do
  {
    if ( *((_WORD *)v2 + 12) == a1 )
      break;
    v2 = (char *)v2 + 28;
    ++v1;
  }
  while ( v1 <= 3 );
  return v1;
}
