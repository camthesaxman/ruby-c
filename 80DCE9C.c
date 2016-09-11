int __fastcall sub_80DCE9C(int a1)
{
  int v1; // r5@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( word_3004B06 )
    sub_807A3FC(v202F7C9, 0, (_WORD *)(a1 + 32), (_WORD *)(a1 + 34));
  *(_WORD *)(v1 + 32) += word_3004B00[0];
  *(_WORD *)(v1 + 34) += 14;
  StartSpriteAnim(v1, word_3004B02);
  AnimateSprite(v1);
  *(_WORD *)(v1 + 46) = 0;
  *(_WORD *)(v1 + 48) = 0;
  *(_WORD *)(v1 + 50) = 4;
  *(_WORD *)(v1 + 52) = 16;
  *(_WORD *)(v1 + 54) = -70;
  *(_WORD *)(v1 + 56) = word_3004B04;
  oamt_set_x3A_32(v1, (int)sub_80DCF1C);
  *(_DWORD *)(v1 + 28) = sub_8078278;
  call_via_r1(v1, sub_8078278);
  return v3;
}
