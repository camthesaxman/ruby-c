int __fastcall sub_814A5C0(int a1, unsigned __int16 a2, char a3, __int16 a4, unsigned __int8 a5)
{
  signed int v5; // r6@1
  char v6; // r5@1
  __int16 v7; // r7@1
  int v8; // r0@1
  signed int v9; // r4@4
  char *v10; // r4@8
  char *v11; // r4@12

  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = v203A3D0;
  if ( v203A3D0 != 64 || (v8 = v203A3D1, v203A3D1 != 64) )
    sub_814A7FC(v8);
  v9 = 1;
  if ( v5 == 0xFFFF )
  {
    *(_WORD *)(2 * (v6 & 0xF) + 0x203A360) = v7;
    if ( (unsigned __int8)LoadSpritePalette((int)&gUnknown_0842F240) != 255 )
    {
      v5 = 65520;
      v9 = 0;
    }
  }
  LoadSpriteSheetDeferred((int)(&gUnknown_0842F140 + 2 * (v6 & 0xF)));
  v203A3D0 = CreateSprite((int)&gSpriteTemplate_842F250 + 24 * v9, 0, 160);
  v203A3D1 = CreateSprite((int)&gSpriteTemplate_842F280, 0, 160);
  if ( v203A3D0 != 64 )
  {
    v10 = &gSprites[68 * v203A3D0];
    if ( v5 == 0xFFFF )
      v10[5] &= 0xFu;
    else
      v10[5] = v10[5] & 0xF | 16 * IndexOfSpritePaletteTag(v5);
  }
  if ( v203A3D1 != 64 )
  {
    v11 = &gSprites[68 * v203A3D1];
    if ( v5 == 0xFFFF )
      v11[5] &= 0xFu;
    else
      v11[5] = v11[5] & 0xF | 16 * IndexOfSpritePaletteTag(v5);
    if ( !(v4000000 & 0x6000) )
      v400004A |= 0x1Fu;
    v203A3D3 = (unsigned int)v4000000 >> 15;
    v203A3D4 = v400004B;
    v4000000 |= 0x8000u;
    v400004B = 16;
  }
  sub_814A958(a5);
  return v203A3D0;
}
