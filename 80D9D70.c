int __fastcall sub_80D9D70(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !word_3004B06 )
    StartSpriteAnim(a1, 2);
  sub_80787B0(v1, 1);
  *(_WORD *)(v1 + 46) = word_3004B04;
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  *(_WORD *)(v1 + 56) = -30;
  sub_80786EC(v1);
  *(_DWORD *)(v1 + 28) = sub_80D9DD4;
  return v3;
}
