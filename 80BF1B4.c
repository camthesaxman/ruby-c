signed int __fastcall sub_80BF1B4(unsigned __int8 a1)
{
  int v1; // r6@1
  unsigned __int16 v2; // r5@1
  unsigned int v3; // r4@1

  v1 = a1;
  v2 = sub_80BFB94();
  v3 = 5;
  do
  {
    if ( *(_BYTE *)(36 * v3 + 0x2027E6C) == v1
      && (unsigned __int8)v2 == *(_BYTE *)(36 * v3 + 0x2027E8E)
      && v2 >> 8 == *(_BYTE *)(36 * v3 + 0x2027E8F) )
    {
      return 1;
    }
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 0x17 );
  return 0;
}
