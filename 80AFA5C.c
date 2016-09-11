int sub_80AFA5C()
{
  unsigned int v0; // r3@1
  __int16 v2; // [sp+0h] [bp-18h]@2
  int v3; // [sp+14h] [bp-4h]@3

  v0 = 0;
  do
  {
    v2 = 0;
    v40000D4 = &v2;
    v40000D8 = 2 * (160 * v0 + 118) + 100712448;
    v40000DC = -2130706424;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 3 );
  return v3;
}
