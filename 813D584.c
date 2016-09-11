int __fastcall sub_813D584(__int16 a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5, char a6)
{
  __int16 v6; // r10@1
  int v7; // r7@1
  int v8; // r5@1
  char *v9; // r4@1
  int *v10; // r0@2
  int (__fastcall *v11)(int); // r1@2
  unsigned int v12; // r4@4
  char *v13; // r0@4
  unsigned int v14; // r4@4
  char *v15; // r5@4
  __int16 v17; // [sp+4h] [bp-30h]@1
  __int16 v18; // [sp+8h] [bp-2Ch]@1
  __int16 v19; // [sp+Ch] [bp-28h]@1

  v18 = a3;
  v19 = a4;
  v6 = a1;
  v17 = a2;
  v7 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_840AE20, a1, a2);
  v8 = 17 * v7;
  v9 = &gSprites[68 * v7];
  *((_WORD *)v9 + 23) = 0;
  *((_WORD *)v9 + 30) = 0;
  *((_WORD *)v9 + 24) = v19;
  *((_WORD *)v9 + 25) = v18;
  *((_WORD *)v9 + 26) = v18;
  *((_WORD *)v9 + 28) = a5;
  *((_WORD *)v9 + 29) = v18;
  v9[1] |= 3u;
  v9[3] = v9[3] & 0xC1 | 2 * (v19 & 0x1F);
  CalcCenterToCornerVec((int)v9, 0, 2, 2);
  StartSpriteAnim((int)v9, 2);
  if ( a6 )
  {
    v10 = &dword_2020020[v8];
    v11 = sub_813D504;
  }
  else
  {
    v10 = &dword_2020020[v8];
    v11 = sub_813D208;
  }
  *v10 = (int)v11;
  v12 = 68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_840AE20, v6, v17);
  v13 = &gSprites[v12];
  *((_WORD *)v13 + 30) = v7;
  *((_WORD *)v13 + 24) = v19 + 1;
  v13[1] = gSprites[v12 + 1] | 3;
  v13[3] = gSprites[v12 + 3] & 0xC1 | 2 * ((v19 + 1) & 0x1F);
  CalcCenterToCornerVec((int)&gSprites[v12], 0, 2, 2);
  dword_2020020[v12 / 4] = (int)sub_813D158;
  v14 = 68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_840AE20, v6, v17);
  v15 = &gSprites[v14];
  *((_WORD *)v15 + 30) = v7;
  *((_WORD *)v15 + 24) = v19 + 2;
  StartSpriteAnim((int)&gSprites[v14], 1);
  v15[1] |= 3u;
  v15[3] = v15[3] & 0xC1 | 2 * ((v19 + 2) & 0x1F);
  CalcCenterToCornerVec((int)&gSprites[v14], 0, 2, 2);
  dword_2020020[v14 / 4] = (int)sub_813D158;
  SetOamMatrix((unsigned __int8)v19, v18 + 32, 0, 0, v18 + 32);
  SetOamMatrix((unsigned __int8)(v19 + 1), v18 + 32, 0, 0, v18 + 32);
  SetOamMatrix((unsigned __int8)(v19 + 2), v18 + 32, 0, 0, 2 * (v18 + 32));
  return v7;
}
