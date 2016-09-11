int __fastcall sub_80CB620(int a1)
{
  int v1; // r9@1
  int v2; // r5@1
  int v3; // r8@1
  signed int v4; // r4@1
  int v5; // ST00_4@1
  int v7; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  v3 = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  v4 = ((unsigned __int8)sub_8077ABC(v202F7C9, 2u) - v2) << 16;
  v5 = ((unsigned __int8)sub_8077ABC(v202F7C9, 3u) - v3) & 0xFFFF;
  *(_WORD *)(v1 + 32) = v2 + word_3004B00[0] * (v4 >> 16) / 100;
  *(_WORD *)(v1 + 34) = v3 + (signed __int16)v5 * word_3004B00[0] / 100;
  *(_WORD *)(v1 + 36) = word_3004B02;
  *(_WORD *)(v1 + 38) = word_3004B04;
  *(_BYTE *)(v1 + 67) = word_3004B06 + 30;
  StartSpriteAnim(v1, word_3004B08);
  *(_WORD *)(v1 + 50) = word_3004B0A;
  *(_DWORD *)(v1 + 28) = sub_80CB710;
  word_3000728 = *(_WORD *)(v1 + 32);
  word_300072A = *(_WORD *)(v1 + 34);
  word_300072C = HIWORD(v4);
  word_300072E = v5;
  return v7;
}
