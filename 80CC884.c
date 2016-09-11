int __fastcall sub_80CC884(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !(battle_side_get_owner(v202F7C8) << 24) )
    StartSpriteAnim(v1, 1);
  *(_DWORD *)(v1 + 28) = sub_80CC810;
  sub_807867C(v1, word_3004B00[0]);
  *(_WORD *)(v1 + 34) += word_3004B02;
  return v3;
}
