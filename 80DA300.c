int __fastcall sub_80DA300(int a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 1);
  *(_WORD *)(v1 + 46) = word_3004B04;
  *(_WORD *)(v1 + 48) = word_3004B06;
  *(_DWORD *)(v1 + 28) = sub_80DA348;
  v2 = obj_id_for_side_relative_to_move(0);
  gSprites[68 * v2 + 62] |= 4u;
  return v4;
}
