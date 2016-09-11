int sub_8124118()
{
  unsigned int v0; // r9@1
  unsigned __int8 v1; // r0@3
  char *v2; // r1@4
  char *v3; // r0@5
  char *v4; // r0@5
  unsigned __int8 v5; // r0@6
  char *v6; // r1@7
  char *v7; // r0@8
  char *v8; // r0@8
  unsigned int v9; // r4@9
  char *v10; // r0@10
  int v11; // r6@12
  char *v12; // r4@13
  __int16 v13; // r5@14
  char *v14; // r0@15
  char v15; // r1@15
  char *v16; // r0@16
  char v17; // r1@16
  char v19[4]; // [sp+8h] [bp-3Ch]@1
  char v20[4]; // [sp+Ch] [bp-38h]@1
  char v21[8]; // [sp+10h] [bp-34h]@1
  char v22[8]; // [sp+12h] [bp-32h]@12
  char v23[4]; // [sp+18h] [bp-2Ch]@1
  int v24; // [sp+1Ch] [bp-28h]@1
  int v25; // [sp+20h] [bp-24h]@1
  int v26; // [sp+40h] [bp-4h]@23

  memcpy(v19, (const char *)&gCableCarPlayerGraphicsIDs, 2);
  v0 = (unsigned __int16)Random();
  memcpy(v20, (const char *)&gMtChimneyHikerGraphicsIDs, 4);
  memcpy(v21, (const char *)&gMtChimneyHikerCoords, 8);
  memcpy(v23, (const char *)&gMtChimneyHikerMovementDelayTable, 4);
  v24 = 135413433;
  v25 = 135413573;
  if ( v202E8CC && v202E8CC == 1 )
  {
    sub_8124F08(v2039274 + 252, 33656904, 24, 26);
    v5 = AddPseudoFieldObject(v19[v2024EAC], (int)sub_8123D98, 128, 39);
    if ( v5 != 64 )
    {
      v6 = &gSprites[68 * v5];
      v6[5] = v6[5] & 0xF3 | 8;
      *((_WORD *)v6 + 18) = 8;
      *((_WORD *)v6 + 19) = 16;
      *((_WORD *)v6 + 23) = 128;
      *((_WORD *)v6 + 24) = 39;
    }
    v7 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_8401D40, 104, 9)];
    *((_WORD *)v7 + 19) = 32;
    *((_WORD *)v7 + 18) = 32;
    *((_WORD *)v7 + 23) = 104;
    *((_WORD *)v7 + 24) = 9;
    v8 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_8401D58, 128, 65)];
    *((_WORD *)v8 + 18) = 8;
    *((_WORD *)v8 + 19) = 4;
    *((_WORD *)v8 + 23) = 128;
    *((_WORD *)v8 + 24) = 65;
    *(_BYTE *)(v2039274 + 2) = 2;
    *(_WORD *)(v2039274 + 4) = 265;
    sub_807C9B4(7);
  }
  else
  {
    v1 = AddPseudoFieldObject(v19[v2024EAC], (int)sub_8123D98, 200, 73);
    if ( v1 != 64 )
    {
      v2 = &gSprites[68 * v1];
      v2[5] = v2[5] & 0xF3 | 8;
      *((_WORD *)v2 + 18) = 8;
      *((_WORD *)v2 + 19) = 16;
      *((_WORD *)v2 + 23) = 200;
      *((_WORD *)v2 + 24) = 73;
    }
    v3 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_8401D40, 176, 43)];
    *((_WORD *)v3 + 19) = 32;
    *((_WORD *)v3 + 18) = 32;
    *((_WORD *)v3 + 23) = 176;
    *((_WORD *)v3 + 24) = 43;
    v4 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_8401D58, 200, 99)];
    *((_WORD *)v4 + 18) = 8;
    *((_WORD *)v4 + 19) = 4;
    *((_WORD *)v4 + 23) = 200;
    *((_WORD *)v4 + 24) = 99;
    *(_BYTE *)(v2039274 + 2) = 7;
    *(_WORD *)(v2039274 + 4) = 350;
    sub_807C9B4(2);
  }
  v9 = 0;
  do
  {
    v10 = &gSprites[68
                  * (unsigned __int8)CreateSprite(
                                       (int)&gSpriteTemplate_8401D70,
                                       ((v9 << 20) + 6291456) >> 16,
                                       ((v9 << 19) - 0x80000) >> 16)];
    *((_WORD *)v10 + 18) = 8;
    *((_WORD *)v10 + 19) = 8;
    v9 = (v9 + 1) & 0xFF;
  }
  while ( v9 <= 8 );
  if ( !(v0 & 0x3F) )
  {
    v11 = (unsigned __int8)AddPseudoFieldObject(
                             v20[v0 % 3 & 0xFFFF],
                             *(&v24 + v202E8CC),
                             *(_WORD *)&v21[4 * v202E8CC],
                             *(_WORD *)&v22[4 * v202E8CC]);
    if ( v11 != 64 )
    {
      v12 = &gSprites[68 * v11];
      v12[5] = v12[5] & 0xF3 | 8;
      *((_WORD *)v12 + 18) = -v12[40];
      *((_WORD *)v12 + 19) = -v12[41];
      if ( v202E8CC )
      {
        v13 = v0 & 1;
        if ( v0 & 1 )
        {
          v14 = &gSprites[68 * v11];
          v15 = 7;
          goto _08124428;
        }
        v16 = &gSprites[68 * v11];
        v17 = 6;
      }
      else
      {
        v13 = v0 & 1;
        if ( v0 & 1 )
        {
          v14 = &gSprites[68 * v11];
          v15 = 6;
_08124428:
          StartSpriteAnim((int)v14, v15);
          *((_WORD *)v12 + 24) = 1;
          *((_WORD *)v12 + 17) += 2;
_08124440:
          *(_WORD *)&gSprites[68 * v11 + 50] = (unsigned __int8)v23[v0 & 3];
          return v26;
        }
        v16 = &gSprites[68 * v11];
        v17 = 7;
      }
      StartSpriteAnim((int)v16, v17);
      *((_WORD *)v12 + 24) = v13;
      goto _08124440;
    }
  }
  return v26;
}
