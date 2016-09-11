int sub_80BCE4C()
{
  unsigned __int16 v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = VarGet(16468);
  *(_BYTE *)(160 * v0 + 0x202713D) = *(_BYTE *)(160 * v0 + 0x202713D) & 0xDF | 32 * (v202E8DC & 1);
  return v2;
}
