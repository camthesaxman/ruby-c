unsigned int __fastcall SpriteTileAllocBitmapOp(int a1, int a2)
{
  unsigned int v2; // r0@1
  int v3; // r3@1
  char v4; // r2@1
  unsigned int v5; // r5@1

  v2 = a1 << 16;
  a2 = (unsigned __int8)a2;
  v3 = (v2 >> 19) & 0xFF;
  v4 = (v2 >> 16) & 7;
  v5 = 0;
  if ( (_BYTE)a2 )
  {
    if ( a2 == 1 )
      gSpriteTileAllocBitmap[v3] |= 1 << v4;
    else
      v5 = ((unsigned int)(0x1000000 << v4) >> 24) & gSpriteTileAllocBitmap[(v2 >> 19) & 0xFF];
  }
  else
  {
    gSpriteTileAllocBitmap[v3] &= ~(1 << v4);
  }
  return v5;
}
