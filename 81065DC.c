int sub_81065DC()
{
  unsigned int v0; // r1@1
  int v1; // r0@2
  unsigned int v2; // r3@2
  signed int v3; // r2@2
  signed int v4; // r1@3
  int v6; // [sp+8h] [bp-4h]@0

  CpuSet(&gUnknown_08E95FB8, 100722688, 640);
  v0 = 0;
  do
  {
    LOWORD(v1) = 0;
    v2 = v0 << 16;
    v3 = (signed int)(v0 << 16) >> 11;
    do
    {
      *(_WORD *)(2 * (v3 + (signed __int16)v1) + 0x600F000) = 0;
      v4 = ((signed __int16)v1 + 1) << 16;
      v1 = ((signed __int16)v1 + 1) & 0xFFFF;
    }
    while ( v4 >> 16 <= 29 );
    v0 = (v2 + 0x10000) >> 16;
  }
  while ( (signed int)(v2 + 0x10000) >> 16 <= 19 );
  return v6;
}
