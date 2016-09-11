int ContestEffect_15()
{
  int v0; // r7@1
  int v1; // r6@1
  signed int v2; // r5@2
  unsigned int v3; // r0@4
  signed __int16 v4; // r1@4
  int v6; // [sp+14h] [bp-4h]@0

  v0 = 0;
  v1 = v20192E1;
  if ( *(_BYTE *)(v20192E1 + 0x20192D0) )
  {
    v2 = 0;
    do
    {
      if ( *(_BYTE *)(v1 + 33657552) > (unsigned int)*(_BYTE *)(v2 + 33657552) )
      {
        v20192D8 = v2;
        v20192D9 = -1;
        v3 = (unsigned __int16)Random() % 0xAu & 0xFF;
        v4 = 0;
        if ( v3 )
        {
          v4 = 10;
          if ( v3 > 2 )
          {
            v4 = 20;
            if ( v3 > 4 )
            {
              v4 = 30;
              if ( v3 > 6 )
              {
                v4 = 60;
                if ( v3 <= 8 )
                  v4 = 40;
              }
            }
          }
        }
        v20192D4 = v4;
        if ( sub_80B9120() << 24 )
          v0 = (v0 + 1) & 0xFF;
      }
      ++v2;
    }
    while ( v2 <= 3 );
  }
  sub_80B13EC(v20192E1, 48);
  if ( !v0 )
    sub_80B1404(v20192E1, 54);
  return v6;
}
