signed int __fastcall sub_8084C94(int a1)
{
  unsigned int v1; // r0@1
  signed int v2; // r4@1
  unsigned int v3; // r6@1
  signed int v4; // r5@1
  unsigned int v5; // r1@1

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  v4 = 0;
  v5 = (unsigned __int16)Random() % 0x64u & 0xFF;
  if ( v2 == 1 )
  {
    if ( v5 <= 0x3B )
      v4 = 2;
    if ( ((v5 - 60) & 0xFF) <= 0x13 )
      v4 = 3;
    if ( ((v5 - 80) & 0xFF) <= 0x13 )
      v4 = 4;
  }
  else if ( v2 > 1 )
  {
    if ( v3 == 2 )
    {
      if ( v5 <= 0x27 )
        v4 = 5;
      if ( ((v5 - 40) & 0xFF) <= 0x27 )
        v4 = 6;
      if ( ((v5 - 80) & 0xFF) <= 0xE )
        v4 = 7;
      if ( ((v5 - 95) & 0xFF) <= 3 )
        v4 = 8;
      if ( v5 == 99 )
        v4 = 9;
    }
  }
  else if ( !v2 )
  {
    v4 = 1;
    if ( v5 <= 0x45 )
      v4 = 0;
  }
  return v4;
}
