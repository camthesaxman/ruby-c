signed int ai_is_too_invested_in_stat_buffs()
{
  unsigned int v0; // r4@1
  _BYTE *v1; // r2@1
  signed int v2; // r3@1
  signed int result; // r0@5

  v0 = 0;
  v1 = (_BYTE *)(88 * v2024A60 + 33704600);
  v2 = 7;
  do
  {
    if ( (signed int)*v1 > 6 )
      v0 = ((char)v0 + *v1 - 6) & 0xFF;
    ++v1;
    --v2;
  }
  while ( v2 >= 0 );
  result = 0;
  if ( v0 > 3 )
    result = 1;
  return result;
}
