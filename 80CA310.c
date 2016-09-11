int __fastcall ItemUseInBattle_StatIncrease(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r4@1
  int *v3; // r1@3
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(2 * v2024E6C + 0x2024A6A);
  MenuZeroFillWindowRect(0, 0xDu, 0xDu, 0x14u);
  if ( (unsigned __int8)ExecuteTableBasedItemEffect_((int)&dword_3004360[25 * v2], v203855E, v2, 0) )
  {
    DisplayItemMessageOnField(v1, &gUnknown_0840EF85, sub_80A5C48, 1);
  }
  else
  {
    v3 = &dword_3004B20[10 * v1];
    *v3 = (int)sub_80CA2BC;
    *((_WORD *)v3 + 19) = 0;
  }
  return v5;
}
