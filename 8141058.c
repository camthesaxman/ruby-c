int __fastcall sub_8141058(unsigned __int8 a1)
{
  int *v1; // r0@1
  int v2; // r1@1
  int v3; // ST10_4@1
  int v4; // r8@1
  char *v5; // r10@1
  unsigned int v6; // r7@2
  unsigned __int8 v7; // r9@2
  int v8; // r6@3
  char *v9; // r5@3
  signed __int16 v10; // r0@4
  unsigned __int8 v12; // [sp+0h] [bp-38h]@1
  __int16 v13; // [sp+4h] [bp-34h]@1
  __int16 v14; // [sp+8h] [bp-30h]@1
  char v15; // [sp+Ch] [bp-2Ch]@1
  int v16; // [sp+14h] [bp-24h]@1
  int v17; // [sp+34h] [bp-4h]@0

  v12 = a1;
  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 19) & 0xFF;
  v13 = *((_BYTE *)v1 + 10);
  v14 = *((_BYTE *)v1 + 12);
  v15 = *((_BYTE *)v1 + 14);
  v3 = *((_BYTE *)v1 + 16);
  v4 = 0;
  v16 = 24 * v2;
  v5 = &gUnknown_0840B378[v2];
  do
  {
    v6 = 0;
    v7 = v4 + 1;
    do
    {
      v8 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_840B3B4[v16], v13, v14);
      v9 = &gSprites[68 * v8];
      StartSpriteAnim((int)v9, *v5);
      dword_2020020[17 * v8] = (int)sub_8140ECC;
      v9[5] = v9[5] & 0xF3 | 4 * (v15 & 3);
      *((_WORD *)v9 + 23) = 32 * v6;
      *((_WORD *)v9 + 27) = 8;
      if ( v4 )
      {
        *((_WORD *)v9 + 28) = 1;
        v10 = 2;
      }
      else
      {
        *((_WORD *)v9 + 28) = 2;
        v10 = 1;
      }
      *((_WORD *)v9 + 29) = v10;
      v6 = (v6 + 1) & 0xFF;
    }
    while ( v6 <= 7 );
    v4 = (unsigned __int8)(v4 + 1);
  }
  while ( v7 <= 1u );
  *(_WORD *)&gSprites[68 * v8 + 60] = 1;
  DestroyTask(v12);
  return v17;
}
