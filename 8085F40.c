int __fastcall sub_8085F40(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  ++*(_WORD *)(a1 + 8);
  *(_WORD *)(a1 + 20) = (unsigned __int8)sub_808604C(*(_WORD *)(a1 + 10), *(_WORD *)(a1 + 12), *(_WORD *)(a1 + 14), 0);
  v1 = (unsigned __int8)FindTaskIdByFunc((int)sub_8085F10);
  sub_80864CC(v1, 120, 24, 0);
  sub_80864CC(v1, 40, 8, 1);
  sub_80864CC(v1, 72, 8, 1);
  sub_80864CC(v1, 168, 8, 1);
  sub_80864CC(v1, 200, 8, 1);
  return v3;
}
