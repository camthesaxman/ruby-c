int __fastcall sub_80CCD24(int a1)
{
  int v1; // r5@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( sub_8076BE0() << 24 )
    word_3004B02 += 8;
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077EE4(v202F7C8, 0) + word_3004B00[0];
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077EE4(v202F7C8, 1) + word_3004B02;
  if ( battle_side_get_owner(v202F7C8) << 24 && !(sub_8076BE0() << 24) )
    *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * (sub_8079ED4(v202F7C8) & 3);
  else
    *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * ((sub_8079ED4(v202F7C8) + 1) & 3);
  *(_WORD *)(v1 + 46) = word_3004B04;
  *(_WORD *)(v1 + 50) = (16 * IndexOfSpritePaletteTag(0x2828u) & 0xFFF) + 256;
  *(_WORD *)(v1 + 60) = 16;
  v4000050 = 16192;
  v4000052 = (*(_WORD *)(v1 + 60) << 8) | (16 - *(_WORD *)(v1 + 60));
  *(_DWORD *)(v1 + 28) = sub_80CCE0C;
  return v3;
}
