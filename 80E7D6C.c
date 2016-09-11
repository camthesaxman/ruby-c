int sub_80E7D6C()
{
  unsigned int i; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  for ( i = 0; i < v200100A; i = (i + 1) & 0xFFFF )
    sub_80E7F00(i, 0xFFFF);
  return v2;
}
