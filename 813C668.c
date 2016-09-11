int __fastcall sub_813C668(unsigned __int8 a1)
{
  int v1; // r7@1
  int v2; // r0@2
  char *v3; // r0@2
  int v4; // r0@4
  char *v5; // r0@4
  unsigned __int8 v6; // r0@6
  int *v7; // r1@8
  int *v8; // r1@10
  int *v9; // r1@16
  unsigned __int8 v10; // r0@18
  unsigned __int8 v11; // r0@20
  int *v12; // r1@22
  unsigned __int8 v13; // r0@24
  unsigned __int8 v14; // r0@26
  int *v15; // r1@28
  int *v16; // r2@30
  char *v17; // r0@30
  int v19; // [sp+18h] [bp-4h]@0

  v1 = a1;
  if ( dword_3005ED0 == 80 )
  {
    v2 = 17 * (unsigned __int8)sub_813CE88(331, 240, 160, 5);
    dword_2020020[v2] = (int)sub_813DB9C;
    v3 = &gSprites[v2 * 4];
    *((_WORD *)v3 + 24) = 1;
    *((_WORD *)v3 + 25) = 0;
  }
  if ( dword_3005ED0 == 152 )
  {
    v4 = 17 * (unsigned __int8)sub_813CE88(361, 0, 160, 4);
    dword_2020020[v4] = (int)sub_813DB9C;
    v5 = &gSprites[v4 * 4];
    *((_WORD *)v5 + 24) = 2;
    *((_WORD *)v5 + 25) = 1;
  }
  if ( dword_3005ED0 == 219 )
  {
    sub_813D084(0);
    v6 = sub_813CFA8(v2039318, 272, 96, 6);
    dword_2020020[17 * v6] = (int)sub_813DE70;
    HIWORD(dword_3004B20[10 * v1 + 2]) = v6;
  }
  if ( dword_3005ED0 == 304 )
  {
    v7 = &dword_3004B20[10 * v1];
    LOWORD(dword_3004B20[10 * *((_WORD *)v7 + 19) + 2]) = 4;
    *(_WORD *)&gSprites[68 * *((_WORD *)v7 + 5) + 46] = 2;
  }
  if ( dword_3005ED0 == 384 )
  {
    v8 = &dword_3004B20[10 * v1];
    LOWORD(dword_3004B20[10 * *((_WORD *)v8 + 19) + 2]) = 0;
    *(_WORD *)&gSprites[68 * *((_WORD *)v8 + 5) + 46] = 4;
  }
  if ( dword_3005ED0 == 400 )
    BeginNormalPaletteFade(16711680, 0, 0x10u, 0, 32511);
  if ( dword_3005ED0 == 432 )
    *(_WORD *)&gSprites[68 * HIWORD(dword_3004B20[10 * v1 + 2]) + 46] = 5;
  if ( dword_3005ED0 == 462 )
  {
    v9 = &dword_3004B20[10 * v1];
    *(_WORD *)&gSprites[68 * *((_WORD *)v9 + 5) + 46] = 6;
    LOWORD(dword_3004B20[10 * *((_WORD *)v9 + 19) + 2]) = 2;
  }
  if ( dword_3005ED0 == 463 )
  {
    sub_813D084(1);
    v10 = sub_813CE88(331, 208, 8, 5);
    dword_2020020[17 * v10] = (int)sub_813E10C;
    LOWORD(dword_3004B20[10 * v1 + 3]) = v10;
    sub_813E7C0(v10);
  }
  if ( dword_3005ED0 == 539 )
  {
    v11 = sub_813CE88(361, 248, 16, 4);
    dword_2020020[17 * v11] = (int)sub_813E10C;
    HIWORD(dword_3004B20[10 * v1 + 3]) = v11;
    sub_813E930(v11);
  }
  if ( dword_3005ED0 == 623 )
  {
    v12 = &dword_3004B20[10 * v1];
    *(_WORD *)&gSprites[68 * *((_WORD *)v12 + 6) + 46] = 2;
    *(_WORD *)&gSprites[68 * *((_WORD *)v12 + 7) + 46] = 2;
    LOWORD(dword_3004B20[10 * *((_WORD *)v12 + 19) + 2]) = 3;
  }
  if ( dword_3005ED0 == 624 )
  {
    sub_813D084(0);
    v13 = sub_813CE88(283, 32, 152, 0);
    dword_2020020[17 * v13] = (int)sub_813E210;
    LOWORD(dword_3004B20[10 * v1 + 4]) = v13;
    sub_813EDBC(v13);
  }
  if ( dword_3005ED0 == 700 )
  {
    v14 = sub_813CE88(280, -8, 144, 1);
    dword_2020020[17 * v14] = (int)sub_813E210;
    HIWORD(dword_3004B20[10 * v1 + 4]) = v14;
    sub_813EB4C(v14);
  }
  if ( dword_3005ED0 == 776 )
  {
    v203931A = 1;
    v15 = &dword_3004B20[10 * v1];
    *(_WORD *)&gSprites[68 * *((_WORD *)v15 + 8) + 46] = 2;
    *(_WORD *)&gSprites[68 * *((_WORD *)v15 + 9) + 46] = 2;
    LOWORD(dword_3004B20[10 * *((_WORD *)v15 + 19) + 2]) = 0;
  }
  if ( dword_3005ED0 == 781 )
  {
    sub_813D084(2);
    v16 = &dword_3004B20[10 * v1];
    *(_WORD *)&gSprites[68 * *((_WORD *)v16 + 6) + 46] = 3;
    *(_WORD *)&gSprites[68 * *((_WORD *)v16 + 7) + 46] = 3;
    *(_WORD *)&gSprites[68 * *((_WORD *)v16 + 8) + 46] = 3;
    *(_WORD *)&gSprites[68 * *((_WORD *)v16 + 9) + 46] = 3;
    v17 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_840B1F4, 120, 80)];
    v17[62] |= 4u;
  }
  if ( dword_3005ED0 == 800 )
    audio_play(0x67u);
  if ( dword_3005ED0 == 850 )
    BeginNormalPaletteFade(-1, 4, 0, 0x10u, -1);
  if ( dword_3005ED0 == 946 )
    dword_3004B20[10 * v1] = (int)sub_813CADC;
  return v19;
}
