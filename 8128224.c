int sub_8128224()
{
  int *v0; // r6@1
  int v1; // r4@1
  int v2; // r5@2
  char *v3; // r0@2

  v0 = &dword_30048A0[9 * (unsigned __int8)GetFieldObjectIdByLocalIdAndMap(v202FF84)];
  v1 = (unsigned __int8)CreateSpriteAtEnd(137841880, 0, 0);
  if ( v1 != 64 )
  {
    v2 = GetFieldObjectGraphicsInfo(*((_BYTE *)v0 + 5));
    v3 = &gSprites[68 * v1];
    v3[62] |= 2u;
    v3[5] = v3[5] & 0xF3 | gSprites[68 * *((_BYTE *)v0 + 4) + 5] & 0xC;
    *((_WORD *)v3 + 23) = v202FF84;
    *((_WORD *)v3 + 24) = v202FF88;
    *((_WORD *)v3 + 25) = v202FF8C;
    *((_WORD *)v3 + 26) = *(_WORD *)&gSprites[68 * *((_BYTE *)v0 + 4) + 32];
    *((_WORD *)v3 + 27) = *(_WORD *)&gSprites[68 * *((_BYTE *)v0 + 4) + 34];
    *((_WORD *)v3 + 19) = (*(_WORD *)(v2 + 10) << 16 >> 17) - 2;
    SeekSpriteAnim((int)v3, 2);
  }
  return 0;
}
