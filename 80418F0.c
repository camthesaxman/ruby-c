int __fastcall sub_80418F0(int a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  *(_WORD *)(a1 + 280) = (unsigned __int16)Random() % 0xFFFEu + 1;
  FlagSet(134);
  return v2;
}
