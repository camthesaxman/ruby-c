int __fastcall sub_813DE70(int a1)
{
  int v1; // r7@1
  unsigned int v2; // r0@1
  char *v3; // r0@11
  unsigned int v4; // r5@11
  unsigned int v5; // r4@11
  char *v6; // r0@11
  char *v7; // r0@11
  unsigned int v8; // r5@11
  unsigned int v9; // r4@11
  char *v10; // r0@11
  int v12; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 > 6 )
  {
def_813DE8E:
    if ( (signed int)*(_WORD *)(v1 + 32) <= 40 )
    {
      StartSpriteAnim(v1, 1);
      *(_WORD *)(v1 + 58) = (unsigned __int8)CreateSprite((int)"Ò\aÒ\ap°@\b€°@\b", 16, 104);
      *(_WORD *)(v1 + 60) = (unsigned __int8)CreateSprite((int)"Ò\aÒ\ap°@\b€°@\b", 12, 106);
_0813DF42:
      *(_WORD *)(v1 + 46) = 1;
    }
    else
    {
      *(_WORD *)(v1 + 32) -= 4;
    }
  }
  else
  {
    switch ( v2 )
    {
      default:
        goto def_813DE8E;
      case 2u:
        StartSpriteAnim(v1, 2);
        *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 58) + 46] = 1;
        *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 60) + 46] = 2;
        ++*(_WORD *)(v1 + 46);
        return v12;
      case 3u:
        if ( (signed int)*(_WORD *)(v1 + 34) > 160 )
        {
          *(_BYTE *)(v1 + 62) |= 4u;
          goto _0813DF42;
        }
        *(_WORD *)(v1 + 34) += 2;
        --*(_WORD *)(v1 + 32);
        break;
      case 4u:
        v3 = &gSprites[68 * *(_WORD *)(v1 + 58)];
        v4 = (*((_WORD *)v3 + 18) + *((_WORD *)v3 + 16)) & 0xFFFF;
        v5 = (*((_WORD *)v3 + 19) + *((_WORD *)v3 + 17)) & 0xFFFF;
        DestroySprite((int)v3);
        v4 <<= 16;
        v5 <<= 16;
        *(_WORD *)(v1 + 58) = sub_813CE88(0x118u, SHIWORD(v4), SHIWORD(v5), 2u, 1);
        dword_2020020[17 * *(_WORD *)(v1 + 58)] = (int)sub_813DD58;
        v6 = &gSprites[68 * *(_WORD *)(v1 + 58) + 62];
        *v6 |= 4u;
        *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 58) + 48] = 1;
        *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 58) + 50] = 1;
        sub_813E580(v4 >> 16, v5 >> 16);
        v7 = &gSprites[68 * *(_WORD *)(v1 + 60)];
        v8 = (*((_WORD *)v7 + 18) + *((_WORD *)v7 + 16)) & 0xFFFF;
        v9 = (*((_WORD *)v7 + 19) + *((_WORD *)v7 + 17)) & 0xFFFF;
        DestroySprite((int)v7);
        v8 <<= 16;
        v9 <<= 16;
        *(_WORD *)(v1 + 60) = sub_813CE88(0x11Bu, SHIWORD(v8), SHIWORD(v9), 3u, 1);
        dword_2020020[17 * *(_WORD *)(v1 + 60)] = (int)sub_813DD58;
        v10 = &gSprites[68 * *(_WORD *)(v1 + 60) + 62];
        *v10 |= 4u;
        *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 60) + 48] = 2;
        *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 60) + 50] = 0;
        sub_813E580(v8 >> 16, v9 >> 16);
        BeginNormalPaletteFade(16711680, 0, 0x10u, 0x10u, 32511);
        *(_WORD *)(v1 + 46) = 1;
        return v12;
      case 5u:
        *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 58) + 46] = 3;
        *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 60) + 46] = 3;
        return v12;
      case 6u:
        DestroySprite((int)&gSprites[68 * *(_WORD *)(v1 + 58)]);
        DestroySprite((int)&gSprites[68 * *(_WORD *)(v1 + 60)]);
        DestroySprite(v1);
        return v12;
      case 1u:
        return v12;
    }
  }
  return v12;
}
