int __fastcall sub_80D51A8(int a1)
{
  int v1; // r6@1
  int v2; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = battle_side_get_owner(v202F7C8);
  if ( v2 << 24 == battle_side_get_owner(v202F7C9) << 24
    && (v202F7C8 == (unsigned __int8)battle_get_side_with_given_state(2u)
     || v202F7C8 == (unsigned __int8)battle_get_side_with_given_state(3u)) )
  {
    word_3004B04 = -word_3004B04;
  }
  *(_DWORD *)(v1 + 28) = sub_8079534;
  call_via_r1(v1, sub_8079534);
  return v4;
}
