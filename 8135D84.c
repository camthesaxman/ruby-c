int sub_8135D84()
{
  char *v0; // r4@2
  unsigned int v1; // r0@2
  unsigned int v2; // r1@2
  int v4; // [sp+8h] [bp-4h]@0

  if ( *(_WORD *)(2 * (v20253F8 & 1) + 0x2025400) - 1 <= 5 )
  {
    v0 = (char *)&gUnknown_08405EDA;
    v1 = (unsigned __int16)Random();
    v2 = 6;
  }
  else
  {
    v0 = (char *)&gUnknown_08405EE6;
    v1 = (unsigned __int16)Random();
    v2 = 9;
  }
  v202540C = *(_WORD *)&v0[2 * (v1 % v2) & 0x1FFFF];
  return v4;
}
