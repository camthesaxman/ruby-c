int __fastcall sub_80416A0(int a1, unsigned __int8 a2)
{
  int v2; // r5@1
  int v3; // r8@1
  unsigned int *v4; // r4@1
  int v5; // r6@1

  v2 = a1;
  v3 = 4 * a2;
  v4 = (unsigned int *)(a1 + 80 * a2);
  v5 = (unsigned __int8)GetLevelFromBoxMonExp(a1 + 80 * a2);
  return ((unsigned __int8)sub_8041664(v4, *(_DWORD *)(v2 + 272 + v3)) - v5) & 0xFF;
}
