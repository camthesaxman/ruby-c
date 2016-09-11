int __fastcall IsCoordOutsideFieldObjectMovementRect(int a1, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3; // r4@1
  signed int v4; // r3@1
  int v5; // r5@1
  unsigned int v6; // r1@2
  int v7; // r0@2
  int v8; // r2@2
  int v9; // r1@2
  int v10; // r0@2
  unsigned int v11; // r1@5
  int v12; // r0@5
  int v13; // r2@5
  int v14; // r1@5
  int result; // r0@7

  v3 = a1;
  v4 = a2;
  v5 = a3;
  result = 1;
  if ( !(*(_BYTE *)(a1 + 25) & 0xF)
    || (v6 = *(_BYTE *)(a1 + 25) << 28,
        v7 = *(_WORD *)(a1 + 12),
        v8 = v7 - (v6 >> 28),
        v9 = (v7 + (v6 >> 28)) & 0xFFFF,
        v10 = v4 << 16,
        v4 = (signed __int16)v4,
        v8 << 16 <= v10)
    && (signed __int16)v9 >= v4 )
  {
    if ( !(*(_BYTE *)(v3 + 25) & 0xF0)
      || (v11 = *(_BYTE *)(v3 + 25) << 24,
          v12 = *(_WORD *)(v3 + 14),
          v13 = v12 - (v11 >> 28),
          v14 = (v12 + (v11 >> 28)) & 0xFFFF,
          v13 << 16 <= v5 << 16)
      && (signed __int16)v14 >= (signed __int16)v5 )
    {
      result = 0;
    }
  }
  return result;
}
