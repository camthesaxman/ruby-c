signed int __fastcall CreateSpriteAtEnd(int a1, int a2, __int16 a3)
{
  int v3; // r3@1
  signed int v4; // r4@1
  __int16 v5; // r1@2

  LOWORD(v3) = 63;
  v4 = a2 << 16;
  do
  {
    v5 = v3;
    if ( !((unsigned __int8)gSprites[68 * (signed __int16)v3 + 62] << 31) )
      return (unsigned __int8)CreateSpriteAt((unsigned __int8)v3, a1, v4 >> 16, a3);
    v3 = ((signed __int16)v3 - 1) & 0xFFFF;
  }
  while ( (signed __int16)(v5 - 1) > -1 );
  return 64;
}
