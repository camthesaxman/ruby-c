int sub_8145A78()
{
  int v0; // r4@1
  unsigned int v1; // r0@1
  int v3; // [sp+4h] [bp-4h]@0

  v0 = (unsigned __int16)Random();
  v1 = Random();
  sub_8145D14((v1 << 16) | v0);
  VarSet(0x4045u, 0);
  return v3;
}
