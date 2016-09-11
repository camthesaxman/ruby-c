int __fastcall ether_effect_related_2(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = (unsigned __int8)a1;
  sub_8072DEC(a1);
  MenuZeroFillWindowRect(19, 10, 29, 19);
  v2 = sub_806D5A4();
  HIWORD(dword_3004B20[10 * v1 + 7]) = (unsigned __int8)GetMenuCursorPos(v2);
  ether_effect_related(v1);
  return v4;
}
