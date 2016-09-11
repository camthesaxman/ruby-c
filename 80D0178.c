int __fastcall sub_80D0178(int a1)
{
  int v1; // r5@1
  signed __int16 v2; // r7@1
  signed __int16 v3; // r4@1
  signed __int16 v4; // r8@1
  signed __int16 v5; // r6@1
  int v7; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 32;
  v3 = -32;
  v4 = 16;
  v5 = -16;
  if ( word_3004B00[0] )
  {
    v2 = -32;
    v3 = 32;
    v4 = -16;
    v5 = 16;
    StartSpriteAnim(a1, 1);
  }
  *(_WORD *)(v1 + 32) += v2;
  *(_WORD *)(v1 + 34) += v3;
  *(_WORD *)(v1 + 46) = 6;
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u) + v4;
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u) + v5;
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)sub_80D020C);
  return v7;
}
