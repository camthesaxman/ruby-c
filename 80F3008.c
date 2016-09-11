int __fastcall sub_80F3008(unsigned __int8 a1)
{
  unsigned __int8 v1; // r0@4
  unsigned int v2; // r4@6
  int v3; // r1@7
  char *v4; // r3@8
  signed __int16 v5; // r0@8
  void *v7; // [sp+0h] [bp-2Ch]@1
  signed int v8; // [sp+4h] [bp-28h]@1
  signed int v9; // [sp+8h] [bp-24h]@1
  signed int v10; // [sp+Ch] [bp-20h]@1
  int v11; // [sp+10h] [bp-1Ch]@1
  int v12; // [sp+14h] [bp-18h]@1
  void *v13; // [sp+18h] [bp-14h]@1
  int v14; // [sp+1Ch] [bp-10h]@1
  int v15; // [sp+28h] [bp-4h]@13

  v7 = &gPokenavArrow_Gfx;
  v8 = 589888;
  v9 = 138296128;
  v10 = 655488;
  v11 = 0;
  v12 = 0;
  v13 = &gPokenavArrowsPalette;
  v14 = 9;
  if ( (signed int)a1 <= 2 && (signed int)a1 >= 1 )
    v13 = &gUnknown_08E9F988;
  LoadSpriteSheets(&v7);
  LoadSpritePalette((int)&v13);
  v1 = CreateSprite((int)&gSpriteTemplate_83E45B8, 95, 0);
  if ( v1 == 64 )
  {
    v20087CC = 0;
  }
  else
  {
    v20087CC = &gSprites[68 * v1];
    v2 = 0;
    do
    {
      v3 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83E45F0, 168, ((_WORD)v2 << 7) + 8);
      if ( v3 == 64 )
      {
        *(_DWORD *)(4 * v2 + 0x20087D0) = 0;
      }
      else
      {
        v4 = &gSprites[68 * v3];
        *(_DWORD *)(4 * v2 + 0x20087D0) = v4;
        v4[62] |= 4u;
        *((_WORD *)v4 + 23) = 0;
        *((_WORD *)v4 + 24) = 0;
        v5 = 1;
        if ( !v2 )
          v5 = -1;
        *((_WORD *)v4 + 25) = v5;
        *((_WORD *)v4 + 26) = v2;
        *((_WORD *)v4 + 27) = 1;
        StartSpriteAnim((int)v4, v2);
      }
      v2 = (v2 + 1) & 0xFFFF;
    }
    while ( v2 <= 1 );
  }
  return v15;
}
