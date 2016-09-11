signed int __fastcall FieldEffectActiveListContains(unsigned __int8 a1)
{
  unsigned int v1; // r1@1

  v1 = 0;
  do
  {
    if ( (unsigned __int8)byte_30006E0[v1] == a1 )
      return 1;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0x1F );
  return 0;
}
