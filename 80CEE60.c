int __fastcall sub_80CEE60(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  signed __int16 v3; // r2@3
  __int16 v4; // r1@5
  __int16 v5; // r0@5
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_8078650(a1);
  *(_WORD *)(v1 + 34) += 8;
  StartSpriteAnim(v1, word_3004B02);
  v2 = (unsigned __int8)IndexOfSpritePaletteTag(gUnknown_083D712C[6 * word_3004B04]);
  if ( v2 != 255 )
    *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF | 16 * v2;
  v3 = 32;
  if ( !word_3004B00[0] )
    v3 = -32;
  *(_WORD *)(v1 + 46) = 40;
  v4 = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 48) = v4;
  *(_WORD *)(v1 + 50) = v3 + v4;
  v5 = *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 52) = v5;
  *(_WORD *)(v1 + 54) = v5 - 40;
  obj_translate_based_on_private_1_2_3_4(v1);
  *(_WORD *)(v1 + 56) = word_3004B06;
  *(_DWORD *)(v1 + 28) = sub_80CEEE8;
  return v7;
}
