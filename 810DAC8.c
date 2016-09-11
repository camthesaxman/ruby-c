unsigned int sub_810DAC8()
{
  int v0; // r6@1
  int v1; // r7@1
  unsigned int v2; // r5@1
  unsigned int i; // r4@1

  v0 = 0;
  v1 = (unsigned __int8)sub_8008218();
  v2 = (unsigned __int8)sub_800820C();
  for ( i = 0; i < v2; i = (i + 1) & 0xFF )
  {
    if ( v1 != i )
    {
      StringCopy((_BYTE *)gUnknown_083D1464[v0], &byte_3002978[28 * i]);
      v0 = (v0 + 1) & 0xFF;
    }
  }
  return v2;
}
