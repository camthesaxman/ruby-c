int __fastcall sub_813B294(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
  StringCopy(&gStringVar1, (_BYTE *)(36 * (v201FE00 + 6 + v201FE02) + 33718930));
  sub_814A568(&gStringVar1);
  StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)"ัÜี่");
  DisplayItemMessageOnField(v1, (int)gStringVar4, (int)sub_813B348, 0);
  return v3;
}
