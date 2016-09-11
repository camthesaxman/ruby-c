unsigned int GabbyAndTyGetBattleNum()
{
  unsigned int result; // r0@1

  result = v202824D;
  if ( v202824D > 5u )
    result = (v202824D % 3u + 6) & 0xFF;
  return result;
}
