int __fastcall sub_80D0228(int a1)
{
  int v1; // r5@1
  signed __int16 v2; // r8@1
  signed __int16 v3; // r4@1
  signed __int16 v4; // r9@1
  signed __int16 v5; // r6@1
  __int16 v6; // r1@3
  int v8; // [sp+18h] [bp-4h]@0

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
    StartSpriteAnim(a1, word_3004B00[0]);
  }
  v6 = v2 + *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 32) = v6;
  *(_WORD *)(v1 + 34) += v3;
  *(_WORD *)(v1 + 46) = 6;
  *(_WORD *)(v1 + 48) = v6;
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u) + v4;
  *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u) + v5;
  obj_translate_based_on_private_1_2_3_4(v1);
  *(_WORD *)(v1 + 56) = word_3004B00[0];
  *(_WORD *)(v1 + 58) = *(_WORD *)(v1 + 46);
  *(_DWORD *)(v1 + 28) = sub_80D02D0;
  return v8;
}
