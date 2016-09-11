signed int sub_81072A8()
{
  signed int result; // r0@6
  int v1; // r5@9
  signed int v2; // r3@9
  char *v3; // r2@9
  int v4; // r1@13
  char v5[4]; // [sp+0h] [bp-20h]@9
  char v6; // [sp+4h] [bp-1Ch]@9

  sub_810745C();
  for ( ; v201680C; v2016801 = 0 )
  {
    if ( v201680C & 1 )
    {
      v2016800 = 0;
      sub_8107374();
    }
    v201680C >>= 1;
    ++v2016811;
  }
  if ( v2016810 & 2 )
  {
    result = 4;
  }
  else if ( v2016810 & 4 )
  {
    result = 5;
  }
  else
  {
    v1 = 1;
    v5[0] = v2016804;
    v6 = 0;
    v2 = 1;
    v3 = (char *)33646597;
    do
    {
      if ( (unsigned __int8)v5[0] < (signed int)*v3 )
      {
        v1 = 1;
        v5[0] = *v3;
        v6 = v2;
      }
      if ( (unsigned __int8)v5[0] == *v3 )
      {
        v5[v1] = *v3;
        v4 = v1;
        v1 = (v1 + 1) & 0xFF;
        *(&v6 + v4) = v2;
      }
      ++v3;
      ++v2;
    }
    while ( v2 <= 3 );
    result = (unsigned __int8)*(&v6 + (unsigned __int16)Random() % v1);
  }
  return result;
}
