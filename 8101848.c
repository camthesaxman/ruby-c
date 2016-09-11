int __fastcall sub_8101848(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(0x14u, 8u, 0x1Au, 0xEu);
  sub_8109A30(*(_BYTE *)(v20388D0 + v20388F5));
  *(_BYTE *)(v20388D0 + v20388F5) = 0;
  sub_80FF098();
  DisplayItemMessageOnField(v1, (int)&gUnknown_0840FC62, (int)sub_80FEFF4, 0);
  return v3;
}
