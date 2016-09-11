int __fastcall sub_80DBE98(unsigned __int8 a1)
{
  int *v1; // r4@1
  signed int v2; // r1@1
  __int16 v3; // r0@9
  int v4; // r2@10
  signed int v5; // r0@11
  char *v6; // r1@18
  int v7; // r0@18
  int v8; // r0@19
  char *v9; // r0@20
  __int16 v10; // r0@24
  __int16 v11; // r0@29
  unsigned int v12; // r5@30
  int v13; // r0@31
  int v15; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  if ( v2 == 1 )
  {
    if ( *((_WORD *)v1 + 5) & 1 )
      --*((_WORD *)v1 + 7);
    else
      ++*((_WORD *)v1 + 8);
    v4000052 = (LOWORD(dword_3004B20[10 * a1 + 4]) << 8) | HIWORD(dword_3004B20[10 * a1 + 3]);
    v11 = *((_WORD *)v1 + 5) + 1;
    *((_WORD *)v1 + 5) = v11;
    if ( v11 == 32 )
    {
      v12 = 8;
      do
      {
        v13 = *((_WORD *)v1 + v12 + 4);
        if ( v13 != 64 )
          DestroySprite((int)&gSprites[68 * v13]);
        v12 = (v12 + 1) & 0xFFFF;
      }
      while ( v12 <= 0xC );
      goto _080DBFF4;
    }
    return v15;
  }
  if ( v2 <= 1 )
  {
    if ( *((_WORD *)v1 + 4) )
      return v15;
    v3 = *((_WORD *)v1 + 5) + 1;
    *((_WORD *)v1 + 5) = v3;
    if ( v3 <= 8 )
      return v15;
    *((_WORD *)v1 + 5) = 0;
    v4 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83DA8DC, *((_WORD *)v1 + 17), *((_WORD *)v1 + 18));
    *((_WORD *)v1 + *((_WORD *)v1 + 6) + 8 + 4) = v4;
    if ( v4 == 64 )
      goto _080DBF82;
    v5 = *((_WORD *)v1 + 6);
    if ( v5 == 1 )
    {
      v6 = &gSprites[68 * v4];
      *((_WORD *)v6 + 18) = -*((_WORD *)v1 + 16);
      LOWORD(v8) = *((_WORD *)v1 + 16);
    }
    else
    {
      if ( v5 > 1 )
      {
        if ( v5 == 2 )
        {
          v9 = &gSprites[68 * v4];
          *((_WORD *)v9 + 18) = *((_WORD *)v1 + 16);
          *((_WORD *)v9 + 19) = *((_WORD *)v1 + 16);
          goto _080DBF82;
        }
        if ( v5 != 3 )
        {
_080DBF82:
          v10 = *((_WORD *)v1 + 6) + 1;
          *((_WORD *)v1 + 6) = v10;
          if ( v10 == 5 )
            goto _080DBFF4;
          return v15;
        }
        v6 = &gSprites[68 * v4];
        v7 = -*((_WORD *)v1 + 16);
      }
      else
      {
        if ( *((_WORD *)v1 + 6) )
          goto _080DBF82;
        v6 = &gSprites[68 * v4];
        LOWORD(v7) = *((_WORD *)v1 + 16);
      }
      *((_WORD *)v6 + 18) = v7;
      v8 = -*((_WORD *)v1 + 16);
    }
    *((_WORD *)v6 + 19) = v8;
    goto _080DBF82;
  }
  if ( v2 == 2 )
  {
_080DBFF4:
    ++*((_WORD *)v1 + 4);
    return v15;
  }
  if ( v2 == 3 )
  {
    v4000052 = 0;
    v4000050 = 0;
    move_anim_task_del(a1);
  }
  return v15;
}
