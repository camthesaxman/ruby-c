int sub_81279D8()
{
  int *v0; // r5@1
  int v1; // r0@1
  char *v2; // r2@2

  v0 = &dword_30048A0[9 * (unsigned __int8)GetFieldObjectIdByLocalIdAndMap(v202FF84)];
  v1 = (unsigned __int8)CreateSpriteAtEnd(137842800, 0, 0);
  if ( v1 != 64 )
  {
    v2 = &gSprites[68 * v1];
    v2[62] |= 2u;
    v2[5] = v2[5] & 0xF3 | gSprites[68 * *((_BYTE *)v0 + 4) + 5] & 0xC;
    *((_WORD *)v2 + 23) = v202FF84;
    *((_WORD *)v2 + 24) = v202FF88;
    *((_WORD *)v2 + 25) = v202FF8C;
    *((_WORD *)v2 + 26) = *(_WORD *)&gSprites[68 * *((_BYTE *)v0 + 4) + 32];
    *((_WORD *)v2 + 27) = *(_WORD *)&gSprites[68 * *((_BYTE *)v0 + 4) + 34];
  }
  return 0;
}
