int sub_80980D4()
{
  unsigned int v0; // r1@1
  unsigned int v1; // r1@3
  int v2; // r5@5
  unsigned __int8 v3; // r0@6
  __int16 v4; // r4@6
  unsigned __int8 v5; // r0@7
  signed int v7; // [sp+0h] [bp-34h]@1
  signed int v8; // [sp+4h] [bp-30h]@1
  signed int v9; // [sp+8h] [bp-2Ch]@1
  int v10; // [sp+Ch] [bp-28h]@1
  signed int v11; // [sp+10h] [bp-24h]@1
  signed int v12; // [sp+14h] [bp-20h]@1
  int v13; // [sp+18h] [bp-1Ch]@1
  int v14; // [sp+1Ch] [bp-18h]@1
  int v15; // [sp+20h] [bp-14h]@1
  int v16; // [sp+24h] [bp-10h]@1
  int v17; // [sp+30h] [bp-4h]@11

  v13 = 33564548;
  v14 = 133120;
  v15 = 33564420;
  v16 = 56007;
  v7 = -624492542;
  v8 = 138112684;
  v9 = 136194308;
  v10 = 0;
  v11 = 136194320;
  v12 = 134222353;
  v0 = 0;
  do
  {
    *(_BYTE *)(v0 + 33564548) = 0;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0x7FF );
  v1 = 0;
  do
  {
    *(_WORD *)(2 * v1 + 0x2002704) = 0;
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 0xF );
  v2002700 = 0;
  v2 = (unsigned __int16)LoadSpriteSheet((int)&v13);
  if ( v2 )
  {
    v3 = LoadSpritePalette((int)&v15);
    v4 = v3;
    if ( v3 != 255 )
    {
      v5 = CreateSprite((int)&v7, 40, 48);
      if ( v5 != 64 )
      {
        v2002700 = &gSprites[68 * v5];
        v20026FA = 16 * v4 + 256;
        v20026FC = 32 * v2 + 100728832;
      }
    }
  }
  if ( !v2002700 )
  {
    FreeSpriteTilesByTag(2u);
    FreeSpritePaletteByTag(0xDAC7u);
  }
  return v17;
}
