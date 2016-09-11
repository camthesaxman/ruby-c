int __fastcall sub_80A8530(int a1)
{
  int v1; // r4@1
  __int16 *v2; // r1@2
  int v3; // r0@2
  __int16 v4; // r2@4
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 62) |= 4u;
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    v2 = word_3004B00;
    v3 = -(unsigned __int16)word_3004B02;
  }
  else
  {
    v2 = word_3004B00;
    LOWORD(v3) = word_3004B02;
  }
  *(_WORD *)(v1 + 48) = v3;
  v4 = *v2;
  *(_WORD *)(v1 + 46) = *v2;
  *(_WORD *)(v1 + 50) = 0;
  *(_WORD *)(v1 + 52) = *(_BYTE *)(v202F7C8 + 0x2024BE0);
  *(_WORD *)(v1 + 54) = v4;
  oamt_set_x3A_32(v1, (int)sub_80A85A4);
  *(_DWORD *)(v1 + 28) = sub_8078458;
  return v6;
}
