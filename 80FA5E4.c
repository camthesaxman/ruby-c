int sub_80FA5E4()
{
  unsigned int v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  LOWORD(v0) = 0;
  if ( (v2028508 & 0x7F) - (v2028510 & 0x7F) <= 1 && !(v2028509 & 0x40) )
    v0 = (unsigned int)-(v2028511 & 0x40) >> 31;
  v202E8DC = v0;
  return v2;
}
