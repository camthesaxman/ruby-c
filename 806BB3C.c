int __fastcall sub_806BB3C(__int16 a1, int a2)
{
  int v2; // r8@1
  int v3; // r1@1
  unsigned int v4; // r2@2
  unsigned __int8 v5; // r4@2
  int v6; // r1@3
  int v8; // [sp+14h] [bp-4h]@0

  v2 = 32 * a2 & 0xFFFF;
  v3 = 0;
  do
  {
    v4 = 0;
    v5 = v3 + 1;
    if ( a1 <= 31 )
    {
      v6 = v2 + 32 * v3;
      do
      {
        if ( ((a1 + v4) & 0x80000000) == 0 )
          gBG2TilemapBuffer[v6 + a1 + v4] = 0;
        v4 = (v4 + 1) & 0xFF;
      }
      while ( v4 <= 0x12 && (signed int)(a1 + v4) <= 31 );
    }
    v3 = v5;
  }
  while ( v5 <= 2u );
  return v8;
}
