int __fastcall sub_80F2E18(unsigned __int8 a1)
{
  int v1; // r8@1
  int v2; // r1@2
  signed int v4; // [sp+0h] [bp-40h]@2
  signed int v5; // [sp+4h] [bp-3Ch]@2
  signed int v6; // [sp+8h] [bp-38h]@2
  int v7; // [sp+Ch] [bp-34h]@2
  signed int v8; // [sp+10h] [bp-30h]@2
  signed int v9; // [sp+14h] [bp-2Ch]@2
  int v10; // [sp+18h] [bp-28h]@2
  int v11; // [sp+1Ch] [bp-24h]@2
  int v12; // [sp+20h] [bp-20h]@2
  int v13; // [sp+24h] [bp-1Ch]@2
  int v14; // [sp+3Ch] [bp-4h]@6

  v1 = v2008768;
  if ( v2008768 )
  {
    v40000D4 = (a1 << 13) + 33608164;
    v40000D8 = v200D1E0;
    v40000DC = -2147482624;
    LoadPalette((a1 << 7) + 0x2000000, v200D1DC, 32);
  }
  else
  {
    v13 = 395264;
    v4 = 393222;
    v5 = 138298720;
    v6 = 136194308;
    v7 = 0;
    v8 = 136194320;
    v9 = 135212545;
    v11 = 6;
    v12 = (a1 << 13) + 33608164;
    v10 = (a1 << 7) + 0x2000000;
    v200D1DC = LoadSpritePalette((int)&v10);
    v200D1DC = v200D1DC;
    v200D1DE = LoadSpriteSheet((int)&v12);
    v2 = (unsigned __int8)CreateSprite((int)&v4, 38, 104);
    if ( v2 == 64 )
    {
      FreeSpriteTilesByTag(6u);
      FreeSpritePaletteByTag(6u);
      v2008768 = v1;
    }
    else
    {
      v2008768 = &gSprites[68 * v2];
      v200D1E0 = 32 * v200D1DE + 100728832;
      v200D1DC = 16 * v200D1DC + 256;
    }
  }
  return v14;
}
