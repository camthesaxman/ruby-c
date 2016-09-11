int oei_shadow()
{
  unsigned __int8 v0; // r0@1
  int v1; // r4@1
  int v2; // r1@1
  char *v3; // r2@2

  v0 = GetFieldObjectIdByLocalIdAndMap(v202FF84);
  v1 = GetFieldObjectGraphicsInfo(BYTE1(dword_30048A0[9 * v0 + 1]));
  v2 = (unsigned __int8)CreateSpriteAtEnd(
                          (int)*(&gFieldEffectObjectTemplatePointers
                               + gUnknown_08401E32[(unsigned int)*(_BYTE *)(v1 + 12) << 26 >> 30]),
                          0,
                          0);
  if ( v2 != 64 )
  {
    v3 = &gSprites[68 * v2];
    v3[62] |= 2u;
    *((_WORD *)v3 + 23) = v202FF84;
    *((_WORD *)v3 + 24) = v202FF88;
    *((_WORD *)v3 + 25) = v202FF8C;
    *((_WORD *)v3 + 26) = (*(_WORD *)(v1 + 10) << 16 >> 17)
                        - gUnknown_08401E36[(unsigned int)*(_BYTE *)(v1 + 12) << 26 >> 30];
  }
  return 0;
}
