int sub_80EB9D8()
{
  unsigned int v0; // r4@1
  unsigned int v2; // r4@4
  unsigned __int16 *v3; // r5@4
  unsigned int i; // r6@4
  unsigned __int16 v5; // r0@5

  v0 = (unsigned __int16)sub_80EAE88(0);
  if ( v0 )
  {
    v2 = (unsigned __int16)Random() % v0 & 0xFFFF;
    v3 = (_WORD *)&gEasyChatGroupWords_Pokemon;
    for ( i = 0; i < (unsigned __int8)gEasyChatGroupSizes[0]; i = (i + 1) & 0xFFFF )
    {
      v5 = SpeciesToNationalPokedexNum(*v3);
      if ( sub_8090D90(v5, 0) << 24 )
      {
        if ( !v2 )
          return *v3 & 0x1FF;
        v2 = (v2 - 1) & 0xFFFF;
      }
      ++v3;
    }
  }
  return 0xFFFF;
}
