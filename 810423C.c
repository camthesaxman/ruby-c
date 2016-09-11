int __fastcall sub_810423C(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r2@1
  unsigned int v3; // r4@1
  signed int v4; // r3@2
  int v5; // r0@6
  signed int i; // r1@7
  signed int v7; // r3@8
  int v9; // [sp+14h] [bp-4h]@0

  v1 = a1;
  LOWORD(v2) = 3;
  v3 = 0;
  if ( (signed int)a1 > 0 )
  {
    do
    {
      v4 = 0;
      if ( (_WORD)v3 )
      {
        if ( (signed __int16)v3 == 15 )
          v4 = 2;
      }
      else
      {
        v4 = 1;
      }
      *(_WORD *)(2 * (signed __int16)v2 + 0x600E880) = *((_WORD *)&gUnknown_083ECBC4 + 2 * v4);
      v5 = (v3 << 16) + 0x10000;
      v2 = ((signed __int16)v2 + 1) & 0xFFFF;
      v3 = (unsigned int)v5 >> 16;
    }
    while ( v5 >> 16 < v1 );
  }
  for ( i = v3 << 16; (signed __int16)v3 <= 15; i = v3 << 16 )
  {
    v7 = 0;
    if ( i >> 16 )
    {
      if ( i >> 16 == 15 )
        v7 = 2;
    }
    else
    {
      v7 = 1;
    }
    *(_WORD *)(2 * (signed __int16)v2 + 0x600E880) = word_83ECBC6[2 * v7];
    v3 = ((v3 << 16) + 0x10000) >> 16;
    v2 = ((signed __int16)v2 + 1) & 0xFFFF;
  }
  HIWORD(dword_3004B20[10 * v200003E + 2]) = v1;
  return v9;
}
