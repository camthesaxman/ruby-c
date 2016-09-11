int Cb2_StartWallClock()
{
  unsigned __int8 v0; // r0@1
  __int16 v1; // r6@1
  int *v2; // r0@1
  char *v3; // r1@1
  char *v4; // r1@1
  char *v5; // r1@1
  char *v6; // r1@1
  int v8; // [sp+14h] [bp-4h]@0

  LoadWallClockGraphics();
  LZ77UnCompVram(&gUnknown_08E954B0, 100677632);
  v0 = CreateTask((int)sub_810AB54, 0);
  v1 = v0;
  v2 = &dword_3004B20[10 * v0];
  *((_WORD *)v2 + 6) = 10;
  *((_WORD *)v2 + 7) = 0;
  *((_WORD *)v2 + 8) = 0;
  *((_WORD *)v2 + 9) = 0;
  *((_WORD *)v2 + 10) = 0;
  *((_WORD *)v2 + 4) = 0;
  *((_WORD *)v2 + 5) = 300;
  v3 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83F7AD8, 120, 80)];
  *((_WORD *)v3 + 23) = v1;
  v3[1] = v3[1] & 0xFC | 1;
  v3[3] &= 0xC1u;
  v4 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83F7AF0, 120, 80)];
  *((_WORD *)v4 + 23) = v1;
  v4[1] = v4[1] & 0xFC | 1;
  v4[3] = v4[3] & 0xC1 | 2;
  v5 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83F7B28, 120, 80)];
  *((_WORD *)v5 + 23) = v1;
  *((_WORD *)v5 + 24) = 45;
  v6 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83F7B40, 120, 80)];
  *((_WORD *)v6 + 23) = v1;
  *((_WORD *)v6 + 24) = 90;
  sub_810A864();
  return v8;
}
