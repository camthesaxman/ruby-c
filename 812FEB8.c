int __fastcall sub_812FEB8(unsigned __int8 a1, int a2)
{
  __int16 v2; // r6@1
  int *v3; // r4@1
  signed __int16 v4; // r1@2
  char v5; // r3@2
  unsigned int v6; // r5@4
  int v7; // r3@5
  int v8; // r1@5
  char *v9; // r1@6
  signed __int16 v10; // r0@6
  __int16 v12; // [sp+0h] [bp-24h]@4
  __int16 v13; // [sp+2h] [bp-22h]@4
  __int16 v14; // [sp+4h] [bp-20h]@4
  __int16 v15; // [sp+6h] [bp-1Eh]@4
  __int16 v16; // [sp+8h] [bp-1Ch]@4
  __int16 v17; // [sp+Ah] [bp-1Ah]@4
  int v18; // [sp+20h] [bp-4h]@10

  v2 = a1;
  v3 = &dword_3004B20[10 * a1];
  if ( a2 << 24 )
  {
    v4 = 30;
    v5 = 20;
  }
  else
  {
    v4 = 18;
    v5 = -20;
  }
  v12 = *((_WORD *)v3 + 8) - v4;
  v13 = v12 - 4;
  v14 = *((_WORD *)v3 + 8) + v4;
  v15 = v14 + 4;
  v16 = *((_WORD *)v3 + 9) + v5;
  v17 = v16 + 6;
  v6 = 0;
  do
  {
    v7 = *((_BYTE *)v3 + 20);
    v8 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_84028CC, *(&v12 + v6), *(&v16 + (v6 & 1)));
    if ( v8 != 64 )
    {
      v9 = &gSprites[68 * v8];
      *((_WORD *)v9 + 23) = 0;
      v10 = 2;
      if ( v6 <= 1 )
        v10 = -2;
      *((_WORD *)v9 + 24) = v10;
      *((_WORD *)v9 + 25) = -1;
      *((_WORD *)v9 + 26) = v2;
      *((_WORD *)v9 + 27) = 2;
      ++*((_WORD *)v3 + 6);
    }
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 <= 3 );
  return v18;
}
