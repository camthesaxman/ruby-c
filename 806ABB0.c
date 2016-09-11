int __fastcall sub_806ABB0(int a1)
{
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  RunTasks(a1);
  AnimateSprites();
  v1 = BuildOamBuffer();
  UpdatePaletteFade(v1);
  return v3;
}
