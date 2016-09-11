int __fastcall sub_813EDFC(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  _BYTE *v3; // r4@2
  __int16 v4; // r0@4
  signed int v5; // kr00_4@8
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( !v2 || (v3 = (_BYTE *)(v1 + 62), v2 != 1) )
  {
    v3 = (_BYTE *)(v1 + 62);
    *(_BYTE *)(v1 + 62) &= 0xFBu;
    *(_BYTE *)(v1 + 1) |= 3u;
    *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 0x24;
    CalcCenterToCornerVec(v1, 0, 3, 3);
    *(_WORD *)(v1 + 48) = 0;
    *(_WORD *)(v1 + 46) = 1;
  }
  v4 = *(_WORD *)(v1 + 60) + 1;
  *(_WORD *)(v1 + 60) = v4;
  if ( v4 & 1 )
  {
    *v3 |= 4u;
  }
  else
  {
    *v3 &= 0xFBu;
    if ( (signed int)*(_WORD *)(v1 + 48) <= 63 )
      ++*(_WORD *)(v1 + 48);
  }
  v5 = *(_WORD *)((char *)gSineTable + (2 * *(_WORD *)(v1 + 48) & 0x1FF));
  SetOamMatrix(18, 256 - v5 / 2, 0, 0, 256 - v5 / 2);
  return v7;
}
