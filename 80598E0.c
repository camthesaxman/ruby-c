signed int PartyHasMonWithSurf()
{
  int v0; // r2@1
  unsigned int i; // r5@2

  if ( !(TestPlayerAvatarFlags(8u) << 24) )
  {
    for ( i = 0; i <= 5 && GetMonData((int)&dword_3004360[25 * i], 11, v0); i = (i + 1) & 0xFF )
    {
      if ( pokemon_has_move(&dword_3004360[25 * i], 57) << 24 )
        return 1;
    }
  }
  return 0;
}
