int sub_813509C()
{
  int v0; // r5@1
  unsigned __int16 *v1; // r4@2
  unsigned __int16 v2; // r0@3

  v0 = 0;
  if ( (unsigned __int16)gBattleTowerBanlist != 0xFFFF )
  {
    v1 = (unsigned __int16 *)&gBattleTowerBanlist;
    do
    {
      v2 = SpeciesToNationalPokedexNum(*v1);
      if ( sub_8090D90(v2, 1u) << 24 )
        ++v0;
      ++v1;
    }
    while ( *v1 != 0xFFFF );
  }
  return v0;
}
