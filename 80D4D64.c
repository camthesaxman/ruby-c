int __fastcall sub_80D4D64(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r8@1
  int v5; // r10@1
  unsigned int v6; // r9@1
  unsigned int v7; // r4@1
  unsigned int v8; // r7@1
  unsigned int v9; // r6@1
  int v10; // r8@1
  int v11; // r5@1
  char *v12; // r4@2
  unsigned int v13; // r0@5
  unsigned int v14; // r6@6
  char *v15; // r4@7
  unsigned int v16; // r0@10
  unsigned int v18; // [sp+0h] [bp-38h]@1
  int v19; // [sp+4h] [bp-34h]@1
  int v20; // [sp+8h] [bp-30h]@6
  int v21; // [sp+Ch] [bp-2Ch]@1
  unsigned int v22; // [sp+10h] [bp-28h]@1
  signed int v23; // [sp+14h] [bp-24h]@1
  int v24; // [sp+34h] [bp-4h]@0

  v3 = a2;
  v18 = (*(_WORD *)(a1 + 46) + ((unsigned int)*(_WORD *)(a1 + 46) >> 31)) << 15 >> 16;
  v4 = (*(_WORD *)(a1 + 36) + *(_WORD *)(a1 + 32)) & 0xFFFF;
  v5 = (*(_WORD *)(a1 + 38) + *(_WORD *)(a1 + 34)) & 0xFFFF;
  v6 = (a3 + (unsigned __int16)Random() % 0xAu - 5) & 0xFFFF;
  v7 = ((unsigned __int16)Random() % 0xAu - v3 - 5) << 16;
  v8 = v7 >> 16;
  v9 = 0;
  v10 = v4 << 16;
  v21 = v5 << 16;
  v22 = v18 << 16;
  v11 = SHIWORD(v7);
  v23 = v7 >> 16 << 16;
  v19 = -SHIWORD(v7);
  do
  {
    v12 = &gSprites[68 * (unsigned __int8)CreateSprite((int)"«'«'„ß7\b¨“=\b", SHIWORD(v10), v5 + v18)];
    *((_WORD *)v12 + 23) = 20;
    *((_WORD *)v12 + 24) = v6;
    v12[67] = sub_8079E90(v202F7C8) - 1;
    if ( v11 >= 0 )
      *((_WORD *)v12 + 25) = v8;
    else
      *((_WORD *)v12 + 25) = v19;
    v13 = (v9 << 16) + 0x10000;
    v9 = v13 >> 16;
  }
  while ( (signed int)v13 <= 0 );
  v14 = 0;
  v20 = -(v23 >> 16);
  do
  {
    v15 = &gSprites[68 * (unsigned __int8)CreateSprite((int)"«'«'„ß7\b¨“=\b", SHIWORD(v10), HIWORD(v21) - HIWORD(v22))];
    *((_WORD *)v15 + 23) = 20;
    *((_WORD *)v15 + 24) = v6;
    v15[67] = sub_8079E90(v202F7C8) - 1;
    if ( v23 >> 16 <= 0 )
      *((_WORD *)v15 + 25) = v8;
    else
      *((_WORD *)v15 + 25) = v20;
    v16 = (v14 << 16) + 0x10000;
    v14 = v16 >> 16;
  }
  while ( (signed int)v16 <= 0 );
  return v24;
}
