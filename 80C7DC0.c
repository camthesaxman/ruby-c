int sub_80C7DC0()
{
  int v0; // r10@1
  int v1; // r9@1
  int v2; // r8@1
  int v3; // r7@1
  signed int i; // r6@1
  int v5; // r1@2
  int v6; // r2@2
  int v7; // r3@2
  char *v8; // r4@7
  int v10; // [sp+1Ch] [bp-4h]@0

  v0 = (v2025734 - 2) & 0xFFFF;
  v1 = (v2025734 + 17) & 0xFFFF;
  v2 = (v2025736 - 2) & 0xFFFF;
  v3 = (v2025736 + 14) & 0xFFFF;
  for ( i = 0; i < v2038804; ++i )
  {
    v5 = 8 * i + v2038800;
    v6 = (*(_WORD *)v5 + 7) & 0xFFFF;
    v7 = (*(_WORD *)(v5 + 2) + 7) & 0xFFFF;
    if ( *(_BYTE *)(i + 33785840) != 64 )
    {
      v6 = (signed __int16)v6;
      if ( (*(_WORD *)v5 + 7) << 16 < v0 << 16
        || v6 > (signed __int16)v1
        || (*(_WORD *)(v5 + 2) + 7) << 16 < v2 << 16
        || (signed __int16)v7 > (signed __int16)v3 )
      {
        v8 = &gSprites[68 * *(_BYTE *)(i + 33785840)];
        FreeSpriteOamMatrix((int)v8);
        DestroySprite((int)v8);
        *(_BYTE *)(i + 33785840) = 64;
      }
    }
  }
  return v10;
}
