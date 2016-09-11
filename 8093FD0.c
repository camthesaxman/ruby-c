int sub_8093FD0()
{
  int v0; // r2@1
  int v1; // r0@1
  signed int v2; // r1@2
  signed int v3; // r1@3
  int v5; // [sp+Ch] [bp-4h]@0

  v0 = 15;
  v1 = v2000002 + 15;
  if ( v1 > 15 )
  {
    do
    {
      *(_WORD *)(2 * (signed __int16)v0 + 0x6004180) = 16527;
      v2 = ((signed __int16)v0 + 1) << 16;
      v0 = ((signed __int16)v0 + 1) & 0xFFFF;
    }
    while ( v2 >> 16 < v1 );
  }
  v3 = v0 << 16;
  if ( (signed __int16)v0 <= 18 )
  {
    do
    {
      *(_WORD *)(2 * (v3 >> 16) + 0x6004180) = 0;
      v3 = ((v3 >> 16) + 1) << 16;
    }
    while ( v3 >> 16 <= 18 );
  }
  return v5;
}
