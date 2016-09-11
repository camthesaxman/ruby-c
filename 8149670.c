int __fastcall sub_8149670(int a1)
{
  int v1; // r4@1
  signed int v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 34) > 87 )
  {
    DestroySprite(a1);
  }
  else
  {
    *(_WORD *)(a1 + 34) = *(_WORD *)(a1 + 60) * (signed int)*(_WORD *)(a1 + 60) / 5 + 8;
    v2 = (signed __int16)sine(*(_WORD *)(a1 + 58) & 0xFF, *(_WORD *)(a1 + 56));
    if ( (signed __int16)v2 < 0 )
      v2 += 3;
    *(_WORD *)(v1 + 38) = v2 >> 2;
    *(_WORD *)(v1 + 36) = cosine(*(_WORD *)(v1 + 58) & 0xFF, *(_WORD *)(v1 + 56));
    *(_WORD *)(v1 + 56) = sine(4 * *(_WORD *)(v1 + 60) & 0xFF, 40) + 8;
    ++*(_WORD *)(v1 + 60);
  }
  return v4;
}
