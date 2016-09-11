int __fastcall sub_811D0F0(int a1)
{
  int v1; // r4@1
  __int16 v3; // [sp+0h] [bp-14h]@1
  int v4; // [sp+4h] [bp-10h]@1
  int v5; // [sp+8h] [bp-Ch]@1

  v1 = a1;
  sub_811D6A8(&v4, &v5);
  CpuSet(&gUnknown_083FD528, v5, 16);
  v3 = -4096;
  CpuSet(&v3, v4, 16778240);
  LoadPalette((int)&gFieldEffectObjectPalette10, 240, 32);
  ++*(_WORD *)(v1 + 8);
  return 0;
}
