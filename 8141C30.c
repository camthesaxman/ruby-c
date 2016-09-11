int __fastcall sub_8141C30(int a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  unsigned __int8 v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 0);
  *(_WORD *)(v1 + 46) = 30;
  v2 = battle_get_side_with_given_state(1u);
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v2, 0) + word_3004B04;
  v3 = battle_get_side_with_given_state(1u);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v3, 1u) + word_3004B06;
  *(_WORD *)(v1 + 56) = -32;
  sub_80786EC(v1);
  StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v202F7C8 + 0x2024BE0)], 1);
  *(_DWORD *)(v1 + 28) = sub_8141CBC;
  return v5;
}
