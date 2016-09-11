int __fastcall sub_80CA710(int a1)
{
  int v1; // r4@1
  int v2; // r0@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) += word_3004B00[0];
  *(_WORD *)(a1 + 34) += word_3004B02;
  *(_WORD *)(a1 + 46) = word_3004B04;
  *(_WORD *)(a1 + 48) = word_3004B06;
  if ( battle_side_get_owner(v202F7C8) << 24 )
    v2 = -(unsigned __int16)word_3004B08;
  else
    LOWORD(v2) = word_3004B08;
  *(_WORD *)(v1 + 52) = v2;
  *(_WORD *)(v1 + 54) = word_3004B0A;
  *(_DWORD *)(v1 + 28) = sub_80CA768;
  return v4;
}
