int __fastcall sub_80C3630(int a1)
{
  int v1; // r2@1
  signed int v2; // r4@1
  signed int v3; // r5@1
  _WORD *v4; // r2@1
  int v6; // [sp+10h] [bp-4h]@0

  v1 = *(_WORD *)(a1 + 58) + *(_WORD *)(a1 + 60);
  *(_WORD *)(a1 + 32) -= v1 << 16 >> 24;
  *(_WORD *)(a1 + 60) = (unsigned __int8)v1;
  v2 = 0;
  v3 = 64;
  v4 = (_WORD *)(a1 + 46);
  do
  {
    *(_WORD *)&gSprites[68 * *v4 + 32] = *(_WORD *)(a1 + 36) + *(_WORD *)(a1 + 32) + v3;
    v3 += 64;
    ++v4;
    ++v2;
  }
  while ( v2 <= 2 );
  if ( *(_WORD *)(a1 + 32) + (signed int)*(_WORD *)(a1 + 36) < -224 )
    sub_80C3564(a1);
  return v6;
}
