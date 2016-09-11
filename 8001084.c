signed int __fastcall AllocSpriteTiles(unsigned __int16 a1)
{
  int v1; // r4@1
  unsigned int i; // r3@2
  unsigned int v4; // r3@6
  unsigned int v5; // r0@8
  unsigned __int16 v6; // r8@10
  int v7; // r2@10
  unsigned int v8; // r0@11
  int v9; // r3@15
  int v10; // r1@15

  v1 = a1;
  if ( !a1 )
  {
    for ( i = (unsigned __int16)gReservedSpriteTileCount; i <= 0x3FF; i = (i + 1) & 0xFFFF )
      gSpriteTileAllocBitmap[i >> 3] &= ~(unsigned __int8)(1 << (i & 7));
    return 0;
  }
  v4 = (unsigned __int16)gReservedSpriteTileCount;
LABEL_7:
  if ( ((signed int)gSpriteTileAllocBitmap[v4 >> 3] >> (v4 & 7)) & 1 )
  {
    do
    {
      v5 = (v4 + 1) << 16;
      v4 = (v4 + 1) & 0xFFFF;
      if ( v4 == 1024 )
        return -1;
    }
    while ( ((signed int)gSpriteTileAllocBitmap[v5 >> 19] >> (v4 & 7)) & 1 );
  }
  v6 = v4;
  v7 = 1;
  if ( 1 != v1 )
  {
    while ( 1 )
    {
      v8 = (v4 + 1) << 16;
      v4 = (v4 + 1) & 0xFFFF;
      if ( v4 == 1024 )
        return -1;
      if ( !(((signed int)gSpriteTileAllocBitmap[v8 >> 19] >> (v4 & 7)) & 1) )
      {
        v7 = (v7 + 1) & 0xFFFF;
        if ( v7 != v1 )
          continue;
      }
      if ( v7 != v1 )
        goto LABEL_7;
      break;
    }
  }
  v9 = v6;
  v10 = v1 + (signed __int16)v6;
  if ( v6 < v10 )
  {
    do
    {
      gSpriteTileAllocBitmap[(unsigned int)v9 >> 3] |= 1 << (v9 & 7);
      v9 = (v9 + 1) & 0xFFFF;
    }
    while ( v9 < v10 );
  }
  return (signed __int16)v6;
}
