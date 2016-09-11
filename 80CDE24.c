int __fastcall sub_80CDE24(int a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u) - 48 + word_3004B00[0];
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  StartSpriteAnim(v1, 1);
  *(_WORD *)(v1 + 46) = 0;
  *(_WORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 28) = sub_80CDEC0;
  return v3;
}
