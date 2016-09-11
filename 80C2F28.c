int sub_80C2F28()
{
  __int16 v0; // r3@1
  __int16 v1; // r5@1
  unsigned __int16 v2; // r1@1
  int v4; // [sp+8h] [bp-4h]@0

  v0 = word_30041B0;
  word_30041B0 += 2;
  v1 = word_30041B8;
  v2 = word_30041B8++ + 1;
  if ( (unsigned __int16)word_30041B0 > 0xFFu )
    word_30041B0 = v0 - 253;
  if ( v2 > 0xFFu )
    word_30041B8 = v1 - 254;
  return v4;
}
