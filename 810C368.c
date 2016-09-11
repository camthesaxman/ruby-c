int __fastcall sub_810C368(unsigned __int8 a1)
{
  int v1; // r6@1
  char v2; // r4@1
  char v3; // r4@3
  int v5; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( v2039244 > 1u )
    v2 = 2;
  sub_80F98A4(0);
  sub_80F98A4(1u);
  BasicInitMenuWindow((int)&gWindowConfig_81E6E50);
  MenuDrawTextWindow(7u, v2 + 4);
  v3 = v2 + 5;
  PrintMenuItemsReordered(8, v3, v203924C, (int)&gUnknown_083F7EF4, dword_3000758);
  InitMenu(0, 8, v3, v203924C, 0, 5);
  v203855E = v2039248 + v2039249;
  dword_3004B20[10 * v1] = (int)sub_810C40C;
  return v5;
}
