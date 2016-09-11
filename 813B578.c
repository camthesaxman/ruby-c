int __fastcall sub_813B578(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v2; // r6@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 36 * (v201FE00 + 6 + v201FE02) + 33718912;
  MenuZeroFillWindowRect(0x14u, 8u, 0x1Au, 0xDu);
  if ( sub_80A9424(*(_WORD *)(v2 + 32), 1u) << 24 )
  {
    DisplayItemMessageOnField(v1, (int)&gUnknown_0840FEF6, (int)sub_813B758, 0);
    sub_80A2B40(v2);
    sub_813AF78();
    --v201FE03;
    if ( v201FE03 < v201FE01 + v201FE02 && v201FE02 )
      --v201FE02;
    sub_813A240(v1);
  }
  else
  {
    DisplayItemMessageOnField(v1, (int)&gUnknown_0840FEE3, (int)sub_813B758, 0);
  }
  return v4;
}
