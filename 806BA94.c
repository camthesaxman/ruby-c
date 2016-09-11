int __fastcall sub_806BA94(__int16 a1, unsigned __int16 a2, int a3, unsigned __int8 a4)
{
  __int16 v4; // r4@1
  int v5; // r0@1
  _BYTE *v6; // r9@1
  int v7; // r1@3
  unsigned int v8; // r2@4
  unsigned __int8 v9; // r7@4
  int v11; // [sp+24h] [bp-4h]@0

  v4 = a1;
  v5 = a2;
  v6 = &gUnknown_08376A5E;
  if ( !(a3 << 24) )
    v6 = &gUnknown_08376A25;
  v7 = 0;
  do
  {
    v8 = 0;
    v9 = v7 + 1;
    if ( v4 <= 31 )
    {
      do
      {
        if ( ((v4 + v8) & 0x80000000) == 0 )
          gBG2TilemapBuffer[(32 * v5 & 0xFFFF) + 32 * v7 + v4 + v8] = *(&v6[19 * v7] + v8) | (unsigned __int16)(a4 << 12);
        v8 = (v8 + 1) & 0xFF;
      }
      while ( v8 <= 0x12 && (signed int)(v4 + v8) <= 31 );
    }
    v7 = (unsigned __int8)(v7 + 1);
  }
  while ( v9 <= 2u );
  return v11;
}
