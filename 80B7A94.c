int __fastcall sub_80B7A94(unsigned int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  int v4; // r5@1
  char v5; // r6@1
  __int16 v6; // r7@1
  int v7; // r2@1
  int v9; // [sp+0h] [bp-24h]@1
  int v10; // [sp+20h] [bp-4h]@4

  v4 = a2;
  v5 = a3;
  v6 = a4;
  sub_80B79F8((int)&v9, a1, a2);
  v7 = (unsigned __int8)sub_8072CA4(&v9);
  if ( v7 < 8 * (v4 + 1) )
    sub_80729D8((int)&v9, 8 * (v5 + 1 + v4) - v7, 8 * v6, 1u);
  else
    MenuPrint((int)&v9, v5, v6);
  return v10;
}
