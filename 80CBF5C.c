int __fastcall sub_80CBF5C(unsigned __int8 a1)
{
  int *v1; // r6@1
  char *v2; // r4@1
  signed int v3; // r5@1
  __int16 v4; // r2@33
  __int16 v5; // r1@33
  __int16 v6; // r0@33
  __int16 v7; // r1@5
  __int16 v8; // r2@5
  __int16 v9; // r1@12
  __int16 v10; // r2@12
  __int16 v11; // r1@12
  __int16 v12; // r2@2
  __int16 v13; // r1@2
  __int16 v14; // r1@2
  signed __int16 v15; // r0@2
  __int16 v16; // r1@21
  __int16 v17; // r2@21
  __int16 v18; // r2@18
  __int16 v19; // r1@18
  __int16 v20; // r1@18
  __int16 v21; // r0@44
  int v23; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = &gSprites[68 * *((_WORD *)v1 + 6)];
  v3 = *((_WORD *)v1 + 4);
  if ( v3 == 7 )
  {
    v12 = *((_WORD *)v2 + 18) + *((_WORD *)v2 + 16);
    *((_WORD *)v2 + 16) = v12;
    v13 = *((_WORD *)v2 + 19) + *((_WORD *)v2 + 17);
    *((_WORD *)v2 + 17) = v13;
    *((_WORD *)v2 + 18) = 0;
    *((_WORD *)v2 + 19) = 0;
    *((_WORD *)v2 + 23) = 10;
    *((_WORD *)v2 + 24) = v12;
    *((_WORD *)v2 + 25) = *((_WORD *)v1 + 10);
    *((_WORD *)v2 + 26) = v13;
    *((_WORD *)v2 + 27) = *((_WORD *)v1 + 11);
    *((_WORD *)v2 + 28) = sub_80CC338(v2);
    v14 = *((_WORD *)v1 + 8) + 2;
    *((_WORD *)v1 + 8) = v14;
    *((_WORD *)v1 + 7) = 4;
    v2[67] = v14;
    StartSpriteAnim((int)v2, *((_BYTE *)v1 + 14));
    sub_80786EC((int)v2);
    v15 = *((_WORD *)v1 + 4) + 1;
_080CC32E:
    *((_WORD *)v1 + 4) = v15;
    return v23;
  }
  if ( v3 > 7 )
  {
    if ( v3 == 11 )
    {
      v18 = *((_WORD *)v2 + 18) + *((_WORD *)v2 + 16);
      *((_WORD *)v2 + 16) = v18;
      v19 = *((_WORD *)v2 + 19) + *((_WORD *)v2 + 17);
      *((_WORD *)v2 + 17) = v19;
      *((_WORD *)v2 + 18) = 0;
      *((_WORD *)v2 + 19) = 0;
      *((_WORD *)v2 + 23) = 10;
      *((_WORD *)v2 + 24) = v18;
      *((_WORD *)v2 + 25) = *((_WORD *)v1 + 12);
      *((_WORD *)v2 + 26) = v19;
      *((_WORD *)v2 + 27) = *((_WORD *)v1 + 13);
      *((_WORD *)v2 + 28) = sub_80CC338(v2);
      v20 = *((_WORD *)v1 + 8) - 2;
      *((_WORD *)v1 + 8) = v20;
      *((_WORD *)v1 + 7) = 6;
      v2[67] = v20;
      StartSpriteAnim((int)v2, *((_BYTE *)v1 + 14));
      sub_80786EC((int)v2);
      v15 = *((_WORD *)v1 + 4) + 1;
      goto _080CC32E;
    }
    if ( v3 > 11 )
    {
      if ( v3 == 13 )
      {
        if ( !*((_WORD *)v1 + 16) )
          move_anim_task_del(a1);
      }
      else if ( v3 >= 13 )
      {
        if ( v3 == 255 )
        {
          v21 = *((_WORD *)v1 + 5) + 1;
          *((_WORD *)v1 + 5) = v21;
          if ( v21 > 5 )
          {
            *((_WORD *)v1 + 5) = 0;
            v15 = *((_WORD *)v1 + 19);
            goto _080CC32E;
          }
        }
      }
      else
      {
        sub_80CC358(&dword_3004B20[10 * a1], a1);
        if ( sub_8078718((int)v2) << 24 )
        {
          DestroySprite((int)v2);
          v15 = *((_WORD *)v1 + 4) + 1;
          goto _080CC32E;
        }
      }
    }
    else
    {
      if ( v3 == 9 )
      {
        v16 = *((_WORD *)v2 + 18) + *((_WORD *)v2 + 16);
        *((_WORD *)v2 + 16) = v16;
        v17 = *((_WORD *)v2 + 19) + *((_WORD *)v2 + 17);
        *((_WORD *)v2 + 17) = v17;
        *((_WORD *)v2 + 18) = 0;
        *((_WORD *)v2 + 19) = 0;
        *((_WORD *)v2 + 23) = 10;
        *((_WORD *)v2 + 24) = v16;
        *((_WORD *)v2 + 25) = *((_WORD *)v1 + 10) - *((_WORD *)v1 + 9) * (*((_WORD *)v1 + 14) / 2 + 10);
        *((_WORD *)v2 + 26) = v17;
        *((_WORD *)v2 + 27) = (*((_WORD *)v1 + 15) / 2 + 10) * *((_WORD *)v1 + 9) + *((_WORD *)v1 + 11);
        *((_WORD *)v2 + 28) = sub_80CC338(v2);
        *((_WORD *)v1 + 7) = 5;
        v2[67] = *((_WORD *)v1 + 8);
        StartSpriteAnim((int)v2, *((_BYTE *)v1 + 14));
        sub_80786EC((int)v2);
        v15 = *((_WORD *)v1 + 4) + 1;
        goto _080CC32E;
      }
      if ( v3 <= 9 )
      {
        sub_80CC358(&dword_3004B20[10 * a1], a1);
        if ( sub_8078718((int)v2) << 24 )
        {
          *((_WORD *)v1 + 19) = 9;
          v15 = 255;
          goto _080CC32E;
        }
      }
      else
      {
        sub_80CC358(&dword_3004B20[10 * a1], a1);
        if ( sub_8078718((int)v2) << 24 )
        {
          *((_WORD *)v1 + 19) = 11;
          v15 = 255;
          goto _080CC32E;
        }
      }
    }
  }
  else
  {
    if ( v3 == 3 )
    {
      v7 = *((_WORD *)v2 + 18) + *((_WORD *)v2 + 16);
      *((_WORD *)v2 + 16) = v7;
      v8 = *((_WORD *)v2 + 19) + *((_WORD *)v2 + 17);
      *((_WORD *)v2 + 17) = v8;
      *((_WORD *)v2 + 18) = 0;
      *((_WORD *)v2 + 19) = 0;
      *((_WORD *)v2 + 23) = 10;
      *((_WORD *)v2 + 24) = v7;
      *((_WORD *)v2 + 25) = *((_WORD *)v1 + 10) - *((_WORD *)v1 + 9) * (*((_WORD *)v1 + 14) / 2 + 10);
      *((_WORD *)v2 + 26) = v8;
      *((_WORD *)v2 + 27) = *((_WORD *)v1 + 11) - *((_WORD *)v1 + 9) * (*((_WORD *)v1 + 15) / 2 + 10);
      *((_WORD *)v2 + 28) = sub_80CC338(v2);
      *((_WORD *)v1 + 7) = 2;
      v2[67] = *((_WORD *)v1 + 8);
      StartSpriteAnim((int)v2, *((_BYTE *)v1 + 14));
      sub_80786EC((int)v2);
      v15 = *((_WORD *)v1 + 4) + 1;
      goto _080CC32E;
    }
    if ( v3 > 3 )
    {
      if ( v3 == 5 )
      {
        v9 = *((_WORD *)v2 + 18) + *((_WORD *)v2 + 16);
        *((_WORD *)v2 + 16) = v9;
        v10 = *((_WORD *)v2 + 19) + *((_WORD *)v2 + 17);
        *((_WORD *)v2 + 17) = v10;
        *((_WORD *)v2 + 18) = 0;
        *((_WORD *)v2 + 19) = 0;
        *((_WORD *)v2 + 23) = 10;
        *((_WORD *)v2 + 24) = v9;
        *((_WORD *)v2 + 25) = (*((_WORD *)v1 + 14) / 2 + 10) * *((_WORD *)v1 + 9) + *((_WORD *)v1 + 10);
        *((_WORD *)v2 + 26) = v10;
        *((_WORD *)v2 + 27) = (*((_WORD *)v1 + 15) / 2 + 10) * *((_WORD *)v1 + 9) + *((_WORD *)v1 + 11);
        *((_WORD *)v2 + 28) = sub_80CC338(v2);
        v11 = *((_WORD *)v1 + 8) - 2;
        *((_WORD *)v1 + 8) = v11;
        *((_WORD *)v1 + 7) = 3;
        v2[67] = v11;
        StartSpriteAnim((int)v2, *((_BYTE *)v1 + 14));
        sub_80786EC((int)v2);
        v15 = *((_WORD *)v1 + 4) + 1;
        goto _080CC32E;
      }
      if ( v3 <= 5 )
      {
        sub_80CC358(&dword_3004B20[10 * a1], a1);
        if ( sub_8078718((int)v2) << 24 )
        {
          *((_WORD *)v1 + 19) = 5;
          v15 = 255;
          goto _080CC32E;
        }
      }
      else
      {
        sub_80CC358(&dword_3004B20[10 * a1], a1);
        if ( sub_8078718((int)v2) << 24 )
        {
          *((_WORD *)v1 + 19) = 7;
          v15 = 255;
          goto _080CC32E;
        }
      }
    }
    else
    {
      if ( v3 == 1 )
      {
        v4 = *((_WORD *)v2 + 18) + *((_WORD *)v2 + 16);
        *((_WORD *)v2 + 16) = v4;
        v5 = *((_WORD *)v2 + 19) + *((_WORD *)v2 + 17);
        *((_WORD *)v2 + 17) = v5;
        *((_WORD *)v2 + 18) = 0;
        *((_WORD *)v2 + 19) = 0;
        *((_WORD *)v2 + 23) = 10;
        *((_WORD *)v2 + 24) = v4;
        *((_WORD *)v2 + 25) = *((_WORD *)v1 + 10);
        *((_WORD *)v2 + 26) = v5;
        *((_WORD *)v2 + 27) = *((_WORD *)v1 + 11);
        *((_WORD *)v2 + 28) = sub_80CC338(v2);
        v6 = *((_WORD *)v1 + 8) + 2;
        *((_WORD *)v1 + 8) = v6;
        *((_WORD *)v1 + 7) = 1;
        v2[67] = v6;
        StartSpriteAnim((int)v2, *((_BYTE *)v1 + 14));
        sub_80786EC((int)v2);
        v15 = *((_WORD *)v1 + 4) + 1;
        goto _080CC32E;
      }
      if ( v3 > 1 )
      {
        sub_80CC358(&dword_3004B20[10 * a1], a1);
        if ( sub_8078718((int)v2) << 24 )
        {
          *((_WORD *)v1 + 19) = 3;
          v15 = 255;
          goto _080CC32E;
        }
      }
      else if ( !*((_WORD *)v1 + 4) )
      {
        sub_80CC358(&dword_3004B20[10 * a1], a1);
        if ( sub_8078718((int)v2) << 24 )
        {
          *((_WORD *)v1 + 19) = 1;
          v15 = 255;
          goto _080CC32E;
        }
      }
    }
  }
  return v23;
}
