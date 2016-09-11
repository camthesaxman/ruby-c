int __fastcall sub_80D61C8(int a1)
{
  int v1; // r4@1
  __int16 *v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    v2 = word_3004B00;
    *(_WORD *)(v1 + 32) -= word_3004B00[0];
  }
  else
  {
    *(_WORD *)(v1 + 32) += word_3004B00[0];
    v2 = word_3004B00;
  }
  *(_WORD *)(v1 + 34) += v2[1];
  *(_DWORD *)(v1 + 28) = sub_80D6218;
  return v4;
}
