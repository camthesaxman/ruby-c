int __fastcall sub_80ADB88(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r4@1
  int v4; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = *(_BYTE *)(28 * v2038695 + 0x201927A);
  sub_80AF138(28 * v2038695 + 33657440);
  StringCopy(&gStringVar1, (_BYTE *)((v2038695 << 6) + 33785202));
  StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)*(&gUnknown_083CB2F0 + v2));
  sub_8002EB0(33745160, (int)&gStringVar4, 776, 1, 0xFu);
  dword_3004B20[10 * v1] = (int)sub_80ADC10;
  return v4;
}
