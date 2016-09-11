signed int __fastcall FindFieldObjectPaletteIndexByTag(unsigned __int16 a1)
{
  int v1; // r2@1

  v1 = 0;
  do
  {
    if ( *((_WORD *)&gUnknown_0837377C + 4 * v1 + 2) == a1 )
      return v1;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( *((_WORD *)&gUnknown_0837377C + 4 * v1 + 2) != 4607 );
  return 255;
}
