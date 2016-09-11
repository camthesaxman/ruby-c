int sub_80BCE90()
{
  int v0; // r5@1
  unsigned int v1; // r3@2
  int v3; // [sp+10h] [bp-4h]@0

  v0 = (unsigned __int16)VarGet(16468);
  if ( !(FlagGet(0x8C2u) << 24) )
  {
    v1 = 0;
    do
    {
      *(_BYTE *)(160 * v1 + 0x202713D) &= 0xDFu;
      v1 = (v1 + 1) & 0xFF;
    }
    while ( v1 <= 0x13 );
    FlagSet(0x8C2u);
  }
  v202E8CC = sub_80BCCA4(v0);
  v202E8CC = v202E8CC;
  v202E8DC = (unsigned int)*(_BYTE *)(160 * v0 + 0x202713D) << 26 >> 31;
  return v3;
}
