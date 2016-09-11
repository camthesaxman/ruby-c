int calc_enemy_party_count()
{
  char *v0; // r0@1
  char *v1; // r4@3
  unsigned int v2; // r0@3

  v0 = &byte_30045B8;
  byte_30045B8 = 0;
  while ( 1 )
  {
    v1 = v0;
    v2 = (unsigned __int8)*v0;
    if ( v2 > 5 || !GetMonData((int)&unk_30045C0 + 100 * v2, 11, 0) )
      break;
    ++*v1;
    v0 = v1;
  }
  return (unsigned __int8)*v1;
}
