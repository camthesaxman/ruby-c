int __fastcall sub_81104E8(int a1, unsigned __int16 a2, char a3, unsigned __int8 a4)
{
  unsigned int v4; // r4@1
  char v5; // r5@1
  unsigned __int8 v6; // r6@1
  int v8; // [sp+Ch] [bp-4h]@0

  v4 = a2;
  v5 = a3;
  v6 = a4;
  MenuPrint(a1, a3, a4);
  if ( v4 > 0x270F )
    v4 = 9999;
  sub_8072C14((int)&gStringVar1, v4, 0x18u, 1u);
  MenuPrint((int)&gUnknown_0842CA70, v5 + 7, v6);
  return v8;
}
