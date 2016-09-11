int __fastcall sub_80C3D04(unsigned __int8 a1)
{
  unsigned __int8 v1; // r7@1
  int *v2; // r1@1
  __int16 v3; // r0@1
  __int16 v4; // r0@3
  char *v5; // r5@3
  int v7; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4) + 1;
  *((_WORD *)v2 + 4) = v3;
  if ( v3 == 5 )
  {
    *((_WORD *)v2 + 4) = 0;
    if ( v2018007 <= 0x27u )
    {
      v4 = (unsigned __int16)Random() % 0xF0u;
      v5 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83D17B4, v4 - 20, 44)];
      *((_WORD *)v5 + 23) = Random() & 0x1FF;
      *((_WORD *)v5 + 24) = (unsigned __int16)Random() % 0x18u + 16;
      *((_WORD *)v5 + 25) = (unsigned __int8)Random() + 48;
      *((_WORD *)v5 + 2) = *((_WORD *)v5 + 2) & 0xFC00 | ((*((_WORD *)v5 + 2) & 0x3FF)
                                                        + (unsigned __int16)Random() % 0x11u) & 0x3FF;
      ++v2018007;
    }
  }
  if ( v2018009 )
    DestroyTask(v1);
  return v7;
}
