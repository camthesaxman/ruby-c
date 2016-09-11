int __fastcall fishD(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  v2 = sub_805A954(a1);
  MenuDisplayMessageBox(v2);
  ++*(_WORD *)(v1 + 8);
  return 0;
}
