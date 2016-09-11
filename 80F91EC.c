int __fastcall unref_sub_80F91EC(signed int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, char a5, unsigned __int8 a6)
{
  int v6; // r8@1
  int v8; // [sp+14h] [bp-4h]@0

  v6 = a2;
  ConvertIntToDecimalStringN(&gStringVar1, a1, a4, a3);
  if ( v6 == 255 )
    MenuPrint((int)&gStringVar1, a5, a6);
  else
    brm_trade_1(&gStringVar1, v6, a5, a6);
  return v8;
}
