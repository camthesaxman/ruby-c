int __fastcall sub_814191C(unsigned __int8 a1)
{
  int v1; // r7@1
  int *v2; // r4@1
  int v3; // r0@4
  unsigned __int8 v4; // r8@5
  __int16 v5; // r5@5
  __int16 v6; // r2@5
  signed int v7; // r0@5
  int v8; // r5@6
  char *v9; // r2@9
  __int16 v10; // r3@9
  __int16 v11; // r1@9
  int *v12; // r6@12
  int v13; // r4@13
  char *v14; // r1@14
  int v15; // r0@15
  char v16; // r1@15
  int *v17; // r2@18
  __int16 v18; // r1@18
  int v20; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v2 + 17) > 59 )
  {
    if ( !v201784A )
    {
      v3 = *((_WORD *)v2 + 14);
      *((_WORD *)v2 + 14) = v3 + 1;
      if ( !((v3 << 16) & 0x30000) )
      {
        v4 = *((_BYTE *)v2 + 8);
        v5 = (unsigned __int8)sub_8077ABC(*((_BYTE *)v2 + 8), 0);
        v6 = (unsigned __int8)sub_8077ABC(v4, 1u);
        v7 = *((_WORD *)v2 + 15);
        if ( *((_WORD *)v2 + 15) )
        {
          if ( v7 < 0 || v7 > 3 )
          {
            v8 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_8402500, v5, v6);
            v9 = &gSprites[68 * v8];
            v10 = *((_WORD *)v9 + 2);
            v11 = (v10 & 0x3FF) + 5;
          }
          else
          {
            v8 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_8402500, v5, v6);
            v9 = &gSprites[68 * v8];
            v10 = *((_WORD *)v9 + 2);
            v11 = (v10 & 0x3FF) + 4;
          }
          *((_WORD *)v9 + 2) = v10 & 0xFC00 | v11 & 0x3FF;
        }
        else
        {
          v8 = CreateSprite((int)&gBattleAnimSpriteTemplate_84024E8, v5, v6) & 0xFF;
        }
        v12 = &dword_3004B20[10 * v1];
        if ( *((_WORD *)v12 + 5) )
        {
          v13 = 16 * v8;
          dword_2020020[17 * v8] = (int)sub_8141B74;
          v14 = &gSprites[68 * v8];
          *((_WORD *)v14 + 18) = -32;
          *((_WORD *)v14 + 19) = 32;
          v14[62] |= 4u;
          if ( !*((_WORD *)v12 + 15) )
          {
            v15 = battle_side_get_owner(v4);
            v16 = 63;
            if ( !(v15 << 24) )
              v16 = -64;
            audio_play_and_stuff(0x66u, v16);
          }
        }
        else
        {
          dword_2020020[17 * v8] = (int)sub_8141B20;
          v13 = 16 * v8;
        }
        *(_WORD *)&gSprites[4 * (v13 + v8) + 46] = v1;
        v17 = &dword_3004B20[10 * v1];
        v18 = *((_WORD *)v17 + 15) + 1;
        *((_WORD *)v17 + 15) = v18;
        ++*((_WORD *)v17 + 16);
        if ( v18 == 5 )
          *v17 = (int)sub_8141AD8;
      }
    }
  }
  else
  {
    ++*((_WORD *)v2 + 17);
  }
  return v20;
}
