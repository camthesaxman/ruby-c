int __fastcall sub_80C3698(_BYTE *a1)
{
  _BYTE *v1; // r4@1
  __int16 v2; // r0@1
  char *v3; // r4@1
  signed int v4; // r5@1
  signed int v5; // r3@1
  char *v6; // r2@2
  char *v7; // r1@2
  int v9; // [sp+10h] [bp-4h]@0

  v1 = a1;
  sub_80C3158(a1, v2018001);
  v2 = sub_80C34AC(v1);
  v3 = &gSprites[68 * v2018001];
  *((_WORD *)v3 + 16) = v2 + 32;
  *((_WORD *)v3 + 17) = 80;
  v3[62] &= 0xFBu;
  v4 = 0;
  v5 = 64;
  do
  {
    v6 = &v3[2 * v4 + 46];
    *(_WORD *)&gSprites[68 * *(_WORD *)v6 + 32] = *((_WORD *)v3 + 18) + *((_WORD *)v3 + 16) + v5;
    *(_WORD *)&gSprites[68 * *(_WORD *)v6 + 34] = *((_WORD *)v3 + 17);
    v7 = &gSprites[68 * *(_WORD *)v6 + 62];
    *v7 &= 0xFBu;
    v5 += 64;
    ++v4;
  }
  while ( v4 <= 2 );
  word_30042C4 = 240;
  word_3004240 = ((*((_WORD *)v3 + 17) - 16) << 8) | (*((_WORD *)v3 + 17) + 16);
  v4000048 = 16190;
  return v9;
}
