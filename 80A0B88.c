int __fastcall sub_80A0B88(int a1, int a2, int a3)
{
  signed int v3; // r5@1
  char *v4; // r0@3
  int v6; // [sp+8h] [bp-4h]@0

  v3 = (unsigned __int8)sub_80A0A90(a1, a2, a3);
  if ( v3 )
  {
    StringCopy(&gStringVar1, &OtherText_Ribbons00);
    v4 = (char *)&gBG3TilemapBuffer[1023] + (unsigned __int8)StringLength(&gStringVar1);
    *v4 = -4;
    v4[1] = 20;
    v4[2] = 6;
    ConvertIntToDecimalStringN(v4 + 3, v3, 1, 2);
  }
  else
  {
    StringCopy(&gStringVar1, &gUnknown_0840E66F);
  }
  MenuPrint((int)&gUnknown_083C15AE, 21, 4u);
  return v6;
}
