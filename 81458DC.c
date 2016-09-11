int sub_81458DC()
{
  unsigned __int16 v0; // r0@1
  unsigned __int16 v1; // r0@1
  int v2; // r10@1
  unsigned int v3; // r4@1
  int v4; // r5@1
  unsigned int i; // r4@5
  unsigned int v6; // r5@10
  unsigned __int16 v7; // r0@12
  unsigned int v8; // r5@16
  int j; // r2@16
  int v10; // r4@21
  int v12; // [sp+20h] [bp-4h]@0

  v0 = VarGet(16419);
  v1 = sub_8109E50(v0);
  v2 = SpeciesToNationalPokedexNum(v1) & 0xFFFF;
  v3 = 1;
  v4 = 0;
  do
  {
    if ( sub_8090D90(v3, 1u) << 24 )
    {
      *(_WORD *)(2 * v4 + 0x201C090) = v3;
      v4 = (v4 + 1) & 0xFFFF;
    }
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 <= 0x181 );
  for ( i = v4; i <= 0x181; i = (i + 1) & 0xFFFF )
    *(_WORD *)(2 * i + 0x201C090) = 0;
  v201C394 = v4;
  if ( (unsigned __int16)v4 > 0x43u )
    v201C08E = 68;
  else
    v201C08E = v4;
  v6 = 0;
  do
  {
    v7 = (unsigned __int16)Random() % v201C394;
    *(_WORD *)(2 * v6 + 0x201C000) = *(_WORD *)(2 * v7 + 0x201C090);
    v6 = (v6 + 1) & 0xFFFF;
    *(_WORD *)(2 * v7 + 0x201C090) = 0;
    --v201C394;
    if ( v7 != v201C394 )
    {
      *(_WORD *)(2 * v7 + 0x201C090) = *(_WORD *)(2 * v201C394 + 0x201C090);
      *(_WORD *)(2 * v201C394 + 0x201C090) = 0;
    }
  }
  while ( v201C394 && v6 <= 0x43 );
  if ( v201C08E <= 0x43u )
  {
    v8 = v201C08E;
    for ( j = 0; v8 <= 0x43; v8 = (v8 + 1) & 0xFFFF )
    {
      *(_WORD *)(2 * v8 + 0x201C000) = *(_WORD *)(2 * j + 0x201C000);
      j = (j + 1) & 0xFFFF;
      if ( j == v201C08E )
        j = 0;
    }
_08145A5C:
    v201C086 = v2;
    goto _08145A62;
  }
  v10 = 0;
  if ( v201C000 != v2 )
  {
    do
      v10 = (v10 + 1) & 0xFFFF;
    while ( *(_WORD *)(2 * v10 + 0x201C000) != v2 && (unsigned int)v10 <= 0x43 );
  }
  if ( v10 >= v201C08E - 1 )
    goto _08145A5C;
  *(_WORD *)(2 * v10 + 0x201C000) = v201C086;
  v201C086 = v2;
_08145A62:
  v201C08E = 68;
  return v12;
}
