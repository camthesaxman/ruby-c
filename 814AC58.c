int __fastcall sub_814AC58(int a1, unsigned __int16 a2, char a3, __int16 a4, unsigned __int8 a5)
{
  signed int v5; // r5@1
  char v6; // r7@1
  __int16 v7; // r6@1
  signed int v8; // r4@3
  char *v9; // r4@7

  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( v203A3D2 != 64 )
    sub_814AD44(v203A3D2);
  v8 = 1;
  if ( v5 == 0xFFFF )
  {
    *(_WORD *)(2 * (v6 & 0xF) + 0x203A360) = v7;
    if ( (unsigned __int8)LoadSpritePalette((int)&gUnknown_0842F248) != 255 )
    {
      v5 = 65521;
      v8 = 0;
    }
  }
  LoadSpriteSheetDeferred((int)(&gUnknown_0842F1C0 + 2 * (v6 & 0xF)));
  v203A3D2 = CreateSprite((int)&gSpriteTemplate_842F298 + 24 * v8, 0, 160);
  if ( v203A3D2 != 64 )
  {
    v9 = &gSprites[68 * v203A3D2];
    if ( v5 == 0xFFFF )
      v9[5] &= 0xFu;
    else
      v9[5] = v9[5] & 0xF | 16 * IndexOfSpritePaletteTag(v5);
  }
  sub_814ADF4(a5);
  return v203A3D2;
}
