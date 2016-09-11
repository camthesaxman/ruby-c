int __fastcall sub_8044ECC(unsigned __int8 a1)
{
  int v1; // r3@1
  int v2; // r4@1
  __int16 v3; // r0@1
  signed int v4; // r5@1
  int v5; // r3@2
  char *v6; // r2@2
  signed int v7; // r5@4
  unsigned __int8 v9; // [sp+0h] [bp-18h]@3
  int v10; // [sp+14h] [bp-4h]@9

  v1 = a1;
  v2 = 10 * a1;
  v3 = HIWORD(dword_3004B20[v2 + 9]) - 1;
  v4 = 0;
  HIWORD(dword_3004B20[v2 + 9]) = v3;
  if ( v3 == -1 )
  {
    v5 = BYTE2(dword_3004B20[v2 + 2]);
    v6 = (char *)&unk_3004B2E + v2 * 4;
    do
    {
      *(&v9 + v4) = *(_WORD *)v6;
      v6 += 2;
      ++v4;
    }
    while ( v4 <= 5 );
    DestroySpriteAndFreeResources((int)&gSprites[68 * v5]);
    DestroySpriteAndFreeResources((int)&gSprites[68 * v9]);
    v7 = 1;
    do
      DestroySprite((int)&gSprites[68 * *(&v9 + v7++)]);
    while ( v7 <= 5 );
  }
  else if ( v3 == -3 )
  {
    v4000050 = 0;
    v4000052 = 0;
    DestroyTask(v1);
  }
  return v10;
}
