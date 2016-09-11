int __fastcall sub_8083D70(int a1, int a2, int a3)
{
  unsigned __int16 v3; // r0@1
  int v4; // r4@1
  int v5; // r5@1
  int v7; // [sp+0h] [bp-44h]@1

  v3 = GetMonData((int)dword_3004360, 11, a3);
  v4 = v3;
  v5 = (unsigned __int16)sub_8041870(v3);
  StringCopy(&v7, &gSpeciesNames[11 * v4]);
  StringAppend(&v7, &gUnknown_0839B24D);
  StringAppend(&v7, &gSpeciesNames[11 * v5]);
  StringAppend(&v7, &gUnknown_0839B255);
  MenuZeroFillScreen();
  MenuDrawTextWindow(0, 0xEu);
  MenuPrint((int)&v7, 1, 0xFu);
  dword_3004AE8 = (int)sub_8083D4C;
  return 0;
}
