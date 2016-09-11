int __fastcall sub_80CF3C4(int a1)
{
  int v1; // r5@1
  __int16 v2; // r6@1
  __int16 *v3; // r1@2
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  v2 = *(_BYTE *)(v202F7C9 + 0x2024BE0);
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    *(_WORD *)(v1 + 32) -= word_3004B00[0];
    v3 = word_3004B00;
  }
  else
  {
    v3 = word_3004B00;
    *(_WORD *)(v1 + 32) += word_3004B00[0];
  }
  *(_WORD *)(v1 + 34) += v3[1];
  *(_WORD *)(v1 + 46) = v3[2];
  *(_WORD *)(v1 + 48) = v3[3];
  *(_WORD *)(v1 + 50) = v2;
  *(_DWORD *)(v1 + 28) = sub_80CF374;
  *(_BYTE *)(v1 + 62) |= 4u;
  return v5;
}
