int __fastcall ItemUseOutOfBattle_TMHM(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(0, 0xDu, 0xDu, 0x14u);
  if ( v203855E <= 0x152u )
    DisplayItemMessageOnField(v1, "¼ããèÙØ", sub_80C9EE4, 1);
  else
    DisplayItemMessageOnField(v1, "¼ããèÙØ", sub_80C9EE4, 1);
  return v3;
}
