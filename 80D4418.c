int __fastcall sub_80D4418(int a1, unsigned __int8 a2)
{
  int v2; // r7@1
  int v3; // r8@1
  int v4; // r6@1
  unsigned int v5; // r5@1
  int v6; // ST08_4@1
  int v7; // r1@1
  __int16 v8; // r10@3
  __int16 v9; // r9@3
  int v10; // r8@3
  int v11; // r2@4
  signed int v12; // r6@4
  char *v13; // r5@5
  signed int v14; // r0@8
  __int16 v16; // [sp+0h] [bp-34h]@1
  int v17; // [sp+4h] [bp-30h]@3
  __int16 v18; // [sp+Ch] [bp-28h]@3
  __int16 v19; // [sp+10h] [bp-24h]@3
  int v20; // [sp+30h] [bp-4h]@0

  v2 = a1;
  v16 = a2;
  v3 = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  v4 = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  v5 = 172;
  v6 = (sub_8079E90(v202F7C8) - 1) & 0xFF;
  v7 = (4 - *(_WORD *)(v2 + 10)) & 0xFFFF;
  if ( (4 - *(_WORD *)(v2 + 10)) << 16 <= 0 )
    LOWORD(v7) = 1;
  LOWORD(v17) = 0;
  v8 = v3;
  v9 = v4;
  v18 = 16 * v3;
  v19 = 16 * v4;
  v10 = (signed __int16)v7;
  do
  {
    v11 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83D9378, v8, v9);
    v12 = v5 << 16;
    if ( v11 != 64 )
    {
      v13 = &gSprites[68 * v11];
      *((_WORD *)v13 + 24) = v17;
      *((_WORD *)v13 + 25) = v18;
      *((_WORD *)v13 + 26) = v19;
      *((_WORD *)v13 + 27) = cosine(v12 >> 16, 64);
      *((_WORD *)v13 + 28) = sine(v12 >> 16, 64);
      *((_WORD *)v13 + 29) = v16;
      *((_WORD *)v13 + 30) = 2;
      if ( *(_WORD *)(v2 + 12) & 1 )
        sub_80D452C(v13);
      ++*(_WORD *)(v2 + 12);
    }
    v5 = ((((v12 >> 16) + 2 * v10) << 16) & 0xFF0000u) >> 16;
    v14 = ((signed __int16)v17 + v10) << 16;
    v17 = ((signed __int16)v17 + v10) & 0xFFFF;
  }
  while ( v14 >> 16 <= 19 );
  return v20;
}
