int __fastcall sub_80BD328(int a1, unsigned __int8 a2)
{
  int v2; // r6@1
  int v3; // r5@1
  unsigned int v4; // r4@1
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = 1;
  do
  {
    if ( (unsigned int)*(_BYTE *)(160 * v4 + v2 + 1) >> 6 == v3 )
      sub_80BD1FC((unsigned __int8 *)(160 * v4 + v2));
    v4 = (v4 + 1) & 0xFFFF;
  }
  while ( v4 <= 0x13 );
  return v6;
}
