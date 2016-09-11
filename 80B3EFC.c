int __fastcall sub_80B3EFC(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned __int16 v2; // r4@1
  unsigned int v3; // r0@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  HIWORD(dword_3004B20[10 * a1 + 2]) = 1;
  MenuDrawTextWindow(0, 0xAu);
  sub_80B37F8(v1);
  v2 = itemid_get_market_price(*(_WORD *)(2 * ((unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711)
                                        + dword_300070C));
  v3 = v2025BC4 / (unsigned int)((signed int)v2 >> GetPriceReduction(1)) & 0xFFFF;
  if ( v3 > 0x63 )
    LOBYTE(v3) = 99;
  byte_3000715 = v3;
  dword_3004B20[10 * v1] = (int)sub_80B3DC8;
  return v5;
}
