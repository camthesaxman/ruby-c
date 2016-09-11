signed int sub_8104E18()
{
  unsigned int v0; // r2@1
  int v1; // r0@2

  v0 = 4;
  do
  {
    v1 = *((_WORD *)&dword_3004B20[10 * v200003D + 2] + v0);
    if ( v1 != 64 && *(_WORD *)&gSprites[68 * v1 + 60] )
      return 0;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0xF );
  return 1;
}
