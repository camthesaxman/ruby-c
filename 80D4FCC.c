int __fastcall sub_80D4FCC(int a1)
{
  int v1; // r4@1
  __int16 *v2; // r1@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    *(_WORD *)(v1 + 32) -= word_3004B00[0];
    *(_WORD *)(v1 + 34) += word_3004B02;
    *(_WORD *)(v1 + 50) = word_3004B08;
    v2 = word_3004B00;
  }
  else
  {
    v2 = word_3004B00;
    *(_WORD *)(v1 + 32) += word_3004B00[0];
    *(_WORD *)(v1 + 34) += word_3004B02;
    *(_WORD *)(v1 + 50) = -word_3004B08;
  }
  *(_WORD *)(v1 + 48) = v2[2];
  *(_WORD *)(v1 + 54) = v2[3];
  *(_WORD *)(v1 + 52) = v2[5];
  *(_DWORD *)(v1 + 28) = sub_80D5038;
  return v4;
}
