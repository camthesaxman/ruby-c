int sub_80C6D3C()
{
  signed int v0; // r0@1
  void *v1; // r0@9
  char *v2; // r2@9
  int v3; // r1@9
  __int16 v4; // r2@9
  char *v5; // r2@10
  signed __int16 v7; // [sp+0h] [bp-Ch]@1

  script_env_2_enable();
  GetXYCoordsOneStepInFrontOfPlayer(&v7, &v7 + 1);
  v202FF98 = v7;
  v202FF9C = *(&v7 + 1);
  v0 = (unsigned __int8)player_get_direction_lower_nybble();
  if ( v0 == 2 )
  {
    v1 = &gSpriteTemplate_83D26A0;
    v2 = &gSprites[68 * v202E85C];
    v3 = (((*((_WORD *)v2 + 1) << 16) & 0x1FFFFFF) + 0x80000) >> 16;
    v4 = (unsigned __int8)*v2;
_080C6E0C:
    CreateSprite((int)v1, v3, v4);
    return 0;
  }
  if ( v0 <= 2 )
  {
    if ( v0 == 1 )
      CreateSprite(
        (int)&gSpriteTemplate_83D26A0,
        (((*(_WORD *)&gSprites[68 * v202E85C + 2] << 16) & 0x1FFFFFFu) + 0x80000) >> 16,
        (unsigned __int8)gSprites[68 * v202E85C] + 32);
    return 0;
  }
  if ( v0 == 3 )
  {
    v1 = &gSpriteTemplate_83D26A0;
    v5 = &gSprites[68 * v202E85C];
    v3 = (((*((_WORD *)v5 + 1) << 16) & 0x1FFFFFF) - 0x80000) >> 16;
    v4 = (unsigned __int8)*v5 + 16;
    goto _080C6E0C;
  }
  if ( v0 == 4 )
    CreateSprite(
      (int)&gSpriteTemplate_83D26A0,
      (((*(_WORD *)&gSprites[68 * v202E85C + 2] << 16) & 0x1FFFFFFu) + 1572864) >> 16,
      (unsigned __int8)gSprites[68 * v202E85C] + 16);
  return 0;
}
