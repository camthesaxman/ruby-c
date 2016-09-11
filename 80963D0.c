int __fastcall sub_80963D0(char a1)
{
  char v1; // r5@1
  unsigned __int8 v2; // r0@1
  int v3; // r3@1
  unsigned int v4; // r4@1
  int v5; // r3@2
  unsigned __int8 v6; // r0@2
  int v7; // r3@2
  char *v8; // r1@2
  int v9; // r5@2
  int v10; // r1@5
  unsigned int v11; // r4@7
  int v12; // ST00_4@8
  int v13; // r2@8
  int v14; // r1@8
  int v15; // r0@8
  signed __int16 v16; // r1@9
  int v17; // r0@12
  char v19; // [sp+4h] [bp-48h]@1
  __int16 v20; // [sp+6h] [bp-46h]@1
  void **v21; // [sp+Ch] [bp-40h]@1
  __int16 v22; // [sp+1Ch] [bp-30h]@1
  __int16 v23; // [sp+1Eh] [bp-2Eh]@1
  int *v24; // [sp+20h] [bp-2Ch]@1
  void **v25; // [sp+24h] [bp-28h]@1
  int v26; // [sp+28h] [bp-24h]@1
  void **v27; // [sp+2Ch] [bp-20h]@1
  void (*v28)(); // [sp+30h] [bp-1Ch]@1
  int v29; // [sp+34h] [bp-18h]@1
  int v30; // [sp+38h] [bp-14h]@1
  int v31; // [sp+48h] [bp-4h]@13

  v1 = a1;
  v29 = -1073741824;
  v30 = 4096;
  v22 = 0;
  v23 = 0;
  v24 = &v29;
  v25 = &gDummySpriteAnimTable;
  v26 = 0;
  v27 = &gDummySpriteAffineAnimTable;
  v28 = SpriteCallbackDummy;
  memcpy(&v19, &v22, 24);
  *(_BYTE *)(v2038478 + 572) = v1;
  *(_WORD *)&v19 = *(_WORD *)(v2038478 + 576);
  v20 = *(_WORD *)(v2038478 + 578);
  v2 = CreateSprite((int)&v19, 160, 96);
  v3 = v2038478;
  *v2038478 = &gSprites[68 * v2];
  BYTE1(v29) = BYTE1(v29) & 0x3F | 0x80;
  BYTE3(v29) = BYTE3(v29) & 0x3F | 0x40;
  *(_WORD *)&v19 = *(_WORD *)(v3 + 576) + 1;
  v21 = &gSpriteAnimTable_83B604C;
  v4 = 0;
  do
  {
    v5 = *(_BYTE *)(v2038478 + 574);
    v6 = CreateSprite((int)&v19, 124, 80);
    v7 = 4 * v4;
    v8 = &gSprites[68 * v6];
    *(_DWORD *)(v2038478 + 4 + 4 * v4) = v8;
    v9 = 0;
    if ( v4 & 2 )
    {
      *((_WORD *)v8 + 16) = 196;
      v9 = 2;
    }
    if ( v4 & 1 )
    {
      v10 = v2038478 + 4 + v7;
      *(_WORD *)(*(_DWORD *)v10 + 34) = 112;
      *(_BYTE *)(*(_DWORD *)v10 + 3) &= 0x3Fu;
      v9 = (v9 + 1) & 0xFFFF;
    }
    StartSpriteAnim(*(_DWORD *)(v2038478 + 4 + v7), v9);
    v4 = (v4 + 1) & 0xFFFF;
  }
  while ( v4 <= 3 );
  v11 = 0;
  do
  {
    v12 = *(_BYTE *)(v2038478 + 574);
    v13 = sub_809A9A0((4718592 * v11 + 8126464) >> 16, 88, (unsigned __int8)v11, 0);
    v14 = 4 * v11;
    v15 = v2038478 + 32 + 4 * v11;
    *(_DWORD *)v15 = v13;
    if ( v13 )
    {
      v16 = 1;
      if ( !v11 )
        v16 = -1;
      *(_WORD *)(v13 + 46) = v16;
      v14 = *(_DWORD *)v15;
      *(_DWORD *)(*(_DWORD *)v15 + 28) = sub_8096784;
    }
    v17 = (v11 + 1) << 16;
    v11 = (v11 + 1) & 0xFFFF;
  }
  while ( v11 <= 1 );
  sub_809665C(v17, v14);
  return v31;
}
