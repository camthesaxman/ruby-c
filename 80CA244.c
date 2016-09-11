int __fastcall ItemUseInBattle_PokeBall(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_803DD20() << 24 )
  {
    MenuZeroFillWindowRect(0, 0xDu, 0xDu, 0x14u);
    DisplayItemMessageOnField(v1, &gUnknown_0840EAF4, sub_80A5C48, 1);
  }
  else
  {
    sub_80A9538(v203855E, 1u);
    sub_80A7094(v1);
  }
  return v3;
}
