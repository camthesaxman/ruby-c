int __fastcall sub_81306A4(unsigned __int8 a1)
{
  int *v1; // r4@1
  signed int v2; // r1@1
  __int16 v3; // r0@8
  __int16 v4; // r0@9
  __int16 v5; // r0@13
  __int16 v6; // r2@14
  char *v7; // r1@14
  int v9; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  if ( v2 == 1 )
  {
    if ( !(sub_8078718((int)&gSprites[68 * HIWORD(dword_3004B20[10 * a1 + 9])]) << 24) )
      return v9;
    *((_WORD *)v1 + 5) = 0;
    *((_WORD *)v1 + 6) = 0;
    goto _08130796;
  }
  if ( v2 > 1 )
  {
    if ( v2 != 2 )
    {
      if ( v2 == 3 )
        move_anim_task_del(a1);
      return v9;
    }
    v5 = *((_WORD *)v1 + 5) + 1;
    *((_WORD *)v1 + 5) = v5;
    if ( v5 <= 1 )
      return v9;
    *((_WORD *)v1 + 5) = 0;
    v6 = *((_WORD *)v1 + 6) + 1;
    *((_WORD *)v1 + 6) = v6;
    v7 = &gSprites[68 * *((_WORD *)v1 + 19) + 62];
    *v7 = *v7 & 0xFB | 4 * (v6 & 1);
    if ( *((_WORD *)v1 + 6) != 16 )
      return v9;
    FreeOamMatrix((unsigned int)(unsigned __int8)gSprites[68 * *((_WORD *)v1 + 19) + 3] << 26 >> 27);
    DestroySprite((int)&gSprites[68 * *((_WORD *)v1 + 19)]);
_08130796:
    ++*((_WORD *)v1 + 4);
    return v9;
  }
  if ( !*((_WORD *)v1 + 4) )
  {
    v3 = *((_WORD *)v1 + 5) + 1;
    *((_WORD *)v1 + 5) = v3;
    if ( v3 > 1 )
    {
      *((_WORD *)v1 + 5) = 0;
      sub_8078718((int)&gSprites[68 * *((_WORD *)v1 + 19)]);
      v4 = *((_WORD *)v1 + 6) + 1;
      *((_WORD *)v1 + 6) = v4;
      if ( v4 > 7 )
        goto _08130796;
    }
  }
  return v9;
}
