int sub_810F54C()
{
  unsigned __int8 v0; // r0@1
  char v2; // [sp+0h] [bp-8h]@1
  int v3; // [sp+4h] [bp-4h]@1

  sav12_xor_increment(0x2Au);
  FlagSet(0x83Bu);
  v2 = 1;
  v0 = sub_810F87C(&v2);
  SetMonData((int)&dword_3004360[25 * v0], 71, (int)&v2);
  return v3;
}
