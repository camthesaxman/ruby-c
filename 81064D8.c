int sub_81064D8()
{
  unsigned int v0; // r3@1
  int v1; // r0@2
  unsigned int v2; // r4@2
  int v3; // r1@3
  signed int v4; // r2@3
  int v5; // r1@4
  int v6; // r0@4
  signed int v7; // r1@5
  int v9; // [sp+18h] [bp-4h]@0

  v0 = 4;
  do
  {
    LOWORD(v1) = 0;
    v2 = v0 << 16;
    do
    {
      v3 = 2 * ((signed __int16)v0 + (signed __int16)v1) + 100724736;
      *(_WORD *)(v3 + 320) = 8273;
      *(_WORD *)(v3 + 832) = 10321;
      *(_WORD *)(v3 + 384) = 8289;
      *(_WORD *)(v3 + 768) = 10337;
      v4 = ((signed __int16)v1 + 1) << 16;
      v1 = ((signed __int16)v1 + 1) & 0xFFFF;
    }
    while ( v4 >> 16 <= 3 );
    v5 = 2 * (signed __int16)v0 + 100724736;
    *(_WORD *)(v5 + 384) = 8382;
    *(_WORD *)(v5 + 768) = 10430;
    LOWORD(v6) = 7;
    do
    {
      *(_WORD *)(2 * (32 * (signed __int16)v6 + (signed __int16)v0) + 0x600F000) = 8383;
      v7 = ((signed __int16)v6 + 1) << 16;
      v6 = ((signed __int16)v6 + 1) & 0xFFFF;
    }
    while ( v7 >> 16 <= 11 );
    v0 = (v2 + 327680) >> 16;
  }
  while ( (signed int)(v2 + 327680) >> 16 <= 17 );
  return v9;
}
