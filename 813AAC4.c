int __fastcall sub_813AAC4(unsigned __int16 a1, int a2, unsigned __int8 a3, unsigned __int8 a4, int a5)
{
  unsigned __int8 v5; // r7@1
  int v7; // [sp+10h] [bp-4h]@0

  v5 = a3;
  sub_80A4164(&gStringVar1, a1, a2, a4);
  if ( a5 )
    MenuPrint((int)&gUnknown_0840632A, 26, v5);
  else
    MenuPrint((int)&gUnknown_08406327, 26, v5);
  return v7;
}
