int __fastcall sub_813DA64(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  __int16 v3; // r0@3
  __int16 v4; // r1@4
  int v5; // r1@7
  int v6; // r2@7
  int v7; // r0@7
  unsigned int v8; // r6@7
  int v9; // r3@7
  __int16 v10; // r1@7
  __int16 v11; // r0@8
  __int16 v12; // r2@12
  int v14; // [sp+10h] [bp-4h]@0

  v1 = a1;
  ++*(_WORD *)(a1 + 60);
  v2 = *(_WORD *)(a1 + 46);
  if ( !v2 || v2 != 1 )
  {
    *(_BYTE *)(v1 + 1) |= 3u;
    *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 2;
    CalcCenterToCornerVec(v1, 1, 3, 3);
    *(_BYTE *)(v1 + 62) &= 0xFBu;
    *(_WORD *)(v1 + 46) = 1;
    *(_WORD *)(v1 + 48) = 128;
    *(_WORD *)(v1 + 50) = -24;
    v3 = 0;
_0813DB92:
    *(_WORD *)(v1 + 52) = v3;
    return v14;
  }
  v4 = *(_WORD *)(v1 + 52);
  if ( (signed int)*(_WORD *)(v1 + 52) <= 79 )
  {
    *(_WORD *)(v1 + 38) = -(signed __int16)sine((unsigned __int8)v4, 120);
    *(_WORD *)(v1 + 36) = -(signed __int16)sine(*(_WORD *)(v1 + 52) & 0xFF, 140);
    if ( (signed int)*(_WORD *)(v1 + 52) > 64 )
      *(_BYTE *)(v1 + 5) |= 0xCu;
  }
  v5 = *(_WORD *)(v1 + 50);
  v6 = *(_WORD *)(v1 + 48);
  v7 = *(_WORD *)((char *)gSineTable + (2 * (v5 + 64) & 0x1FF)) * v6;
  v8 = (unsigned int)((v7 + (v7 < 0 ? 0xFF : 0)) << 8) >> 16;
  v9 = *(_WORD *)((char *)gSineTable + (2 * v5 & 0x1FF));
  SetOamMatrix(1, v8, v9 * v6 / 256, -(signed __int16)v9 * v6 / 256, v8);
  v10 = *(_WORD *)(v1 + 48);
  if ( (signed int)*(_WORD *)(v1 + 48) > 255 )
    v11 = v10 + 32;
  else
    v11 = v10 + 8;
  *(_WORD *)(v1 + 48) = v11;
  if ( (signed int)*(_WORD *)(v1 + 50) <= 23 )
    ++*(_WORD *)(v1 + 50);
  v12 = *(_WORD *)(v1 + 52);
  if ( (signed int)*(_WORD *)(v1 + 52) <= 63 )
  {
    v3 = v12 + 2;
    goto _0813DB92;
  }
  if ( !(*(_WORD *)(v1 + 60) & 3) )
  {
    v3 = v12 + 1;
    goto _0813DB92;
  }
  return v14;
}
