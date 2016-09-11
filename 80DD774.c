int __fastcall sub_80DD774(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  void *v3; // r3@3
  signed __int16 v4; // r5@3
  int v5; // r6@7
  int v6; // r7@7
  unsigned __int8 v7; // r0@7
  char *v8; // r0@8
  int v10; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = (signed __int16)(*(_WORD *)(a1 + 10) - 1);
  if ( v2 <= 4 )
  {
    switch ( v2 )
    {
      case 0u:
        v3 = &gSpriteTemplate_83DAD78;
        v4 = 0;
        goto _080DD7D0;
      case 1u:
      case 2u:
        v3 = &gSpriteTemplate_83DAD90;
        v4 = 80;
        goto _080DD7D0;
      case 3u:
        v3 = &gSpriteTemplate_83DAD90;
        v4 = 64;
        goto _080DD7D0;
      case 4u:
        v3 = &gSpriteTemplate_83DAD90;
        v4 = 48;
_080DD7D0:
        v5 = (((*(_WORD *)(v1 + 12) << 16 >> 19) & 0xFFFF) + 4 * *(_WORD *)(v1 + 32)) & 0xFFFF;
        v6 = (*(_WORD *)(v1 + 14) << 16 >> 19) & 0xFFFF;
        v7 = CreateSprite(
               (int)v3,
               (*(_WORD *)(v1 + 12) << 16 >> 19) + 4 * *(_WORD *)(v1 + 32),
               *(_WORD *)(v1 + 14) << 16 >> 19);
        if ( v7 != 64 )
        {
          v8 = &gSprites[68 * v7];
          *((_WORD *)v8 + 23) = 18;
          *((_WORD *)v8 + 25) = v5 + 20 * *(_WORD *)(v1 + 32) + 3 * *(_WORD *)(v1 + 10);
          *((_WORD *)v8 + 27) = v6;
          *((_WORD *)v8 + 28) = -16 - 2 * *(_WORD *)(v1 + 10);
          *((_WORD *)v8 + 2) = *((_WORD *)v8 + 2) & 0xFC00 | ((*((_WORD *)v8 + 2) & 0x3FF) + v4) & 0x3FF;
          sub_80786EC((int)v8);
          ++*(_WORD *)(v1 + 30);
        }
        *(_WORD *)(v1 + 32) = -*(_WORD *)(v1 + 32);
        break;
      default:
        return v10;
    }
  }
  return v10;
}
