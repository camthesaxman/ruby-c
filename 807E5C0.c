int __fastcall sub_807E5C0(int a1)
{
  int v1; // r5@1
  int v2; // r1@2
  int v3; // r0@2
  int v4; // r1@2
  int v5; // r2@2
  _BYTE *v6; // r0@6
  char v7; // r1@6
  _BYTE *v8; // r4@8
  int v9; // r0@8
  int v11; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 54) )
  {
    if ( *(_BYTE *)(a1 + 63) & 0x10 )
    {
      *(_BYTE *)(a1 + 62) |= 4u;
      sub_807E4EC(a1);
    }
  }
  else
  {
    v2 = gUnknown_0839AABC[2 * v202FEC4] + *(_WORD *)(a1 + 50);
    *(_WORD *)(a1 + 50) = v2;
    v3 = gUnknown_0839AABC[2 * v202FEC4 + 1] + *(_WORD *)(a1 + 52);
    *(_WORD *)(v1 + 52) = v3;
    v4 = v2 << 16 >> 20;
    *(_WORD *)(v1 + 32) = v4;
    v5 = v3 << 16 >> 20;
    *(_WORD *)(v1 + 34) = v5;
    if ( *(_WORD *)(v1 + 56)
      && (unsigned int)((v4 + 8) << 16) <= 0x1000000
      && v3 << 16 >> 20 >= -16
      && v3 << 16 >> 20 <= 176 )
    {
      v6 = (_BYTE *)(v1 + 62);
      v7 = *(_BYTE *)(v1 + 62) & 0xFB;
    }
    else
    {
      v6 = (_BYTE *)(v1 + 62);
      v7 = *(_BYTE *)(v1 + 62) | 4;
    }
    *v6 = v7;
    v8 = v6;
    v9 = *(_WORD *)(v1 + 46) - 1;
    *(_WORD *)(v1 + 46) = v9;
    if ( !(v9 << 16) )
    {
      StartSpriteAnim(v1, v202FEC4 + 1);
      *(_WORD *)(v1 + 54) = 1;
      *(_WORD *)(v1 + 32) -= gSpriteCoordOffsetX;
      *(_WORD *)(v1 + 34) -= gSpriteCoordOffsetY;
      *v8 |= 2u;
    }
  }
  return v11;
}
