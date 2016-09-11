int sub_8127610()
{
  int *v0; // r5@1
  int v1; // r4@1
  int v2; // r0@2
  char *v3; // r3@2

  v0 = &dword_30048A0[9 * (unsigned __int8)GetFieldObjectIdByLocalIdAndMap(v202FF84)];
  v1 = (unsigned __int8)CreateSpriteAtEnd(137841240, 0, 0);
  if ( v1 != 64 )
  {
    v2 = GetFieldObjectGraphicsInfo(*((_BYTE *)v0 + 5));
    v3 = &gSprites[68 * v1];
    v3[62] |= 2u;
    v3[5] = v3[5] & 0xF3 | gSprites[68 * *((_BYTE *)v0 + 4) + 5] & 0xC;
    *((_WORD *)v3 + 23) = v202FF84;
    *((_WORD *)v3 + 24) = v202FF88;
    *((_WORD *)v3 + 25) = v202FF8C;
    *((_WORD *)v3 + 19) = (*(_WORD *)(v2 + 10) << 16 >> 17) - 4;
    audio_play(0x46u);
  }
  return 0;
}
