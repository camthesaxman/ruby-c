signed int __fastcall sub_811A3CC(int a1)
{
  int v1; // r4@1
  int v2; // r8@8
  unsigned int v3; // r12@8
  int v4; // r5@8
  unsigned int v5; // r3@9
  unsigned __int8 v6; // r7@9
  signed int v8; // [sp+0h] [bp-24h]@1

  v1 = a1;
  v8 = 0;
  if ( byte_3005E98 == 1 )
  {
    v2 = (*(_BYTE *)(a1 + 2) << 11) + 100663296;
    v3 = (unsigned int)*(_WORD *)a1 << 18 >> 23;
    v4 = 0;
    do
    {
      v5 = 0;
      v6 = v4 + 1;
      do
      {
        *(_WORD *)(2 * (v5 + *(_BYTE *)(a1 + 4)) + ((v4 + *(_BYTE *)(a1 + 5)) << 6) + v2) = ((*(_BYTE *)(a1 + 3) << 12) | gUnknown_083FAE7C[10 * v4 + v5])
                                                                                          + v3;
        v5 = (v5 + 1) & 0xFF;
      }
      while ( v5 <= 9 );
      v4 = (unsigned __int8)(v4 + 1);
    }
    while ( v6 <= 7u );
    ++byte_3005E98;
  }
  else if ( (signed int)(unsigned __int8)byte_3005E98 > 1 )
  {
    if ( byte_3005E98 == 2 )
    {
      LoadSpriteSheets((_DWORD *)"|¦?\b");
      LoadSpritePalettes((int)"\\¦?\b");
      v201C804 = (unsigned __int8)CreateSprite(
                                    (int)&gSpriteTemplate_83FB774,
                                    (((unsigned int)*(_BYTE *)(v1 + 4) << 19) + 2621440) >> 16,
                                    (((unsigned int)*(_BYTE *)(v1 + 5) << 19) + 3670016) >> 16);
      v201C800 = 32;
      v201C801 = 32;
      v201C802 = 0;
      v8 = 1;
    }
  }
  else if ( !byte_3005E98 )
  {
    LZ77UnCompVram(&gUnknown_083FAF3C, *(_WORD *)a1 + 100663296);
    LoadPalette((int)&gUnknown_083FAF1C, 16 * *(_BYTE *)(v1 + 3), 32);
    ++byte_3005E98;
  }
  return v8;
}
