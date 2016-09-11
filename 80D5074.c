int __fastcall sub_80D5074(int a1)
{
  int v1; // r4@1
  __int16 *v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8078650(a1);
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    v2 = word_3004B00;
    *(_WORD *)(v1 + 32) -= word_3004B00[0];
  }
  else
  {
    v2 = word_3004B00;
    *(_WORD *)(v1 + 32) += word_3004B00[0];
    *(_BYTE *)(v1 + 67) = 8;
  }
  *(_WORD *)(v1 + 34) += v2[1];
  *(_WORD *)(v1 + 46) = v2[2];
  *(_WORD *)(v1 + 48) = v2[3];
  *(_WORD *)(v1 + 50) = v2[4];
  *(_WORD *)(v1 + 52) = v2[5];
  *(_WORD *)(v1 + 54) = v2[6];
  *(_WORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 28) = sub_80D50E8;
  return v4;
}
