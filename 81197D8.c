int __fastcall sub_81197D8(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v3; // r2@3
  signed int v4; // r0@3
  int v6; // [sp+0h] [bp-20h]@1
  int v7; // [sp+1Ch] [bp-4h]@8

  v1 = a1;
  memcpy(&v6, (const char *)&gUnknown_083FA632, 24);
  v2 = *(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 48) = v2 + 1;
  if ( v2 >= (signed int)*(_WORD *)(v1 + 52) )
  {
    gSpriteCoordOffsetY = 0;
    gSprites[68 * v2019073 + 44] &= 0xBFu;
    DestroySprite(v1);
  }
  else
  {
    if ( ((_BYTE)v2 + 1) & 1 )
    {
      gSpriteCoordOffsetY = *((_WORD *)&v6 + 4 * (*(_WORD *)(v1 + 50) / 2) + *(_WORD *)(v1 + 60));
      v3 = *(_WORD *)(v1 + 60);
      v4 = v3 + 1;
      if ( v3 + 1 < 0 )
        v4 = v3 + 4;
      *(_WORD *)(v1 + 60) = v3 + 1 - 4 * (v4 >> 2);
    }
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(v1 + 62) << 29 >> 31) ^ 1);
  }
  return v7;
}
