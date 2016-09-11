int __fastcall sub_80E1CB4(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) += word_3004B00[0];
  *(_WORD *)(a1 + 34) += word_3004B02;
  *(_WORD *)(a1 + 46) = word_3004B04;
  if ( (unsigned __int8)battle_side_get_owner(v202F7C8) )
  {
    *(_WORD *)(v1 + 48) = -word_3004B06;
    *(_WORD *)(v1 + 54) = 1;
  }
  else
  {
    *(_WORD *)(v1 + 48) = word_3004B06;
    *(_WORD *)(v1 + 54) = 0;
    StartSpriteAnim(v1, 1);
  }
  *(_WORD *)(v1 + 52) = word_3004B08;
  *(_DWORD *)(v1 + 28) = sub_80E1D20;
  call_via_r1(v1, sub_80E1D20);
  return v3;
}
