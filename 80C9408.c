int __fastcall ItemUseOnFieldCB_Itemfinder(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (ItemfinderCheckForHiddenItems(v202E82C, a1) & 0xFF) == 1 )
    dword_3004B20[10 * v1] = (int)sub_80C9458;
  else
    DisplayItemMessageOnField(v1, &gUnknown_0840E9C8, sub_80C9520, 0);
  return v3;
}
