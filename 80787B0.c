int __fastcall sub_80787B0(int a1, int a2)
{
  int v2; // r5@1
  unsigned __int8 v3; // r0@2
  int v4; // r1@2
  int v6; // [sp+8h] [bp-4h]@0

  v2 = a1;
  if ( a2 << 24 )
  {
    *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077EE4(v202F7C8, 2);
    v3 = v202F7C8;
    v4 = 3;
  }
  else
  {
    *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077EE4(v202F7C8, 0);
    v3 = v202F7C8;
    v4 = 1;
  }
  *(_WORD *)(v2 + 34) = (unsigned __int8)sub_8077EE4(v3, v4);
  sub_807867C(v2, word_3004B00[0]);
  *(_WORD *)(v2 + 34) += word_3004B02;
  return v6;
}
