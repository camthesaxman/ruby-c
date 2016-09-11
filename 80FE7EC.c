int __fastcall sub_80FE7EC(int a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = (unsigned __int8)a1;
  sub_8072DEC(a1);
  MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
  sub_80FEC94(v1);
  sub_80FECB8(v20388F6);
  MenuDrawTextWindow(0xFu, 0xCu);
  sub_80FECE0((v20388F4 + v20388F2) & 0xFF);
  InitMenu(0, 1, 2, v20388F3 + 1, v20388F2, 13);
  return v3;
}
