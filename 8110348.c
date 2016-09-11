int __fastcall sub_8110348(int a1, unsigned __int8 a2)
{
  int v2; // r7@1
  unsigned __int8 v3; // r6@1
  char v5; // [sp+0h] [bp-24h]@3
  char v6; // [sp+1h] [bp-23h]@3
  char v7; // [sp+2h] [bp-22h]@3
  char v8; // [sp+3h] [bp-21h]@3
  char v9; // [sp+4h] [bp-20h]@3
  char v10; // [sp+5h] [bp-1Fh]@3
  __int16 v11; // [sp+6h] [bp-1Eh]@3
  int v12; // [sp+20h] [bp-4h]@5

  v2 = a1;
  v3 = a2;
  if ( *(_WORD *)(a1 + 10) || *(_DWORD *)(a1 + 12) )
  {
    StringFillWithTerminator(&gStringVar1, 8u);
    StringCopyN((int)&gStringVar1, v2, 7);
    MenuPrint((int)&gStringVar1, 3, v3);
    gStringVar1 = -4;
    byte_20231CD = 20;
    byte_20231CE = 6;
    ConvertIntToDecimalStringN(&byte_20231CF, *(_WORD *)(v2 + 10), 1, 4);
    MenuPrint((int)&gStringVar1, 11, v3);
    ConvertIntToDecimalStringN(&byte_20231CF, *(_WORD *)(v2 + 12), 1, 4);
    MenuPrint((int)&gStringVar1, 17, v3);
    ConvertIntToDecimalStringN(&byte_20231CF, *(_WORD *)(v2 + 14), 1, 4);
    MenuPrint((int)&gStringVar1, 23, v3);
  }
  else
  {
    v5 = -4;
    v6 = 20;
    v7 = 6;
    v8 = -4;
    v9 = 17;
    v10 = 1;
    StringCopy(&v11, &gUnknown_0842CA3C);
    MenuPrint((int)&v5, 3, v3);
    StringCopy(&v11, &gUnknown_0842CA44);
    MenuPrint((int)&v5, 11, v3);
    MenuPrint((int)&v5, 17, v3);
    MenuPrint((int)&v5, 23, v3);
  }
  return v12;
}
