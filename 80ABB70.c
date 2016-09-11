int __fastcall sub_80ABB70(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r0@4
  int v4; // [sp+10h] [bp-4h]@0

  v1 = a1;
  word_30042A0 = 0;
  word_3004280 = 0;
  sub_80B0D7C();
  v40000D4 = 33745608;
  v40000D8 = 33653252;
  v40000DC = -2080374528;
  if ( sub_80AF59C(v2038695) << 24 )
    StringCopy((_BYTE *)0x20238CC, "»ääÙÕà");
  else
    StringCopy((_BYTE *)0x20238CC, "»ääÙÕà");
  v2 = sub_80AE020(33700044, v2019205 + 1);
  sub_80AF138(v2);
  StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)0x20238CC);
  sub_8002EB0(33745160, (int)&gStringVar4, 776, 1, 0xFu);
  dword_3004B20[10 * v1] = (int)sub_80ABC3C;
  return v4;
}
