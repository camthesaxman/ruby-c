int __fastcall sub_8140DC4(unsigned __int8 a1)
{
  int v1; // r7@1
  int v2; // r2@1
  int *v3; // r3@1
  int v4; // r0@3
  int v5; // ST0C_4@3
  unsigned int v6; // r6@3
  int v7; // r10@3
  char *v8; // r9@3
  unsigned int v9; // r5@4
  char *v10; // r4@4
  int *v11; // r1@5
  __int16 v12; // r0@5
  __int16 v14; // [sp+0h] [bp-34h]@3
  __int16 v15; // [sp+4h] [bp-30h]@3
  char v16; // [sp+8h] [bp-2Ch]@3
  int v17; // [sp+10h] [bp-24h]@3
  int v18; // [sp+30h] [bp-4h]@0

  v1 = a1;
  v2 = 4 * a1;
  v3 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v3 + 11) )
  {
    --*((_WORD *)v3 + 11);
  }
  else
  {
    v4 = *((_WORD *)v3 + 19) & 0xFF;
    v14 = *((_BYTE *)v3 + 10);
    v15 = *((_BYTE *)v3 + 12);
    v16 = *((_BYTE *)v3 + 14);
    v5 = *((_BYTE *)v3 + 16);
    v6 = 0;
    v17 = v2;
    v7 = 24 * v4;
    v8 = &gUnknown_0840B378[v4];
    do
    {
      v9 = 68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_840B3B4[v7], v14, v15);
      v10 = &gSprites[v9];
      StartSpriteAnim((int)&gSprites[v9], *v8);
      dword_2020020[v9 / 4] = (int)sub_8140ECC;
      v10[5] = v10[5] & 0xF3 | 4 * (v16 & 3);
      *((_WORD *)v10 + 23) = 32 * v6;
      *((_WORD *)v10 + 27) = 8;
      *((_WORD *)v10 + 28) = 2;
      *((_WORD *)v10 + 29) = 2;
      v6 = (v6 + 1) & 0xFF;
    }
    while ( v6 <= 7 );
    v11 = &dword_3004B20[2 * (v17 + v1)];
    *((_WORD *)v11 + 11) = 8;
    v12 = *((_WORD *)v11 + 4) + 1;
    *((_WORD *)v11 + 4) = v12;
    if ( v12 == 2 )
    {
      *(_WORD *)&gSprites[v9 + 60] = 1;
      DestroyTask(v1);
    }
  }
  return v18;
}
