int __fastcall sub_8089BDC(unsigned __int8 a1, unsigned __int8 a2, int a3, unsigned __int8 a4, int a5, int a6, unsigned __int8 a7)
{
  unsigned __int8 v7; // r5@1
  unsigned __int8 v8; // r6@1
  unsigned __int8 v9; // r8@1
  int v11; // [sp+18h] [bp-4h]@0

  v7 = a1;
  v8 = a2;
  v9 = a4;
  sub_806D538(5u, a7);
  MenuDrawTextWindow(v7, v8);
  PrintMenuItemsReordered(v7 + 1, v8 + 1, v9, a5, a6);
  return v11;
}
