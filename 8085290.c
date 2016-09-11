int rock_smash_wild_pokemon_encounter()
{
  int v0; // r2@1
  _BYTE *v1; // r4@2
  unsigned __int8 v2; // r0@4
  int v4; // [sp+4h] [bp-4h]@0

  v0 = (unsigned __int16)sub_8084D6C();
  if ( v0 == 0xFFFF )
    goto _080852EC;
  v1 = dword_839D458[5 * v0 + 2];
  if ( v1 )
  {
    if ( (unsigned __int8)sub_8085054(*v1, 1u) == 1 )
    {
      v2 = sub_8084EB0((int)v1, 2, 1u);
      LOWORD(v1) = v2;
      if ( v2 == 1 )
      {
        sub_8081A00();
        goto _080852D8;
      }
    }
_080852EC:
    v202E8DC = 0;
    return v4;
  }
_080852D8:
  v202E8DC = (_WORD)v1;
  return v4;
}
