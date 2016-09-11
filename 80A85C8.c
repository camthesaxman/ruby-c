int __fastcall sub_80A85C8(int a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  __int16 v3; // r2@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 62) |= 4u;
  v2 = obj_id_for_side_relative_to_move((unsigned __int8)word_3004B04);
  v3 = word_3004B00[0];
  *(_WORD *)(v1 + 46) = word_3004B00[0];
  *(_WORD *)(v1 + 48) = 0;
  *(_WORD *)(v1 + 50) = word_3004B02;
  *(_WORD *)(v1 + 52) = v2;
  *(_WORD *)(v1 + 54) = v3;
  oamt_set_x3A_32(v1, (int)sub_80A8614);
  *(_DWORD *)(v1 + 28) = sub_8078458;
  return v5;
}
