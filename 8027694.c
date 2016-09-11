unsigned int __fastcall sub_8027694(unsigned __int16 a1)
{
  int v1; // r2@1
  int v2; // r3@1
  __int16 *v3; // r1@3
  int v4; // r0@4
  int v5; // r1@6

  v1 = a1;
  v2 = 0;
  if ( (unsigned __int16)gUnknown_081FACFE[0] != 65534 && (unsigned __int16)gUnknown_081FACFE[0] != a1 )
  {
    v3 = gUnknown_081FACFE;
    do
    {
      ++v3;
      ++v2;
      v4 = (unsigned __int16)*v3;
    }
    while ( v4 != 65534 && v4 != v1 );
  }
  v5 = (unsigned __int16)gUnknown_081FACFE[v2] ^ 0xFFFE;
  return (-v5 | (unsigned int)v5) >> 31;
}
