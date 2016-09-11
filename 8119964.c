int __fastcall sub_8119964(int a1)
{
  int v1; // r4@1
  int v2; // r2@3
  int v3; // r0@3
  int v4; // r2@10
  int v5; // r0@10
  char *v6; // r0@13
  int v8; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 60) )
  {
    v2019034 = gUnknown_083FA61E[(v2019001 - 1) / 2];
    if ( v2019001 <= 0x12u )
      ++v2019001;
    if ( *(_WORD *)(v2019038 + 46) )
    {
      v4 = *(_WORD *)(v2019038 + 52);
      v5 = *(_WORD *)&gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 10] + 180;
    }
    else
    {
      v4 = *(_WORD *)(v2019038 + 52);
      v5 = *(_WORD *)&gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 10];
    }
    if ( v4 == v5 )
    {
      dword_2020020[17 * *(_WORD *)(v1 + 54)] = (int)sub_8119898;
      v6 = &gSprites[68 * *(_WORD *)(v1 + 54) + 62];
      *v6 &= 0xFBu;
      *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
      *(_WORD *)(v1 + 60) = 0;
    }
  }
  else
  {
    if ( *(_WORD *)(v2019038 + 46) )
    {
      v2 = *(_WORD *)(v2019038 + 52);
      v3 = *(_WORD *)&gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 8] + 180;
    }
    else
    {
      v2 = *(_WORD *)(v2019038 + 52);
      v3 = *(_WORD *)&gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 8];
    }
    if ( v2 == v3 )
    {
      *(_BYTE *)(v1 + 62) &= 0xFBu;
      ++*(_WORD *)(v1 + 60);
      m4aSongNumStart(43);
      v2019001 = 1;
      v2019034 = gUnknown_083FA61E[0];
    }
  }
  return v8;
}
