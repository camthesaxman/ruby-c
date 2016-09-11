int sub_81481DC()
{
  int v0; // r3@1
  unsigned int v1; // r4@1
  int v3; // [sp+10h] [bp-4h]@0

  word_3005F34 = 1;
  v0 = gNatureToMonPokeblockAnim[2 * (unsigned __int8)byte_3005F30];
  v1 = 0;
  for ( word_3005F34 = word_8411A4A[10 * v0] + 1; word_8411A4A[10 * v0 + 5] != 1; word_3005F34 += word_8411A4A[10 * v0] )
  {
    v1 = (v1 + 1) & 0xFF;
    v0 = (v0 + 1) & 0xFF;
    if ( v1 > 7 )
      break;
  }
  return v3;
}
