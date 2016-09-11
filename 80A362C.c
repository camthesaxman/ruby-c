int sub_80A362C()
{
  unsigned int v0; // r4@1
  int v1; // r1@3
  int v2; // r3@3
  char *v3; // r1@5
  int v4; // r2@6
  int v6; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    if ( byte_3000701 == 5 )
    {
      v1 = 4 * v0;
      v2 = ((unsigned __int8)byte_3005D10[4 * v0 + 2] - 1) & 0xFF;
    }
    else
    {
      v1 = 4 * v0;
      v2 = (unsigned __int8)byte_3005D10[4 * v0 + 2];
    }
    v3 = &byte_3005D10[v1];
    if ( v3[1] )
    {
      v4 = (unsigned __int8)v3[3];
      if ( (unsigned __int8)v3[1] + v4 > v2 )
        v3[1] = v2 - v4;
    }
    else if ( (unsigned __int8)*v3 > (unsigned int)v2 )
    {
      *v3 = v2;
    }
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 4 );
  return v6;
}
