int __fastcall sub_8046464(unsigned __int8 a1)
{
  int v1; // r10@1
  int *v2; // r1@1
  __int16 v3; // r2@1
  int v4; // r8@3
  int v5; // r5@3
  int v6; // r2@3
  int v7; // r0@4
  unsigned int *v8; // r1@4
  unsigned __int16 v9; // r0@6
  int v10; // r4@6
  int v11; // r7@6
  int v12; // r6@6
  char *v13; // r4@6
  char *v14; // r4@11
  int *v15; // r0@13
  signed int v17; // [sp+0h] [bp-24h]@1
  int v18; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v17 = 0;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( *((_WORD *)v2 + 4) )
  {
    v4 = *((_WORD *)v2 + 6);
    v5 = *((_BYTE *)v2 + 14);
    if ( battle_side_get_owner(v5) << 24 )
    {
      v7 = 25 * *(_WORD *)(2 * v5 + 0x2024A6A);
      v8 = (unsigned int *)&unk_30045C0;
    }
    else
    {
      v7 = 25 * *(_WORD *)(2 * v5 + 0x2024A6A);
      v8 = dword_3004360;
    }
    v9 = GetMonData((int)&v8[v7], 38, v6);
    v10 = (unsigned __int8)ball_number_to_ball_processing_index(v9);
    sub_80478DC(v10);
    v11 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_820AAB4[24 * v10], 32, 80);
    v12 = 17 * v11;
    v13 = &gSprites[68 * v11];
    *((_WORD *)v13 + 23) = 128;
    *((_WORD *)v13 + 24) = 0;
    *((_WORD *)v13 + 30) = v4;
    if ( v4 == 254 )
    {
      *((_WORD *)v13 + 16) = (unsigned __int8)sub_8077ABC(v5, 0);
      *((_WORD *)v13 + 17) = (unsigned __int8)sub_8077ABC(v5, 1) + 24;
      v2024C08 = v5;
      *((_WORD *)v13 + 23) = 0;
      dword_2020020[v12] = (int)sub_8047254;
    }
    else if ( v4 == 255 )
    {
      v2024C08 = v5;
      *((_WORD *)v13 + 16) = 24;
      *((_WORD *)v13 + 17) = 68;
      dword_2020020[v12] = (int)sub_8047074;
    }
    else
    {
      v2024C08 = battle_get_side_with_given_state(1);
      v17 = 1;
    }
    v14 = &gSprites[68 * v11];
    *((_WORD *)v14 + 29) = v2024C08;
    if ( v17 )
    {
      *((_WORD *)v14 + 23) = 34;
      *((_WORD *)v14 + 25) = (unsigned __int8)sub_8077ABC(v2024C08, 0);
      *((_WORD *)v14 + 27) = (unsigned __int8)sub_8077ABC(v2024C08, 1) - 16;
      *((_WORD *)v14 + 28) = -40;
      sub_80786EC(&gSprites[68 * v11]);
      *((_WORD *)v14 + 3) = v1;
      v15 = &dword_3004B20[10 * v1];
      *((_WORD *)v15 + 8) = v2024C08;
      *v15 = (int)TaskDummy;
      audio_play(61);
    }
    else
    {
      DestroyTask(v1);
    }
  }
  else
  {
    *((_WORD *)v2 + 4) = 1;
  }
  return v18;
}
