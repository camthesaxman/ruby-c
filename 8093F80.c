int sub_8093F80()
{
  int v0; // r5@1
  unsigned int v1; // r1@1
  int v2; // r0@2
  unsigned int v3; // r3@2
  signed int v4; // r2@3
  int v6; // [sp+10h] [bp-4h]@0

  v0 = 196;
  v1 = 5;
  do
  {
    LOWORD(v2) = 19;
    v3 = v1 << 16;
    do
    {
      *(_WORD *)(2 * (((signed int)(v1 << 16) >> 11) + (signed __int16)v2) + 0x6004000) = v0 | 0x5000;
      v4 = ((signed __int16)v2 + 1) << 16;
      v0 = (v0 + 1) & 0xFFFF;
      v2 = ((signed __int16)v2 + 1) & 0xFFFF;
    }
    while ( v4 >> 16 <= 26 );
    v1 = (v3 + 0x10000) >> 16;
  }
  while ( (signed int)(v3 + 0x10000) >> 16 <= 12 );
  return v6;
}
