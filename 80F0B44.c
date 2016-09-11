signed int sub_80F0B44()
{
  int v1; // r4@5
  int v2; // r4@10
  unsigned int v3; // r5@10

  if ( v200D15C > 8u )
    return 0;
  ++v2000306;
  if ( v2000306 <= 1u )
    return 1;
  v2000306 = 0;
  if ( v200D15C <= 7u )
  {
    v1 = (2 * v200D15C + v2008778) & 0x1F;
    if ( v200D15C != v200876C )
    {
      BasicInitMenuWindow((int)&gWindowConfig_81E70D4);
      MenuZeroFillWindowRect(0xCu, v1, 0x1Fu, v1 + 1);
    }
    if ( !v200D15C )
      sub_80F08E4();
    ++v200D15C;
    return 1;
  }
  BasicInitMenuWindow((int)&gWindowConfig_81E70D4);
  v2 = (v2008778 + 16) & 0x1F;
  v3 = 0;
  do
  {
    MenuZeroFillWindowRect(0xCu, v2, 0x1Fu, v2 + 1);
    v2 = (v2 + 2) & 0x1F;
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 <= 7 );
  ++v200D15C;
  return 0;
}
