signed int __fastcall CreateSprite(int a1, __int16 a2, __int16 a3)
{
  unsigned int v3; // r3@1

  v3 = 0;
  do
  {
    if ( !((unsigned __int8)gSprites[68 * v3 + 62] << 31) )
      return (unsigned __int8)CreateSpriteAt(v3, a1, a2, a3);
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 0x3F );
  return 64;
}
