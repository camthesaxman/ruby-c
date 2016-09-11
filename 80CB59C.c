int __fastcall sub_80CB59C(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
  {
    *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 1u);
    *(_WORD *)(v1 + 36) = word_3004B00[0];
    *(_WORD *)(v1 + 38) = word_3004B02;
    *(_BYTE *)(v1 + 67) = word_3004B04 + 30;
    StartSpriteAnim(v1, word_3004B06);
    *(_WORD *)(v1 + 50) = word_3004B08;
    ++*(_WORD *)(v1 + 46);
    if ( *(_WORD *)(v1 + 34) + (signed int)*(_WORD *)(v1 + 38) > 120 )
      *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 34) - 120 + *(_WORD *)(v1 + 38);
  }
  *(_DWORD *)(v1 + 28) = sub_80CB710;
  return v3;
}
