int __fastcall sub_808EF8C(int a1)
{
  int v1; // r3@1
  _BYTE *v2; // r0@6
  char v3; // r1@6
  _BYTE *v4; // r2@8
  int v5; // r1@8
  unsigned int v6; // r0@8
  _BYTE *v7; // r0@10
  char v8; // r1@10
  int v9; // r0@16
  int v11; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)(v202FFB4 + 1610) && *(_BYTE *)(v202FFB4 + 1610) != 3 )
  {
    DestroySprite(a1);
  }
  else
  {
    if ( *(_WORD *)(a1 + 48) )
    {
      if ( *(_WORD *)(v202FFB4 + 1550) == *(_WORD *)(v202FFB4 + 1548) - 1 )
      {
        v2 = (_BYTE *)(a1 + 62);
        v3 = *(_BYTE *)(v1 + 62) | 4;
      }
      else
      {
        v2 = (_BYTE *)(a1 + 62);
        v3 = *(_BYTE *)(v1 + 62) & 0xFB;
      }
      *v2 = v3;
      v4 = v2;
      v5 = *(_WORD *)(v1 + 50);
      v6 = v5 << 24;
    }
    else
    {
      if ( *(_WORD *)(v202FFB4 + 1550) )
      {
        v7 = (_BYTE *)(a1 + 62);
        v8 = *(_BYTE *)(v1 + 62) & 0xFB;
      }
      else
      {
        v7 = (_BYTE *)(a1 + 62);
        v8 = *(_BYTE *)(v1 + 62) | 4;
      }
      *v7 = v5;
      v4 = v7;
      LOWORD(v5) = *(_WORD *)(v1 + 50);
      v6 = (*(_WORD *)(v1 + 50) - 128) << 24;
    }
    *(_WORD *)(v1 + 38) = gSineTable[v6 >> 24] / 64;
    *(_WORD *)(v1 + 50) = v5 + 8;
    if ( *(_BYTE *)(v202FFB4 + 1616) || *(_WORD *)(v202FFB4 + 1620) || *v4 & 4 )
      LOBYTE(v9) = *v4 | 4;
    else
      v9 = *v4 & 0xFB;
    *v4 = v9;
  }
  return v11;
}
