int __fastcall sub_8085DF4(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  ++*(_WORD *)(a1 + 8);
  *(_WORD *)(v1 + 20) = (unsigned __int8)sub_808604C(*(_WORD *)(a1 + 10), *(_WORD *)(v1 + 12), *(_WORD *)(v1 + 14), 1);
  *(_WORD *)(v1 + 22) = (unsigned __int8)sub_8086430(*(_WORD *)(v1 + 16), *(_WORD *)(v1 + 18));
  return v3;
}
