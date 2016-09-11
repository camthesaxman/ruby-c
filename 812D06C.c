int __fastcall sub_812D06C(unsigned __int8 a1)
{
  int v1; // r2@1
  int *v2; // r6@1
  unsigned int v3; // r0@1
  __int16 v4; // r2@3
  __int16 v5; // r0@4
  int v6; // r4@6
  int v7; // r4@6
  char v8; // r0@6
  int v9; // r0@11
  signed int v10; // r1@12
  unsigned int v11; // r5@23
  int v12; // r7@23
  char *v13; // r3@23
  unsigned int v14; // r4@24
  int v15; // r0@25
  int v16; // ST00_4@25
  char *v17; // ST04_4@25
  int v19; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 5 )
  {
    switch ( v3 )
    {
      case 0u:
        v4 = *((_WORD *)v2 + 6);
        if ( *((_WORD *)v2 + 5) & 1 )
          v5 = v4 - *((_WORD *)v2 + 8);
        else
          v5 = v4 + *((_WORD *)v2 + 8);
        v6 = *((_BYTE *)v2 + 10);
        v7 = (unsigned __int8)CreateSprite(
                                (int)&gBattleAnimSpriteTemplate_83D7220,
                                v5,
                                *((_WORD *)v2 + 9) + *((_WORD *)v2 + 7));
        v8 = sub_8076F98(0xC0u);
        audio_play_and_stuff(0xBAu, v8);
        if ( v7 != 64 )
        {
          gSprites[68 * v7 + 63] = gSprites[68 * v7 + 63] & 0xFE | *((_WORD *)v2 + 5) & 1;
          dword_2020020[17 * v7] = (int)SpriteCallbackDummy;
        }
        if ( *((_WORD *)v2 + 5) & 1 )
        {
          *((_WORD *)v2 + 8) -= 6;
          *((_WORD *)v2 + 9) -= 6;
        }
        sub_80798F4((int)v2, *((_BYTE *)v2 + 38));
        ++*((_WORD *)v2 + 5);
        *((_WORD *)v2 + 4) = 1;
        break;
      case 1u:
        v9 = (unsigned __int8)sub_807992C((int)v2);
        if ( !v9 )
        {
          v10 = *((_WORD *)v2 + 5);
          if ( v10 == 6 )
          {
            *((_WORD *)v2 + 10) = 8;
            *((_WORD *)v2 + 4) = 3;
          }
          else
          {
            if ( v10 <= 2 )
              LOWORD(v9) = 10;
            *((_WORD *)v2 + 10) = v9;
            *((_WORD *)v2 + 4) = 2;
          }
        }
        break;
      case 2u:
        if ( *((_WORD *)v2 + 10) )
          --*((_WORD *)v2 + 10);
        else
          *((_WORD *)v2 + 4) = 0;
        break;
      case 3u:
        if ( *((_WORD *)v2 + 10) )
          --*((_WORD *)v2 + 10);
        else
          *((_WORD *)v2 + 4) = 4;
        break;
      case 4u:
        v11 = 0;
        v12 = 0;
        v13 = gSprites;
        do
        {
          v14 = 68 * v11;
          if ( *(_UNKNOWN **)&v13[68 * v11 + 20] == &gBattleAnimSpriteTemplate_83D7220 )
          {
            v15 = (int)&v13[v14];
            *(_WORD *)(v15 + 0x2E) = v1;
            *(_WORD *)(v15 + 0x30) = 6;
            v16 = v1;
            v17 = v13;
            StartSpriteAnim((int)&v13[v14], 2);
            dword_2020020[v14 / 4] = (int)sub_812D254;
            v12 = (v12 + 1) & 0xFFFF;
            v1 = v16;
            v13 = v17;
            if ( v12 == 6 )
              break;
          }
          v11 = (v11 + 1) & 0xFFFF;
        }
        while ( v11 <= 0x3F );
        *((_WORD *)v2 + 10) = v12;
        *((_WORD *)v2 + 4) = 5;
        break;
      case 5u:
        if ( !*((_WORD *)v2 + 10) )
          move_anim_task_del(v1);
        break;
      default:
        return v19;
    }
  }
  return v19;
}
