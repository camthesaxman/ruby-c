int __fastcall ItemUseInBattle_Escape(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(0, 0xDu, 0xDu, 0x14u);
  if ( v20239F8 & 8 )
  {
    DisplayDadsAdviceCannotUseItemMessage(v1, dword_3004B20[10 * v1 + 3]);
  }
  else
  {
    sub_80C9FDC();
    DisplayItemMessageOnField(v1, &gStringVar4, sub_80A7094, 1);
  }
  return v3;
}
