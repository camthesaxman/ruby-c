int __fastcall sub_8095ADC(unsigned __int8 a1, int a2, _BYTE *a3)
{
  unsigned int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1

  v3 = 0;
  v4 = 0;
  v5 = 2400 * a1;
  do
  {
    if ( GetBoxMonData((unsigned int *)(v5 + 80 * v3 + 33751204), 11, a3) )
      v4 = (v4 + 1) & 0xFFFF;
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 <= 0x1D );
  return (unsigned __int8)v4;
}
