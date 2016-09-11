int sub_8127820()
{
  int *v0; // r6@1
  int v1; // r5@1
  int v2; // r4@2
  char *v3; // r0@2

  v0 = &dword_30048A0[9 * (unsigned __int8)GetFieldObjectIdByLocalIdAndMap(v202FF84)];
  v1 = (unsigned __int8)CreateSpriteAtEnd(137841240, 0, 0);
  if ( v1 != 64 )
  {
    v2 = GetFieldObjectGraphicsInfo(*((_BYTE *)v0 + 5));
    v3 = &gSprites[68 * v1];
    *((_DWORD *)v3 + 7) = sub_81278D8;
    v3[62] |= 2u;
    v3[5] = v3[5] & 0xF3 | gSprites[68 * *((_BYTE *)v0 + 4) + 5] & 0xC;
    *((_WORD *)v3 + 23) = v202FF84;
    *((_WORD *)v3 + 24) = v202FF88;
    *((_WORD *)v3 + 25) = v202FF8C;
    *((_WORD *)v3 + 26) = -1;
    *((_WORD *)v3 + 27) = -1;
    *((_WORD *)v3 + 19) = (*(_WORD *)(v2 + 10) << 16 >> 17) - 4;
    StartSpriteAnim((int)v3, 1);
  }
  return 0;
}
