int __fastcall sub_809D638(int a1)
{
  int v1; // r4@1
  int v2; // r7@1
  _BYTE *v3; // r6@1
  _BYTE *v4; // r5@2
  int v5; // r3@2

  v1 = a1;
  v2 = 0;
  v3 = (_BYTE *)(a1 + 44);
  if ( *(_BYTE *)(a1 + 44) & 0x3F )
  {
    *v3 = *(_BYTE *)(a1 + 44) & 0xC0 | ((*(_BYTE *)(a1 + 44) & 0x3F) - 1) & 0x3F;
  }
  else
  {
    v4 = (_BYTE *)(a1 + 43);
    v5 = *(_WORD *)(4 * *(_BYTE *)(a1 + 43) + *(_DWORD *)(4 * *(_BYTE *)(a1 + 42) + *(_DWORD *)(a1 + 8)));
    if ( v5 == -2 )
    {
      *v4 = 0;
    }
    else if ( v5 != -1 )
    {
      RequestSpriteCopy(
        *(_DWORD *)(a1 + 12)
      + *(&gSpriteImageSizes[4 * ((unsigned int)*(_BYTE *)(a1 + 1) >> 6)] + ((unsigned int)*(_BYTE *)(a1 + 3) >> 6))
      * v5,
        (32 * *(_WORD *)(a1 + 4) & 0x7FFF) + 100728832,
        *(&gSpriteImageSizes[4 * ((unsigned int)*(_BYTE *)(a1 + 1) >> 6)] + ((unsigned int)*(_BYTE *)(a1 + 3) >> 6)));
      *v3 = *v3 & 0xC0 | ((unsigned __int16)(*(_DWORD *)(4 * (*v4)++
                                                       + *(_DWORD *)(4 * *(_BYTE *)(v1 + 42) + *(_DWORD *)(v1 + 8))) >> 6) >> 18);
      v2 = *v4;
    }
  }
  return v2;
}
