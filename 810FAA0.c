int sub_810FAA0()
{
  int v0; // r0@2
  int v2; // [sp+4h] [bp-4h]@0

  if ( !(((unsigned int)v2026AF6 >> 7) & 1) )
  {
    v0 = sub_810FF48();
    sub_810FD80(v0);
    v2026AF8 = v2024EB2;
    FlagReset(0x315u);
    FlagReset(0x316u);
    FlagReset(0x317u);
    FlagReset(0x318u);
    VarSet(0x4095u, 1);
  }
  return v2;
}
