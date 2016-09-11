int __fastcall sub_80DC9A0(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( sub_8076BE0() << 24 )
    word_3004B04 /= 2;
  sub_80787B0(v1, 1);
  *(_WORD *)(v1 + 46) = word_3004B04;
  *(_WORD *)(v1 + 48) = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
  if ( word_3004B08 )
  {
    sub_807A3FC(v202F7C9, 1, (_WORD *)(v1 + 50), (_WORD *)(v1 + 54));
  }
  else
  {
    *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
    *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  }
  sub_8078BD4(v1);
  *(_WORD *)(v1 + 56) = word_3004B06;
  *(_DWORD *)(v1 + 28) = sub_80DCA38;
  return v3;
}
