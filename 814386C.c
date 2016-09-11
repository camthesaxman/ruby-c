int __fastcall sub_814386C(int a1)
{
  int v1; // r5@1
  int v2; // r4@3
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 38) <= 120 )
  {
    *(_WORD *)(a1 + 38) += 1 + *(_WORD *)(a1 + 48);
    v2 = *(_WORD *)(a1 + 46) & 0xFF;
    *(_WORD *)(a1 + 36) = (signed int)(((Random() & 3) + 8) * gSineTable[v2]) / 256;
    *(_WORD *)(v1 + 46) += 4;
  }
  else
  {
    DestroySprite(a1);
  }
  return v4;
}
