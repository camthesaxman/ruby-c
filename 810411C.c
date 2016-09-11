int __fastcall sub_810411C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 12) = (unsigned __int8)sub_8105B1C(((*(_WORD *)(a1 + 10) << 19) + 1310720) >> 16, 20);
  ++*(_WORD *)(v1 + 8);
  return v3;
}
