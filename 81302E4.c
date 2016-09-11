int __fastcall sub_81302E4(unsigned __int8 a1)
{
  __int16 v1; // r7@1
  int *v2; // r5@1
  int v3; // r1@1
  __int16 v4; // r0@4
  int v5; // ST00_4@5
  int v6; // ST04_4@5
  unsigned int v7; // r6@5
  int v8; // r3@6
  int v9; // r2@9
  char *v10; // r1@9
  int v11; // r0@9
  char *v12; // r1@10
  char *v13; // r1@12
  int v14; // r0@12
  char *v15; // r0@15
  __int16 v16; // r2@17
  __int16 v18; // [sp+10h] [bp-1Ch]@6
  __int16 v19; // [sp+12h] [bp-1Ah]@6
  int v20; // [sp+28h] [bp-4h]@22

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( *((_WORD *)v2 + 4) )
  {
    if ( v3 == 1 && !*((_WORD *)v2 + 14) )
      move_anim_task_del(a1);
  }
  else
  {
    v4 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v4;
    if ( v4 > 3 )
    {
      *((_WORD *)v2 + 5) = v3;
      v5 = *((_BYTE *)v2 + 18);
      v6 = *((_BYTE *)v2 + 12);
      sub_8130424(*((_WORD *)v2 + 15), *((_WORD *)v2 + 16), *((_WORD *)v2 + 17), *((_WORD *)v2 + 18));
      v7 = 0;
      do
      {
        v8 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_840294C, v18, v19);
        if ( v8 != 64 )
        {
          if ( *((_WORD *)v2 + 11) )
          {
            if ( v7 )
            {
              v9 = 16 * v8;
              v13 = &gSprites[68 * v8];
              *((_WORD *)v13 + 18) = *((_WORD *)v2 + 10);
              v14 = -*((_WORD *)v2 + 10);
            }
            else
            {
              v9 = 16 * v8;
              v13 = &gSprites[68 * v8];
              *((_WORD *)v13 + 18) = -*((_WORD *)v2 + 10);
              LOWORD(v14) = *((_WORD *)v2 + 10);
            }
            *((_WORD *)v13 + 19) = v14;
          }
          else if ( v7 )
          {
            v9 = 16 * v8;
            v12 = &gSprites[68 * v8];
            *((_WORD *)v12 + 19) = *((_WORD *)v2 + 10);
            *((_WORD *)v12 + 18) = *((_WORD *)v2 + 10);
          }
          else
          {
            v9 = 16 * v8;
            v10 = &gSprites[68 * v8];
            v11 = -*((_WORD *)v2 + 10);
            *((_WORD *)v10 + 19) = v11;
            *((_WORD *)v10 + 18) = v11;
          }
          v15 = &gSprites[4 * (v9 + v8)];
          *((_WORD *)v15 + 23) = 0;
          *((_WORD *)v15 + 24) = v1;
          *((_WORD *)v15 + 25) = 10;
          ++*((_WORD *)v2 + 14);
        }
        v7 = (v7 + 1) & 0xFF;
      }
      while ( v7 <= 1 );
      v16 = *((_WORD *)v2 + 6);
      if ( *((_WORD *)v2 + 6) == *((_WORD *)v2 + 9) )
        ++*((_WORD *)v2 + 4);
      *((_WORD *)v2 + 6) = v16 + 1;
    }
  }
  return v20;
}
