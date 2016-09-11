int __fastcall sub_8088150(int a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 30) = v4000048;
  *(_WORD *)(a1 + 32) = v400004A;
  StoreWordInTwoHalfwords(a1 + 34, dword_300177C);
  *(_WORD *)(v1 + 10) = -3855;
  *(_WORD *)(v1 + 12) = 20561;
  *(_WORD *)(v1 + 14) = 63;
  *(_WORD *)(v1 + 16) = 62;
  v4000040 = -3855;
  v4000044 = *(_WORD *)(v1 + 12);
  v4000048 = *(_WORD *)(v1 + 14);
  v400004A = *(_WORD *)(v1 + 16);
  SetVBlankCallback((int)sub_80883DC);
  ++*(_WORD *)(v1 + 8);
  return v3;
}
