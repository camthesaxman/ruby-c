int __fastcall sub_80981F0(unsigned __int16 a1)
{
  int v2; // [sp+20h] [bp-4h]@0

  if ( v2002700 )
  {
    if ( a1 )
    {
      sub_800D334((int)&gMonFrontPicTable[2 * a1], gMonFrontPicCoords[4 * a1], 1);
      LZ77UnCompWram(v20011E8, 33564420);
      CpuSet(33564548, v20026FC, 67109376);
      LoadPalette(33564420, v20026FA, 32);
      *(_BYTE *)(v2002700 + 62) &= 0xFBu;
    }
    else
    {
      *(_BYTE *)(v2002700 + 62) |= 4u;
    }
  }
  return v2;
}
