int __fastcall sub_806F614(unsigned __int8 a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(23, 8, 29, 13);
  StringCopy(&gStringVar2, &gMoveNames[13 * v201C008]);
  StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)"Нигд");
  sub_806E834((int)&gStringVar4, 1u);
  dword_3004B20[10 * v1] = (int)sub_806F67C;
  return v3;
}
