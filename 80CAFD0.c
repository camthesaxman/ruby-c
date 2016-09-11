int __fastcall sub_80CAFD0(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@4
  int v3; // r4@6
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 1);
  if ( battle_side_get_owner(v202F7C8) << 24 )
    word_3004B04 = -word_3004B04;
  *(_WORD *)(v1 + 46) = word_3004B08;
  if ( word_3004B0C )
  {
    sub_807A3FC(v202F7C9, 1, (_WORD *)(v1 + 50), (_WORD *)(v1 + 54));
    *(_WORD *)(v1 + 50) += word_3004B04;
    v2 = word_3004B06 + *(_WORD *)(v1 + 54);
  }
  else
  {
    *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u) + word_3004B04;
    v2 = (unsigned __int8)sub_8077ABC(v202F7C9, 3u) + word_3004B06;
  }
  *(_WORD *)(v1 + 54) = v2;
  *(_WORD *)(v1 + 56) = word_3004B0A;
  sub_80786EC(v1);
  v3 = battle_side_get_owner(v202F7C8);
  *(_WORD *)(v1 + 46) = v3 << 24 == battle_side_get_owner(v202F7C9) << 24;
  *(_DWORD *)(v1 + 28) = sub_80CB09C;
  return v5;
}
