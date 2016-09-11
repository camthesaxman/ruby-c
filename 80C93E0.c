int __fastcall ItemUseOutOfBattle_Itemfinder(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sav12_xor_increment(0x27u);
  dword_3005D00 = (int)ItemUseOnFieldCB_Itemfinder;
  SetUpItemUseOnFieldCallback(v1);
  return v3;
}
