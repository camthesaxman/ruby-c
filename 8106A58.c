int sub_8106A58()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( byte_3000756 )
  {
    v400000A = 2629;
    word_3000752 = (unsigned __int16)word_3000754 >> 1;
    v400004C = ((unsigned __int16)word_3000754 >> 1 << 12) | ((unsigned __int16)word_3000754 >> 1 << 8) | 16 * ((unsigned __int16)word_3000754 >> 1) | ((unsigned __int16)word_3000754 >> 1);
  }
  else
  {
    v400004C = (unsigned __int8)byte_3000756;
  }
  return v1;
}
