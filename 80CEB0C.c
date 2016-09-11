int __fastcall sub_80CEB0C(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  signed __int16 v3; // r6@4
  int v4; // r3@4
  __int16 v5; // r0@6
  __int16 v6; // r1@6
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  sub_8078650(a1);
  StartSpriteAnim(v1, word_3004B00[0]);
  v2 = (unsigned __int8)IndexOfSpritePaletteTag(gUnknown_083D712C[6 * word_3004B02]);
  if ( v2 != 255 )
    *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF | 16 * v2;
  *(_WORD *)(v1 + 48) = word_3004B02;
  *(_WORD *)(v1 + 50) = 0;
  *(_WORD *)(v1 + 52) = word_3004B04;
  if ( sub_8076BE0() << 24 )
  {
    v3 = 48;
    LOWORD(v4) = 40;
  }
  else
  {
    v3 = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
    v4 = sub_8077ABC(v202F7C9, 3u) & 0xFF;
  }
  v5 = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 54) = 16 * v5;
  v6 = *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 56) = 16 * v6;
  sub_80CEBC4((signed __int16)(v3 - v5), (signed __int16)(v4 - v6), v1 + 58, v1 + 60);
  *(_DWORD *)(v1 + 28) = sub_80CEC1C;
  return v8;
}
