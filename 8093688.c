int sub_8093688()
{
  unsigned int v0; // r4@1
  int v2; // [sp+Ch] [bp-4h]@0

  sub_8093324();
  v2000000 = 0;
  v2000003 = 0;
  v2000004 = 0;
  v2000002 = v2000065;
  v2000005 = 0;
  v2000006 = 0;
  v0 = 0;
  do
  {
    sub_80EB3FC(16 * v0 + 33554464, *(_WORD *)(2 * v0 + 0x200008C));
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 3 );
  sub_80936D4();
  return v2;
}
