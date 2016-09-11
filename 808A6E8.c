int __fastcall sub_808A6E8(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = (unsigned __int8)a1;
  sub_8072DEC(a1);
  v202FFA8 = 0;
  MenuZeroFillWindowRect(0x13u, 0, 0x1Du, 0x13u);
  sub_806E750(0, (int)&gUnknown_0839F584);
  dword_3004B20[10 * v1] = (int)sub_808A73C;
  return v3;
}
