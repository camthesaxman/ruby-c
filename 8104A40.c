int __fastcall sub_8104A40(int a1, __int16 a2)
{
  int v2; // r3@1
  signed int v3; // r0@1
  signed int v4; // r2@2
  int v6; // [sp+10h] [bp-4h]@0

  LOWORD(v2) = 4;
  v3 = a1 << 16;
  do
  {
    *(_WORD *)(2 * (32 * (signed __int16)v2 + (v3 >> 16)) + 0x600E000) = gReelTimeWindowTilemap[a2
                                                                                              + 20
                                                                                              * ((signed __int16)v2 - 4)];
    v4 = ((signed __int16)v2 + 1) << 16;
    v2 = ((signed __int16)v2 + 1) & 0xFFFF;
  }
  while ( v4 >> 16 <= 14 );
  return v6;
}
