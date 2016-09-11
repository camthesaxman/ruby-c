int __fastcall sub_80F29B8(unsigned __int8 a1)
{
  unsigned int v1; // r7@1
  void *v2; // r8@1
  signed int v3; // r3@3
  int v4; // r0@3
  signed int v5; // r1@3
  int v6; // r9@3
  signed int v7; // r4@5
  unsigned int v8; // r6@11
  int v9; // r5@12
  int v10; // r4@12
  char *v11; // r3@13
  char v12; // r1@15
  char *v13; // r2@21
  signed __int16 v15; // [sp+0h] [bp-34h]@3
  signed __int16 v16; // [sp+4h] [bp-30h]@3
  signed int v17; // [sp+8h] [bp-2Ch]@11
  int v18; // [sp+Ch] [bp-28h]@11
  signed int v19; // [sp+10h] [bp-24h]@11
  int v20; // [sp+30h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( a1 <= 0xBu )
  {
    switch ( a1 )
    {
      case 0u:
      case 1u:
      case 2u:
      case 3u:
        v3 = 65440;
        v4 = (49 - v200030C) & 0xFFFF;
        v15 = 8;
        v16 = 32;
        v5 = 64;
        v6 = 33569672;
        v2 = &gSpriteTemplate_83E44F8;
        if ( v1 != 3 )
          v2 = &gSpriteTemplate_83E44E0;
        goto _080F2AC8;
      case 4u:
        v3 = 272;
        v4 = (49 - v200030C) & 0xFFFF;
        v15 = -8;
        v16 = 152;
        v5 = 64;
        v2 = &gSpriteTemplate_83E44E0;
        v7 = 15240;
        goto _080F2AC4;
      case 5u:
      case 6u:
      case 8u:
      case 9u:
        v2 = &gSpriteTemplate_83E4530;
        goto _080F2A98;
      case 7u:
      case 0xAu:
      case 0xBu:
_080F2A98:
        if ( !v2 )
          v2 = &gSpriteTemplate_83E4548;
        v3 = 65440;
        v4 = (68 - v200030C) & 0xFFFF;
        v15 = 8;
        v16 = 16;
        v5 = 32;
        v7 = 15248;
_080F2AC4:
        v6 = v7 + 0x2000000;
_080F2AC8:
        v8 = 0;
        v19 = v5 << 16;
        v17 = v3 << 16;
        v18 = v4 << 16;
        do
        {
          v9 = v8 * (v19 >> 16);
          v10 = (unsigned __int8)CreateSprite((int)v2, HIWORD(v17) + v9, SHIWORD(v18));
          if ( v10 != 64 )
          {
            v11 = &gSprites[68 * v10];
            *((_WORD *)v11 + 23) = v15;
            *((_WORD *)v11 + 24) = v16 + v9;
            *((_WORD *)v11 + 25) = v8;
            *((_WORD *)v11 + 26) = v1;
            if ( v1 != 4 || v8 != 1 )
            {
              StartSpriteAnim((int)&gSprites[68 * v10], v8);
            }
            else
            {
              v12 = 2;
              if ( !v2006E90 )
                v12 = 1;
              StartSpriteAnim((int)&gSprites[68 * v10], v12);
            }
            if ( v1 <= 3 && v8 == 1 )
            {
              v13 = &gSprites[68 * v10];
              v13[1] &= 0x3Fu;
              v13[3] = v13[3] & 0x3F | 0x80;
            }
            *(_DWORD *)(4 * v8 + v6) = &gSprites[68 * v10];
          }
          v8 = (v8 + 1) & 0xFFFF;
        }
        while ( v8 <= 1 );
        break;
      default:
        return v20;
    }
  }
  return v20;
}
