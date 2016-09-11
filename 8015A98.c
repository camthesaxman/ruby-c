int __fastcall sub_8015A98(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int v3; // r7@1
  int v4; // r4@1
  unsigned int v5; // r2@1
  unsigned int v6; // r3@1
  int v7; // r1@2
  unsigned int v8; // ST14_4@3
  signed int v9; // r9@4
  _WORD *v10; // r5@4
  int v11; // r8@4
  int *v12; // r6@4
  int v13; // r0@22
  int v14; // r1@29
  int v16; // [sp+0h] [bp-3Ch]@2
  _WORD *v17; // [sp+4h] [bp-38h]@1
  int v18; // [sp+10h] [bp-2Ch]@4
  unsigned int v19; // [sp+14h] [bp-28h]@22

  v3 = a1;
  v4 = a2;
  v5 = a3 << 24;
  v6 = v5 >> 24;
  v17 = (_WORD *)(2 * a1 + 33644776);
  if ( *(_WORD *)(88 * a1 + 0x2024AAE) == 175 )
  {
    v7 = 8 * a1;
    v16 = *(_BYTE *)(28 * a1 + 0x2024DF7);
  }
  else
  {
    v8 = v5 >> 24;
    v16 = (unsigned __int8)itemid_get_x12(*(_WORD *)(88 * a1 + 0x2024AAE));
    v7 = 8 * v3;
    v6 = v8;
  }
  v2024C0B = v3;
  v9 = 0;
  v10 = (_WORD *)(88 * v3 + 33704588);
  v18 = 0;
  v11 = 4 * (v7 - v3);
  v12 = gBitTable;
  do
  {
    if ( !*v10 && v6 & 1 )
      v4 = (v4 | *v12) & 0xFF;
    if ( !*(_BYTE *)(88 * v3 + v9 + 33704612) && v6 & 2 )
      v4 = (v4 | *v12) & 0xFF;
    if ( *v10 == *(_WORD *)(v11 + 33705132) && v6 & 4 )
      v4 = (v4 | *v12) & 0xFF;
    if ( *(_WORD *)(v18 + 88 * v3 + 33704588) == *(_WORD *)(2 * v3 + 0x2024C34)
      && v6 & 8
      && *(_DWORD *)(88 * v3 + 0x2024AD0) < 0 )
    {
      v4 = (v4 | *v12) & 0xFF;
    }
    if ( *(_BYTE *)(v11 + 33705147) << 28 && v6 & 0x10 && !*((_BYTE *)&gBattleMoves + 12 * *v10 + 1) )
      v4 = (v4 | *v12) & 0xFF;
    v19 = v6;
    v13 = sub_8015D5C(v3, *v10);
    v6 = v19;
    if ( v13 << 24 && v19 & 0x20 )
      v4 = (v4 | *v12) & 0xFF;
    if ( *(_BYTE *)(v11 + 33705142) << 28 && *(_WORD *)(v11 + 33705134) != *v10 )
      v4 = (v4 | *v12) & 0xFF;
    if ( v16 == 29 )
    {
      v14 = *v17;
      if ( *v17 )
      {
        if ( v14 != 0xFFFF && v14 != *v10 )
          v4 = (v4 | *v12) & 0xFF;
      }
    }
    ++v12;
    ++v10;
    v18 += 2;
    ++v9;
  }
  while ( v9 <= 3 );
  return v4;
}
