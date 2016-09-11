int __fastcall sub_80C61B0(int a1)
{
  int v2; // [sp+Ch] [bp-4h]@0

  v3007FF8 |= 2u;
  v4000004 |= 0x10u;
  v4000200 |= 2u;
  word_300178C |= 2u;
  SetHBlankCallback(a1);
  return v2;
}
