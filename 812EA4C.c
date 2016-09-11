int __fastcall sub_812EA4C(int a1)
{
  int v1; // r5@1
  __int16 v2; // r1@4
  int v3; // r1@5
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    v3 = *(_WORD *)(a1 + 48);
    *(_WORD *)(a1 + 36) = v3 << 16 >> 24;
    *(_WORD *)(a1 + 38) += *(_WORD *)(a1 + 50) << 16 >> 24;
    if ( !*(_WORD *)(a1 + 54)
      && !((unsigned __int8)((*(_WORD *)(a1 + 38) + (signed int)*(_WORD *)(a1 + 52) < 0) ^ __OFADD__(
                                                                                             *(_WORD *)(a1 + 38),
                                                                                             *(_WORD *)(a1 + 52))) | (*(_WORD *)(a1 + 38) + *(_WORD *)(a1 + 52) == 0)) )
    {
      *(_WORD *)(a1 + 54) = 1;
      *(_WORD *)(a1 + 50) = 2 * (-*(_WORD *)(a1 + 50) / 3);
    }
    *(_WORD *)(a1 + 48) = v3 + 192;
    *(_WORD *)(a1 + 50) += 128;
    if ( *(_BYTE *)(a1 + 63) & 0x10 )
      move_anim_8072740(a1);
  }
  else
  {
    if ( !word_3004B04 )
    {
      *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
      *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
    }
    *(_WORD *)(v1 + 32) += word_3004B00[0];
    v2 = word_3004B02;
    *(_WORD *)(v1 + 34) += word_3004B02;
    *(_WORD *)(v1 + 48) = 128;
    *(_WORD *)(v1 + 50) = 768;
    *(_WORD *)(v1 + 52) = v2;
    ++*(_WORD *)(v1 + 46);
  }
  return v5;
}
