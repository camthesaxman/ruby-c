int __fastcall sub_813AB28(_WORD *a1, unsigned __int8 a2, int a3)
{
  int v3; // r4@1
  unsigned __int8 v4; // r5@1
  int v6; // [sp+8h] [bp-4h]@0

  v3 = a3;
  v4 = a2;
  itemid_copy_name(*a1, &gStringVar1);
  if ( v3 )
    MenuPrint((int)&gUnknown_0840631E, 16, v4);
  else
    MenuPrint((int)&gUnknown_08406318, 16, v4);
  return v6;
}
