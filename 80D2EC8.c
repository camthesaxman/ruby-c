int __fastcall sub_80D2EC8(int a1)
{
  int v1; // r6@1
  int v2; // r4@3
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
  {
    *(_WORD *)(a1 + 32) = 120;
    *(_WORD *)(a1 + 34) = word_3004B00[0] / 2 - 15;
    StartSpriteAnim(a1, word_3004B02);
    *(_WORD *)(v1 + 56) = 120;
    *(_WORD *)(v1 + 52) = word_3004B04;
  }
  *(_WORD *)(v1 + 48) = ++*(_WORD *)(v1 + 46) / 2;
  v2 = 3 * *(_WORD *)(v1 + 46) + *(_WORD *)(v1 + 52);
  *(_WORD *)(v1 + 58) = (*(_WORD *)(v1 + 58) + 10) & 0xFF;
  *(_WORD *)(v1 + 36) = cosine((unsigned __int8)v2, 100);
  LOWORD(v2) = sine((unsigned __int8)v2, 10);
  *(_WORD *)(v1 + 38) = cosine(*(_WORD *)(v1 + 58), 4) + v2 + *(_WORD *)(v1 + 48);
  if ( *(_WORD *)(v1 + 46) > (signed int)*(_WORD *)(v1 + 56) )
  {
    *(_DWORD *)(v1 + 28) = sub_80D2F80;
    *(_WORD *)(v1 + 46) = 0;
    oamt_add_pos2_onto_pos1(v1);
    *(_WORD *)(v1 + 50) = 5;
    *(_WORD *)(v1 + 54) = 0;
    *(_WORD *)(v1 + 52) = 0;
    StartSpriteAffineAnim(v1, 1);
  }
  return v4;
}
