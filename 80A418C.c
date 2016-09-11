int __fastcall sub_80A418C(unsigned __int16 a1, int a2, char a3, unsigned __int8 a4, unsigned __int8 a5)
{
  char v5; // r5@1
  unsigned __int8 v6; // r6@1
  int v8; // [sp+14h] [bp-4h]@0

  v5 = a3;
  v6 = a4;
  sub_80A4164(&gStringVar1, a1, a2, a5);
  MenuPrint((int)&gStringVar1, v5, v6);
  return v8;
}
