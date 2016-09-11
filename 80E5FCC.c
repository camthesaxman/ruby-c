int __fastcall sub_80E5FCC(int a1, int a2)
{
  unsigned int v2; // r1@1
  unsigned int v3; // r1@3
  int v5; // [sp+0h] [bp-4h]@0

  v202E860 = 0;
  v202E861 = 0;
  v202E862 = 0;
  v202E863 = 0;
  v202E864 = a1;
  v202E868 = a2;
  v2 = 0;
  do
  {
    *(_BYTE *)(v2 + 33745004) = 0;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 7 );
  v3 = 0;
  do
  {
    *(_BYTE *)(v3 + 33745012) = 0;
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 7 );
  return v5;
}
