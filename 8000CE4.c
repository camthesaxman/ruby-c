signed int __fastcall CreateSpriteAt(unsigned __int8 a1, int a2, __int16 a3, __int16 a4, char a5)
{
  int v5; // r8@1
  int v6; // r10@1
  __int16 v7; // r5@1
  __int16 v8; // r6@1
  char *v9; // r7@1
  int v10; // r0@1
  int v11; // r1@1
  int v12; // r0@2
  signed int v13; // r0@2

  v5 = a2;
  v6 = a1;
  v7 = a3;
  v8 = a4;
  v9 = &gSprites[68 * a1];
  ResetSprite(v9);
  v9[62] |= 1u;
  v9[63] |= 0x4Cu;
  v9[67] = a5;
  v10 = *(_DWORD *)(v5 + 4);
  v11 = *(_DWORD *)(v10 + 4);
  *(_DWORD *)v9 = *(_DWORD *)v10;
  *((_DWORD *)v9 + 1) = v11;
  *((_DWORD *)v9 + 2) = *(_DWORD *)(v5 + 8);
  *((_DWORD *)v9 + 4) = *(_DWORD *)(v5 + 16);
  *((_DWORD *)v9 + 5) = v5;
  *((_DWORD *)v9 + 7) = *(_DWORD *)(v5 + 20);
  *((_WORD *)v9 + 16) = v7;
  *((_WORD *)v9 + 17) = v8;
  CalcCenterToCornerVec(
    v9,
    (unsigned int)(unsigned __int8)v9[1] >> 6,
    (unsigned int)(unsigned __int8)v9[3] >> 6,
    v9[1] & 3);
  if ( *(_WORD *)v5 == 0xFFFF )
  {
    v12 = *(_DWORD *)(v5 + 12);
    *((_DWORD *)v9 + 3) = v12;
    v13 = AllocSpriteTiles(((unsigned int)*(_WORD *)(v12 + 4) >> 5) & 0xFF) << 16;
    if ( v13 >> 16 == -1 )
    {
      ResetSprite(v9);
      return 64;
    }
    *((_WORD *)v9 + 2) = *((_WORD *)v9 + 2) & 0xFC00 | HIWORD(v13) & 0x3FF;
    v9[63] &= 0xBFu;
    *((_WORD *)v9 + 32) = 0;
  }
  else
  {
    *((_WORD *)v9 + 32) = GetSpriteTileStartByTag(*(_WORD *)v5);
    SetSpriteSheetFrameTileNum(v9);
  }
  if ( v9[1] & 1 )
    InitSpriteAffineAnim(v9);
  if ( *(_WORD *)(v5 + 2) != 0xFFFF )
    v9[5] = v9[5] & 0xF | 16 * IndexOfSpritePaletteTag(*(_WORD *)(v5 + 2));
  return v6;
}
