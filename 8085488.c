int __fastcall wild_pokemon_rand_for_map(_BYTE *a1)
{
  _BYTE *v1; // r6@1
  int v2; // r3@1
  _BYTE *v3; // r5@2
  _BYTE *v4; // r4@2
  unsigned int v6; // r0@7
  int v7; // r1@7

  v1 = a1;
  *a1 = 0;
  v2 = (unsigned __int16)sub_8084D6C();
  if ( v2 == 0xFFFF )
    return 0;
  v3 = dword_839D458[5 * v2];
  v4 = dword_839D458[5 * v2 + 1];
  if ( v3 )
  {
    if ( v4 && ((unsigned __int16)Random() % 0x64u & 0xFFFF) > 0x4F )
    {
      *v1 = 1;
      v6 = wild_pokemon_rand_water() << 24;
      v7 = *((_DWORD *)v4 + 1);
    }
    else
    {
      v6 = wild_pokemon_rand_grass() << 24;
      v7 = *((_DWORD *)v3 + 1);
    }
  }
  else
  {
    if ( !v4 )
      return 0;
    *v1 = 1;
    v6 = wild_pokemon_rand_water() << 24;
    v7 = *((_DWORD *)v4 + 1);
  }
  return *(_WORD *)((v6 >> 22) + v7 + 2);
}
