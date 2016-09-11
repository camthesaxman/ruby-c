int sub_800D74C()
{
  int v0; // r0@1
  int v2; // [sp+4h] [bp-4h]@0

  SetTextWindowBaseTileNum(18);
  LoadTextWindowGraphics_OverridePalSlot(&unk_3004210, 1);
  SetTextWindowBaseTileNum(34);
  LoadTextWindowGraphics_OverridePalSlot(&unk_3004210, 1);
  v202EB80 = 32736;
  v202EB82 = 9513;
  v202EB84 = 0x7FFF;
  v202EB86 = 26458;
  v0 = CpuSet(33745792, 33746816, 4);
  sub_8032A38(v0);
  return v2;
}
