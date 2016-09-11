int __fastcall sub_80884AC(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v4000010 = *(_WORD *)(a1 + 10);
  v4000012 = *(_WORD *)(a1 + 12);
  StoreWordInTwoHalfwords(a1 + 34, dword_300177C);
  SetVBlankCallback((int)sub_80886B0);
  ++*(_WORD *)(v1 + 8);
  return v3;
}
