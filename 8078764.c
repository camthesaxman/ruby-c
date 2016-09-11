int __fastcall sub_8078764(int a1, int a2)
{
  int v2; // r5@1
  int v4; // [sp+8h] [bp-4h]@0

  v2 = a1;
  if ( !(a2 << 24) )
  {
    *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077EE4(v202F7C9, 0);
    *(_WORD *)(v2 + 34) = (unsigned __int8)sub_8077EE4(v202F7C9, 1);
  }
  sub_807867C(v2, word_3004B00[0]);
  *(_WORD *)(v2 + 34) += word_3004B02;
  return v4;
}
