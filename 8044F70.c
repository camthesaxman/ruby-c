int __fastcall sub_8044F70(unsigned __int8 a1)
{
  int v1; // r6@1
  __int16 v2; // r2@1
  int v3; // r3@4
  signed int v4; // r5@4
  char *v5; // r2@4
  signed int v6; // r5@6
  unsigned __int8 v8; // [sp+0h] [bp-1Ch]@5
  int v9; // [sp+18h] [bp-4h]@11

  v1 = 10 * a1;
  v2 = HIWORD(dword_3004B20[v1 + 9]) - 1;
  HIWORD(dword_3004B20[v1 + 9]) = v2;
  if ( v2 < 0 )
  {
    if ( v2 == -1 )
    {
      v3 = BYTE2(dword_3004B20[v1 + 2]);
      v4 = 0;
      v5 = (char *)&unk_3004B2E + v1 * 4;
      do
      {
        *(&v8 + v4) = *(_WORD *)v5;
        v5 += 2;
        ++v4;
      }
      while ( v4 <= 5 );
      DestroySpriteAndFreeResources((int)&gSprites[68 * v3]);
      DestroySpriteAndFreeResources((int)&gSprites[68 * v8]);
      v6 = 1;
      do
        DestroySprite((int)&gSprites[68 * *(&v8 + v6++)]);
      while ( v6 <= 5 );
    }
    else if ( v2 == -3 )
    {
      v4000050 = 0;
      v4000052 = 0;
      DestroyTask(a1);
    }
  }
  else
  {
    v4000052 = v2 | ((16 - v2) << 8);
  }
  return v9;
}
