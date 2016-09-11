int sub_8085514()
{
  int v0; // r2@1
  _BYTE *v1; // r4@2
  int result; // r0@3

  v0 = (unsigned __int16)sub_8084D6C();
  if ( v0 != 0xFFFF && (v1 = dword_839D458[5 * v0 + 1]) != 0 )
    result = *(_WORD *)((4 * wild_pokemon_rand_water() & 0x3FF) + *((_DWORD *)v1 + 1) + 2);
  else
    result = 0;
  return result;
}
