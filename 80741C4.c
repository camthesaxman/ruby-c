signed int __fastcall GetPaletteNumByUid(unsigned __int16 a1)
{
  unsigned int v1; // r1@1

  v1 = 0;
  do
  {
    if ( **(_WORD **)(12 * v1 + 0x202F2C8) == a1 )
      return v1;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0xF );
  return 16;
}
