_BOOL4 __fastcall sub_8069D34(__int16 a1, __int16 a2)
{
  char v2; // r5@1
  int v3; // r4@1

  v2 = a1;
  v3 = a2;
  return sub_8069CB8(a1, a2) && (0x10000 << (v2 - 3)) & (VarGet(gUnknown_083763E4[v3]) << 16);
}
