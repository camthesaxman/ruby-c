int unref_sub_80B0CF4()
{
  int v0; // r1@1
  unsigned int v1; // r4@2
  int v3; // [sp+1Ch] [bp-4h]@0

  v0 = v2018000 ^ 1;
  v2018000 ^= 1u;
  if ( v0 )
  {
    sub_80B0D7C();
  }
  else
  {
    v1 = 0;
    do
    {
      FillWindowRect_DefaultPalette(
        (int)&unk_3004210,
        0,
        gUnknown_083CA308[2 * v1],
        byte_83CA309[2 * v1],
        gUnknown_083CA310[2 * v1] + 5,
        byte_83CA311[2 * v1] + 1);
      v1 = (v1 + 1) & 0xFF;
    }
    while ( v1 <= 3 );
    sub_80AE514();
    sub_80AEB30();
  }
  return v3;
}
