int __fastcall sub_811B5B0(int a1)
{
  int v1; // r4@1
  int v3; // [sp+0h] [bp-14h]@1
  int v4; // [sp+4h] [bp-10h]@1
  int v5; // [sp+8h] [bp-Ch]@1

  v1 = a1;
  sub_811D6A8(&v4, &v5);
  CpuSet(&gUnknown_083FC108, v5, 32);
  v3 = 0;
  CpuSet(&v3, v4, 83886592);
  LoadPalette((int)&gFieldEffectObjectPalette10, 240, 32);
  ++*(_WORD *)(v1 + 8);
  return 0;
}
