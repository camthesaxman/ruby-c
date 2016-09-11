int __fastcall sub_8106058(int a1)
{
  int v1; // r5@1
  signed int v2; // r0@1
  int v3; // r4@2
  signed int v4; // r0@2
  __int16 v5; // r0@2
  int v6; // r4@4
  signed int v7; // r0@4
  __int16 v8; // r0@4
  int v10; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48);
  if ( v2 > 2 )
  {
    v6 = (int)*(&gUnknown_083EDE10 + *(_WORD *)(v1 + 48));
    v7 = IndexOfSpritePaletteTag(6u);
    LoadPalette(v6, (((v7 << 20) & 0xFFFFFFFu) + 0x1000000) >> 16, 32);
    v8 = *(_WORD *)(v1 + 50) + 1;
    *(_WORD *)(v1 + 50) = v8;
    if ( v8 > 24 )
    {
      *(_WORD *)(v1 + 48) = 0;
      *(_WORD *)(v1 + 50) = 0;
    }
  }
  else
  {
    v3 = (int)*(&gUnknown_083EDE10 + v2);
    v4 = IndexOfSpritePaletteTag(6u);
    LoadPalette(v3, (((v4 << 20) & 0xFFFFFFFu) + 0x1000000) >> 16, 32);
    v5 = *(_WORD *)(v1 + 50) + 1;
    *(_WORD *)(v1 + 50) = v5;
    if ( v5 > 3 )
    {
      ++*(_WORD *)(v1 + 48);
      *(_WORD *)(v1 + 50) = 0;
    }
  }
  StartSpriteAnimIfDifferent(v1, 1);
  *(_WORD *)(v1 + 60) = 0;
  return v10;
}
