int sub_80BE778()
{
  unsigned int v0; // r1@2
  unsigned __int16 v1; // r0@7
  int v2; // r4@7
  char *v3; // r1@7
  int v5; // [sp+Ch] [bp-4h]@0

  if ( FlagGet(0x804u) << 24 )
  {
    v0 = 0;
    while ( *(_BYTE *)(36 * v0 + 0x2027E6C) != 41 )
    {
      v0 = (v0 + 1) & 0xFF;
      if ( v0 > 0x17 )
      {
        if ( !(unsigned __int8)sub_80BF77C(327) )
        {
          byte_3005D38 = sub_80BF720(33717868);
          if ( byte_3005D38 != -1 )
          {
            v1 = (unsigned __int16)Random() % 5u;
            v2 = 36 * byte_3005D38 + 33717868;
            *(_BYTE *)v2 = 41;
            *(_BYTE *)(v2 + 1) = 1;
            v3 = (char *)&gUnknown_083D13F8 + 12 * v1;
            *(_BYTE *)(v2 + 20) = v3[10];
            *(_BYTE *)(v2 + 2) = 0;
            *(_BYTE *)(v2 + 3) = 0;
            *(_WORD *)(v2 + 12) = *(_WORD *)v3;
            *(_WORD *)(v2 + 14) = 0;
            *(_WORD *)(v2 + 4) = *((_WORD *)v3 + 1);
            *(_WORD *)(v2 + 6) = *((_WORD *)v3 + 2);
            *(_WORD *)(v2 + 8) = *((_WORD *)v3 + 3);
            *(_WORD *)(v2 + 10) = *((_WORD *)v3 + 4);
            *(_BYTE *)(v2 + 16) = v3[11];
            *(_BYTE *)(v2 + 17) = 0;
            *(_BYTE *)(v2 + 18) = 0;
            *(_BYTE *)(v2 + 19) = 50;
            *(_BYTE *)(v2 + 21) = 0;
            *(_WORD *)(v2 + 22) = 1;
            sub_80BE160(v2);
            *(_BYTE *)(v2 + 24) = 2;
          }
        }
        return v5;
      }
    }
  }
  return v5;
}
