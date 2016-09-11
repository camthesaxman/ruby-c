int sub_809EBC4()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( v201800B )
  {
    sub_80A0EE8(v201800B);
    word_30042C0 = 256;
    if ( v201800B == 1 )
      v400000A = (v400000A & 0xE0FF) + 2048;
    if ( v201800B == 2 )
      v400000A = (v400000A & 0xE0FF) + 2560;
    if ( v201800B == 3 )
      v400000A = (v400000A & 0xE0FF) + 3072;
  }
  return v1;
}
