int sub_80BC5BC()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = sub_80BC14C(v20387DC);
  *(_BYTE *)(160 * v0 + 0x202713D) = *(_BYTE *)(160 * v0 + 0x202713D) & 0x3F | (((unsigned __int8)(*(_BYTE *)(160 * v0 + 0x202713D) >> 6) ^ 1) << 6);
  FlagSet(0x10Cu);
  return v2;
}
