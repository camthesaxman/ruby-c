int sub_80A40D0()
{
  unsigned int v0; // r4@1
  char *v1; // r3@2
  int v2; // r2@2
  int v4; // [sp+10h] [bp-4h]@0

  v0 = 0;
  if ( (unsigned __int8)byte_3005D10[4 * v2038559 + 1] != (unsigned __int8)byte_3005D10[4 * v2038559 + 2] )
  {
    while ( 1 )
    {
      v1 = &byte_3005D10[4 * v2038559];
      v2 = (unsigned __int8)v1[1];
      if ( *(_WORD *)(4 * (v2 + v0) + dword_3005D24) == v2025BCA )
        break;
      v0 = (v0 + 1) & 0xFF;
      if ( v0 > 7 || v2 + v0 == (unsigned __int8)v1[2] )
        return v4;
    }
    sub_80A40AC(v0);
  }
  return v4;
}
