int Cb2_ViewWallClock()
{
  int v0; // r7@1
  signed __int16 v1; // r9@2
  signed __int16 v2; // r10@2
  char *v3; // r1@4
  char *v4; // r1@4
  char *v5; // r1@4
  char *v6; // r1@4
  int v8; // [sp+1Ch] [bp-4h]@0

  LoadWallClockGraphics();
  LZ77UnCompVram(&gUnknown_08E95774, 100677632);
  v0 = (unsigned __int8)CreateTask((int)sub_810ADC0, 0);
  sub_810AFE0(v0);
  if ( HIWORD(dword_3004B20[10 * v0 + 4]) )
  {
    v1 = 90;
    v2 = 135;
  }
  else
  {
    v1 = 45;
    v2 = 90;
  }
  v3 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83F7AD8, 120, 80)];
  *((_WORD *)v3 + 23) = v0;
  v3[1] = v3[1] & 0xFC | 1;
  v3[3] &= 0xC1u;
  v4 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83F7AF0, 120, 80)];
  *((_WORD *)v4 + 23) = v0;
  v4[1] = v4[1] & 0xFC | 1;
  v4[3] = v4[3] & 0xC1 | 2;
  v5 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83F7B28, 120, 80)];
  *((_WORD *)v5 + 23) = v0;
  *((_WORD *)v5 + 24) = v1;
  v6 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83F7B40, 120, 80)];
  *((_WORD *)v6 + 23) = v0;
  *((_WORD *)v6 + 24) = v2;
  sub_810A864();
  return v8;
}
