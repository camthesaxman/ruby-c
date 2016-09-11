int sub_80BDC14()
{
  int v1; // [sp+Ch] [bp-4h]@0

  v202824F = (((v202824F & 0xFE | v202824E & 1) & 0xFD | v202824E & 2) & 0xFB | v202824E & 4) & 0xF7 | v202824E & 8;
  v202824E |= 0x10u;
  v202824C = v202E83C;
  sav12_xor_increment(6u);
  return v1;
}
