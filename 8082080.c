signed int sub_8082080()
{
  char *v0; // r0@2
  int v1; // r1@2
  unsigned __int8 v3; // r5@13
  int v4; // r6@15
  unsigned int v5; // r4@15
  int v6; // r1@15
  int v7; // r2@15
  int v8; // r1@16
  _BYTE *v9; // r0@16

  if ( v202FF5E == 1024 )
    return 16;
  v0 = (char *)&gTrainers + 40 * v202FF5E;
  v1 = (unsigned __int8)v0[1];
  if ( v1 == 24 )
  {
    if ( v202FF5E == 261 )
      return 12;
    if ( v202FF5E == 262 )
      return 13;
    if ( v202FF5E == 263 )
      return 14;
    if ( v202FF5E == 264 )
      return 15;
    return 16;
  }
  if ( v1 == 32 )
    return 16;
  v3 = 1;
  if ( v0[24] == 1 )
    v3 = 2;
  v4 = (unsigned __int8)sub_8081E90();
  v5 = (unsigned __int8)reads_trainer_data_byte0(v202FF5E, v3);
  if ( v5 < (unsigned __int8)sub_8081EF4(v3, v6, v7) )
  {
    v9 = &gUnknown_0839AD00;
    v8 = 2 * v4;
  }
  else
  {
    v8 = 2 * v4;
    v9 = &unk_839AD01;
  }
  return v9[v8];
}
