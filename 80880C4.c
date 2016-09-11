int __fastcall sub_80880C4(int a1, int a2, int a3)
{
  unsigned int v3; // r6@1
  unsigned int *v4; // r4@1
  int v5; // r2@1
  int v6; // r2@1

  v3 = v202FF84 & 0x80000000;
  v4 = &dword_3004360[25 * v202FF84];
  v202FF84 = GetMonData((int)v4, 11, a3);
  v202FF88 = GetMonData((int)v4, 1, v5);
  v202FF8C = GetMonData((int)v4, 0, v6);
  v202FF84 |= v3;
  FieldEffectStart(6u);
  FieldEffectActiveListRemove(0x3Bu);
  return 0;
}
