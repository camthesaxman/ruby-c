int __fastcall sub_80A1FF8(_BYTE *a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  char v4; // r5@1
  unsigned __int8 v5; // r6@1
  int v7; // [sp+14h] [bp-4h]@0

  v4 = a3;
  v5 = a4;
  sub_80A1E9C((int)&gStringVar4, a1, a2);
  MenuPrint((int)&gStringVar4, v4, v5);
  return v7;
}
