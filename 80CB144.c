int __fastcall sub_80CB144(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(sub_8076BE0() << 24) && (unsigned __int8)battle_type_is_double() == 1 )
    sub_807A3FC(v202F7C9, 1, (_WORD *)(v1 + 32), (_WORD *)(v1 + 34));
  *(_WORD *)(v1 + 34) += 32;
  *(_WORD *)(v1 + 46) = word_3004B00[0];
  *(_WORD *)(v1 + 48) = word_3004B02;
  *(_WORD *)(v1 + 50) = word_3004B04;
  *(_WORD *)(v1 + 52) = word_3004B06;
  *(_WORD *)(v1 + 54) = word_3004B08;
  *(_DWORD *)(v1 + 28) = sub_80CB1A4;
  return v3;
}
