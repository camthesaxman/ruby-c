int sub_808C02C()
{
  unsigned int v0; // r1@1
  int v2; // [sp+Ch] [bp-4h]@0

  v202FFB8 = 0;
  v202FFBA = 64;
  byte_3005CE8 = 0;
  v2024EBD = 0;
  v2024EBC = 0;
  v2024EBE = 0;
  v2024EBF = 0;
  v2024EC0 = 0;
  v2024EC4 = 0;
  v2024EC8 = 0;
  sub_80690C8();
  v0 = 0;
  do
  {
    *(_BYTE *)(v0 + 33705676) = 0;
    *(_BYTE *)(v0 + 33705728) = 0;
    *(_BYTE *)(v0 + 33710188) = 0;
    *(_BYTE *)(v0 + 33722816) = 0;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0x33 );
  return v2;
}
