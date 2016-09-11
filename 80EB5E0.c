int __fastcall unref_sub_80EB5E0(int a1)
{
  signed int v2; // r1@3
  int v3; // r2@3
  char *v4; // r1@8
  int v5; // r2@10
  int v6; // r0@11
  int v7; // r0@12
  int v8; // r2@14

  if ( (unsigned __int16)a1 == 0xFFFF )
    return 0;
  v2 = (unsigned int)(a1 << 16) >> 25;
  v3 = a1 & 0x1FF;
  if ( v2 > 19 )
  {
    if ( (unsigned int)(a1 << 16) >> 25 != 21 )
      goto _080EB630;
_080EB610:
    v4 = &gSpeciesNames[11 * v3];
    goto _080EB660;
  }
  if ( (signed int)((unsigned int)(a1 << 16) >> 25) < 18 )
  {
    if ( (unsigned int)(a1 << 16) >> 25 )
    {
_080EB630:
      v4 = (char *)gEasyChatGroupWords[(unsigned int)(a1 << 16) >> 25];
      v5 = (v3 - 1) & 0xFFFF;
      if ( v5 != 0xFFFF )
      {
        do
        {
          v6 = (unsigned __int8)*v4++;
          LOWORD(v5) = v5 - 1;
          if ( v6 != 255 )
          {
            do
              v7 = (unsigned __int8)*v4++;
            while ( v7 != 255 );
          }
        }
        while ( (unsigned __int16)v5 != 0xFFFF );
      }
      goto _080EB660;
    }
    goto _080EB610;
  }
  v4 = &gMoveNames[13 * v3];
_080EB660:
  v8 = 0;
  while ( (unsigned __int8)*v4 != 255 )
  {
    ++v4;
    v8 = (v8 + 1) & 0xFFFF;
  }
  return v8;
}
