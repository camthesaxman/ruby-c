int __fastcall sub_80FE5AC(int a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = (unsigned __int8)a1;
  sub_8072DEC(a1);
  MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
  sub_80FE528(v1);
  InitMenu(0, 1, 1, 9, v20388F6, 13);
  dword_3004B20[10 * v1] = (int)sub_80FE604;
  return v3;
}
