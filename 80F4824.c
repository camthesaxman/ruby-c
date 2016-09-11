int __fastcall sub_80F4824(int a1, unsigned __int8 a2)
{
  int v2; // r9@1
  int v3; // r6@2
  unsigned __int16 v4; // r4@2
  int v5; // r5@2
  unsigned int v6; // r8@2
  unsigned int v7; // ST08_4@2
  signed int v8; // r0@2
  int v10; // [sp+24h] [bp-4h]@0

  v2 = a2;
  if ( *(_BYTE *)((a1 << 16 >> 14) + 0x200893F) & 0x40 )
  {
    v3 = *(_BYTE *)((a1 << 16 >> 14) + 0x200893D);
    v4 = *(_BYTE *)((a1 << 16 >> 14) + 0x200893E) & 0x1F;
    v5 = (unsigned __int16)sub_80F44B0(v3, v4, 65, 0);
    v6 = sub_80F44B0(v3, v4, 1, 0);
    v7 = sub_80F44B0(v3, v4, 0, 0);
    sub_800D334((int)&gMonFrontPicTable[2 * v5], gMonFrontPicCoords[4 * v5], 1);
    v8 = species_and_otid_get_pal(v5, v6, v7);
    LZ77UnCompWram(v8, (v2 << 7) + 0x2000000);
    *(_WORD *)(2 * v2 + 0x200D1D6) = v5;
  }
  return v10;
}
