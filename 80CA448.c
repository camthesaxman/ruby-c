int __fastcall unref_sub_80CA448(unsigned __int8 a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(0, 0xDu, 0xDu, 0x14u);
  if ( ExecuteTableBasedItemEffect__(0, v203855E, 0) << 24 )
  {
    DisplayItemMessageOnField(v1, &gUnknown_0840EF85, sub_80A5C48, 1);
  }
  else
  {
    sub_80A9538(v203855E, 1u);
    GetMonNickname((int)dword_3004360, (int)&gStringVar1);
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F5D7);
    DisplayItemMessageOnField(v1, &gStringVar4, sub_80A7094, 1);
  }
  return v3;
}
