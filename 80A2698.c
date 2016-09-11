int sub_80A2698()
{
  unsigned int v0; // r7@1
  unsigned int v1; // r6@2
  int v2; // r5@2
  int v3; // r4@3
  unsigned __int8 v4; // r0@4
  unsigned int v5; // r7@8

  v0 = 0;
  audio_play(0x80u);
  PlayerGetDestCoords((_WORD *)0x203923C, (_WORD *)0x203923E);
  do
  {
    v1 = 0;
    v2 = (signed __int16)(v0 - 1 + v203923E);
    do
    {
      v3 = (signed __int16)(v1 - 1 + v203923C);
      if ( (unsigned __int8)MapGridGetZCoordAt(v3, v2) == v2039240 )
      {
        v4 = MapGridGetMetatileBehaviorAt(v3, v2);
        if ( (unsigned __int8)sub_80578F8(v4) == 1 )
        {
          sub_80A27A8(v3, v2);
          sub_805BCC0(v3, v2);
        }
      }
      v1 = (v1 + 1) & 0xFF;
    }
    while ( v1 <= 2 );
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 2 );
  sub_80A28F4((signed __int16)(v203923C - 1), (signed __int16)(v203923E - 2));
  DrawWholeMapView();
  v5 = 0;
  do
  {
    *(_BYTE *)(v5 + 33685488) = CreateSprite(
                                  (int)&gSpriteTemplate_CutGrass,
                                  (((*(_WORD *)&gSprites[68 * v202E85C + 2] << 16) & 0x1FFFFFFu) + 0x80000) >> 16,
                                  (unsigned __int8)gSprites[68 * v202E85C] + 20);
    *(_WORD *)&gSprites[68 * *(_BYTE *)(v5 + 33685488) + 50] = 32 * v5;
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 7 );
  return 0;
}
