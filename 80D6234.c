int __fastcall sub_80D6234(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( battle_side_get_owner(v202F7C8) << 24 )
    *(_WORD *)(v1 + 32) -= word_3004B00[0];
  else
    *(_WORD *)(v1 + 32) += word_3004B00[0];
  *(_DWORD *)(v1 + 28) = sub_80D6278;
  return v3;
}
