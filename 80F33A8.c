int sub_80F33A8()
{
  int i; // r6@1
  int v1; // r3@2
  char *v2; // r1@3
  int v3; // r3@7
  char *v4; // r1@8
  int v5; // r3@11
  char *v6; // r1@12
  signed int v8; // [sp+0h] [bp-68h]@1
  signed int v9; // [sp+4h] [bp-64h]@1
  signed int v10; // [sp+8h] [bp-60h]@1
  signed int v11; // [sp+Ch] [bp-5Ch]@1
  signed int v12; // [sp+10h] [bp-58h]@1
  signed int v13; // [sp+14h] [bp-54h]@1
  int v14; // [sp+18h] [bp-50h]@1
  int v15; // [sp+1Ch] [bp-4Ch]@1
  void *v16; // [sp+20h] [bp-48h]@1
  signed int v17; // [sp+24h] [bp-44h]@1
  signed int v18; // [sp+28h] [bp-40h]@1
  signed int v19; // [sp+2Ch] [bp-3Ch]@1
  int v20; // [sp+30h] [bp-38h]@1
  int v21; // [sp+34h] [bp-34h]@1
  int v22; // [sp+38h] [bp-30h]@1
  signed int v23; // [sp+3Ch] [bp-2Ch]@1
  signed int v24; // [sp+40h] [bp-28h]@1
  int v25; // [sp+44h] [bp-24h]@1
  signed int v26; // [sp+48h] [bp-20h]@1
  void *j; // [sp+4Ch] [bp-1Ch]@1
  int v28; // [sp+64h] [bp-4h]@14

  v8 = 138294912;
  v9 = 196864;
  v10 = 138295168;
  v11 = 262176;
  v12 = 149464216;
  v13 = 327936;
  v14 = 0;
  v15 = 0;
  v16 = &gPokenavConditionPokeball_Pal;
  v17 = 4;
  v18 = 149464504;
  v19 = 5;
  v20 = 0;
  v21 = 0;
  v22 = 262147;
  v23 = 138298888;
  v24 = 138298912;
  v25 = 0;
  v26 = 136194320;
  j = sub_80F3328 + 1;
  LoadSpriteSheets(&v8);
  LoadSpritePalettes((int)&v16);
  for ( i = 0; i < v20087DA - 1; i = (i + 1) & 0xFFFF )
  {
    v1 = (unsigned __int8)CreateSprite((int)&v22, 226, (unsigned int)(1310720 * i + 0x80000) >> 16);
    if ( v1 == 64 )
    {
      *(_DWORD *)(4 * i + 0x20087E4) = 0;
    }
    else
    {
      v2 = &gSprites[68 * v1];
      *(_DWORD *)(4 * i + 0x20087E4) = v2;
      *((_WORD *)v2 + 23) = i;
    }
  }
  LOWORD(v22) = 4;
  for ( j = SpriteCallbackDummy; (unsigned int)i <= 5; i = (i + 1) & 0xFFFF )
  {
    v3 = (unsigned __int8)CreateSprite((int)&v22, 230, (unsigned int)(1310720 * i + 0x80000) >> 16);
    if ( v3 == 64 )
    {
      *(_DWORD *)(4 * i + 0x20087E4) = 0;
    }
    else
    {
      v4 = &gSprites[68 * v3];
      *(_DWORD *)(4 * i + 0x20087E4) = v4;
      v4[3] &= 0x3Fu;
    }
  }
  LOWORD(v22) = 5;
  j = sub_80F3360;
  v5 = (unsigned __int8)CreateSprite((int)&v22, 222, (unsigned int)(1310720 * i + 0x80000) >> 16);
  if ( v5 == 64 )
  {
    *(_DWORD *)(4 * i + 0x20087E4) = 0;
  }
  else
  {
    v6 = &gSprites[68 * v5];
    *(_DWORD *)(4 * i + 0x20087E4) = v6;
    v6[1] = v6[1] & 0x3F | 0x40;
    *(_BYTE *)(*(_DWORD *)(4 * i + 0x20087E4) + 3) = *(_BYTE *)(*(_DWORD *)(4 * i + 0x20087E4) + 3) & 0x3F | 0x80;
  }
  return v28;
}
