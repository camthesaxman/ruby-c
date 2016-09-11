int __fastcall sub_813B510(int a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8072DEC(a1);
  StringCopy(&gStringVar1, "гип©");
  MenuPrint((int)&gUnknown_0840633A, 1, 3u);
  DisplayItemMessageOnField(v1, (int)&gUnknown_0840FEBB, (int)sub_813B554, 0);
  return v3;
}
