signed int __fastcall sub_8084EB0(int a1, signed int a2, unsigned __int8 a3)
{
  int v3; // r6@1
  int v4; // r7@1
  int v5; // r0@1
  int v6; // r4@10
  unsigned __int8 v7; // r0@10
  unsigned __int8 v8; // r5@10
  signed int result; // r0@12

  v3 = a1;
  a2 = (unsigned __int8)a2;
  v4 = a3;
  v5 = 0;
  if ( (unsigned __int8)a2 == 1 )
  {
_08084EDA:
    LOBYTE(v5) = wild_pokemon_rand_water();
    goto _08084EDE;
  }
  if ( a2 > 1 )
  {
    if ( a2 != 2 )
      goto _08084EE2;
    goto _08084EDA;
  }
  if ( a2 )
    goto _08084EE2;
  LOBYTE(v5) = wild_pokemon_rand_grass();
_08084EDE:
  v5 = (unsigned __int8)v5;
_08084EE2:
  v6 = 4 * v5;
  v7 = random_number_in_range(*(_DWORD *)(v3 + 4) + 4 * v5);
  v8 = v7;
  if ( v4 != 1 || sub_8085598(v7) << 24 )
  {
    sub_8084E78(*(_WORD *)(v6 + *(_DWORD *)(v3 + 4) + 2), v8);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
