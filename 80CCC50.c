int __fastcall sub_80CCC50(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) = word_3004B04;
  if ( battle_side_get_owner(v202F7C8) << 24 )
    v2 = *(_WORD *)(v1 + 32) - word_3004B00[0];
  else
    v2 = word_3004B00[0] + *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 32) = v2;
  StartSpriteAnim(v1, word_3004B0A);
  *(_WORD *)(v1 + 48) = -word_3004B06;
  *(_WORD *)(v1 + 34) += word_3004B02;
  *(_WORD *)(v1 + 52) = word_3004B08;
  *(_DWORD *)(v1 + 28) = sub_80CCCB4;
  call_via_r1(v1, sub_80CCCB4);
  return v4;
}
