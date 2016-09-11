int sub_80BC538()
{
  int v0; // r5@1
  signed int v1; // r4@1
  int v2; // r0@4

  v0 = 0;
  v1 = 1;
  do
  {
    if ( (unsigned __int8)sub_80BC268(v1) == 1 )
      v0 = (v0 + 1) & 0xFF;
    v2 = (v1 << 16) + 0x10000;
    v1 = (unsigned int)v2 >> 16;
  }
  while ( v2 >> 16 <= 19 );
  return v0;
}
