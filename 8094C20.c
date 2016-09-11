unsigned int __fastcall sub_8094C20(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r1@2

  v1 = a1 << 24;
  if ( (v1 >> 24) & 1 )
    v2 = *(_BYTE *)((v1 >> 25) + 0x2038470) & 0xF;
  else
    v2 = (unsigned int)*(_BYTE *)((v1 >> 25) + 0x2038470) >> 4;
  return v2;
}
