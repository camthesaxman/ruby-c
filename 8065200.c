int __fastcall DisplayMessageBox(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  LoadMessageBoxTiles(a1);
  DrawStandardMessageBox(v1);
  return v3;
}
