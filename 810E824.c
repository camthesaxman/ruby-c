int sub_810E824()
{
  int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  v203925A = 0;
  v203925B = 0;
  sub_810E7AC(16, 0, 0, 0);
  if ( byte_3000760[0] != 16 )
  {
    do
    {
      ++v203925A;
      v0 = (v0 + 1) & 0xFF;
    }
    while ( byte_3000760[4 * v0] != 16 );
  }
  sub_810E874();
  return v2;
}
