int __fastcall sub_80CB768(int a1)
{
  int v1; // r6@1
  __int16 v2; // r0@3
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
  {
    *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u) + word_3004B00[0];
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 1u) + word_3004B02;
    *(_WORD *)(v1 + 48) = word_3004B04;
    *(_WORD *)(v1 + 50) = word_3004B06;
    *(_WORD *)(v1 + 52) = word_3004B08;
  }
  v2 = *(_WORD *)(v1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  *(_WORD *)(v1 + 36) = v2 * *(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 38) = sine(20 * *(_WORD *)(v1 + 46) & 0xFF, *(_WORD *)(v1 + 50));
  if ( *(_WORD *)(v1 + 46) > (signed int)*(_WORD *)(v1 + 52) )
    move_anim_8072740(v1);
  return v4;
}
