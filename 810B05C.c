int __fastcall sub_810B05C(int a1)
{
  int v1; // r6@1
  int v2; // r1@1
  int v3; // r4@1
  int v4; // r7@1
  int v5; // r0@1
  unsigned int v6; // r5@3
  unsigned int v7; // r0@3
  unsigned int v8; // r3@5
  unsigned int v9; // r2@5
  int v11; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  v3 = LOWORD(dword_3004B20[10 * v2 + 2]);
  v4 = LOWORD(dword_3004B20[10 * v2 + 2]);
  v5 = (signed __int16)sine2(dword_3004B20[10 * v2 + 2]);
  if ( (signed __int16)v5 < 0 )
    v5 += 15;
  v6 = (unsigned int)(v5 << 12) >> 16;
  v7 = (signed __int16)cosine2(v3);
  if ( (v7 & 0x8000u) != 0 )
    v7 += 15;
  SetOamMatrix(0, v7 >> 4, v6, -(signed __int16)v6, v7 >> 4);
  v8 = gClockHandCoords[2 * v4] & 0xFFFF;
  v9 = gClockHandCoords[2 * v4 + 1] & 0xFFFF;
  if ( v8 > 0x80 )
    LOWORD(v8) = v8 | 0xFF00;
  if ( v9 > 0x80 )
    LOWORD(v9) = v9 | 0xFF00;
  *(_WORD *)(v1 + 36) = v8;
  *(_WORD *)(v1 + 38) = v9;
  return v11;
}
