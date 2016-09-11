int __fastcall sub_8140B3C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r7@1
  int *v2; // r0@1
  int v3; // r1@1
  int v4; // ST0C_4@1
  unsigned int v5; // r6@1
  int v6; // r10@1
  char *v7; // r9@1
  unsigned int v8; // r5@2
  char *v9; // r4@2
  __int16 v11; // [sp+0h] [bp-30h]@1
  __int16 v12; // [sp+4h] [bp-2Ch]@1
  char v13; // [sp+8h] [bp-28h]@1
  int v14; // [sp+2Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 19) & 0xFF;
  v11 = *((_BYTE *)v2 + 10);
  v12 = *((_BYTE *)v2 + 12);
  v13 = *((_BYTE *)v2 + 14);
  v4 = *((_BYTE *)v2 + 16);
  v5 = 0;
  v6 = 24 * v3;
  v7 = &gUnknown_0840B378[v3];
  do
  {
    v8 = 68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_840B3B4[v6], v11, v12);
    v9 = &gSprites[v8];
    StartSpriteAnim((int)&gSprites[v8], *v7);
    dword_2020020[v8 / 4] = (int)sub_8140ECC;
    v9[5] = v9[5] & 0xF3 | 4 * (v13 & 3);
    *((_WORD *)v9 + 23) = 32 * v5;
    *((_WORD *)v9 + 27) = 10;
    *((_WORD *)v9 + 28) = 1;
    *((_WORD *)v9 + 29) = 2;
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 7 );
  *(_WORD *)&gSprites[v8 + 60] = 1;
  DestroyTask(v1);
  return v14;
}
