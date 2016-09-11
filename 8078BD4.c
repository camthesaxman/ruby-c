int __fastcall sub_8078BD4(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 50) - *(_WORD *)(a1 + 48);
  if ( v2 < 0 )
    v2 = -v2;
  *(_WORD *)(v1 + 46) = (v2 << 8) / *(_WORD *)(v1 + 46);
  obj_translate_based_on_private_1_2_3_4(v1);
  return v4;
}
