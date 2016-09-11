int __fastcall sub_810BB88(unsigned __int8 a1)
{
  int v1; // r8@1
  int v2; // r6@1
  int v3; // r0@6
  char *v4; // r4@6
  unsigned __int8 v5; // r0@6
  int v7; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  BasicInitMenuWindow((int)&gWindowConfig_81E6E34);
  v2 = v1;
  if ( (unsigned __int8)(__OFSUB__(v1, v1 + 8) ^ 1) | (v1 == v1 + 8) )
  {
    while ( v2 != v203924A )
    {
      v3 = sub_8072C74((int)&gStringVar1, (int)(&gUnknown_083F7EB8)[4 * *(_BYTE *)(8 * v2 + 0x2025F2C)], 0x5Eu, 0);
      *(_BYTE *)v3 = -4;
      *(_BYTE *)(v3 + 1) = 20;
      *(_BYTE *)(v3 + 2) = 6;
      v4 = (char *)(v3 + 3);
      v5 = sub_810C9B0(8 * v2 + 33709868);
      ConvertIntToDecimalStringN(v4, v5, 1, 3);
      MenuPrint((int)&gStringVar1, 15, 2 * (v2 - v1) | 1);
      v2 = (v2 + 1) & 0xFF;
      if ( v2 > v1 + 8 )
        return v7;
    }
    sub_8072C74((int)&gStringVar1, (int)"Нигл", 0x78u, 0);
    MenuPrint((int)&gStringVar1, 15, 2 * (v2 - v1) | 1);
    if ( v2 != v1 + 8 )
      MenuZeroFillWindowRect(0xFu, 2 * (v2 - v1) + 3, 0x1Du, 0x12u);
  }
  return v7;
}
