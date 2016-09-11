unsigned int __fastcall sub_80BC948(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r5@1
  unsigned int v3; // r4@1

  v1 = a1;
  v2 = 0;
  v3 = 1;
  do
  {
    if ( (unsigned __int8)sub_80BC268(v3) == 1 )
    {
      if ( v1 == v2 )
        return v3;
      v2 = (v2 + 1) & 0xFF;
    }
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 0x13 );
  return 0;
}
