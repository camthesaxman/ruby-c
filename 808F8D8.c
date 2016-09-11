int __fastcall sub_808F8D8(unsigned __int8 a1)
{
  int v1; // r7@1
  unsigned __int16 v2; // r0@7
  int v4; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( byte_3001BAC == 1 )
  {
    sub_8090540(13);
    sub_8090644(1, 13);
    sub_808D640();
    v400000A = 3328;
    ++byte_3001BAC;
  }
  else if ( (signed int)(unsigned __int8)byte_3001BAC > 1 && byte_3001BAC == 2 )
  {
    v2 = NationalPokedexNumToSpecies(*v202FFBC);
    sub_81113AC(v2, v202FFB4 + 1615);
    SetVBlankCallback(dword_3005CEC);
    *(_BYTE *)(v202FFB4 + 1615) = 0;
    byte_3001BAC = 0;
    dword_3004B20[10 * v1] = (int)sub_808F9C8;
  }
  else if ( !(v202F38F & 0x80) )
  {
    *(_BYTE *)(v202FFB4 + 1610) = 5;
    dword_3005CEC = dword_300177C;
    SetVBlankCallback(0);
    sub_8091060(512);
    *(_BYTE *)(v202FFB4 + 1613) = 1;
    byte_3001BAC = 1;
  }
  return v4;
}
