int __fastcall sub_80786EC(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 48) = *(_WORD *)(a1 + 32);
  *(_WORD *)(a1 + 52) = *(_WORD *)(a1 + 34);
  obj_translate_based_on_private_1_2_3_4();
  *(_WORD *)(v1 + 58) = 0x8000 / *(_WORD *)(v1 + 46);
  *(_WORD *)(v1 + 60) = 0;
  return v3;
}
