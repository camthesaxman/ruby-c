signed int sub_8082B44()
{
  int v0; // r6@1
  unsigned int v1; // r5@1
  unsigned __int16 *v2; // r4@1

  v0 = 0;
  v1 = 0;
  v2 = (unsigned __int16 *)&gUnknown_0839B1F0;
  do
  {
    if ( (unsigned __int8)FlagGet(*v2) == 1 && ++v0 > 4 )
      return 1;
    ++v2;
    ++v1;
  }
  while ( v1 <= 7 );
  return 0;
}
