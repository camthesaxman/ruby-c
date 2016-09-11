int atk04_critcalc()
{
  int v0; // r0@1
  int v1; // r6@2
  int v2; // r5@4
  int v3; // r1@4
  int v4; // r0@6
  int v5; // r2@10
  signed int v6; // r1@12
  int v7; // r5@15
  signed int v8; // r3@15
  int v9; // r0@19
  unsigned int v10; // r5@21
  int v11; // r4@23
  char v12; // r0@28
  int v14; // [sp+10h] [bp-4h]@0

  v0 = *(_WORD *)(88 * v2024C07 + 0x2024AAE);
  if ( v0 == 175 )
    v1 = *(_BYTE *)(28 * v2024C07 + 0x2024DF7);
  else
    v1 = itemid_get_x12(v0) & 0xFF;
  v2024C0B = v2024C07;
  v2 = (-(*(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 0x100000) >> 31) & 2;
  v3 = *((_BYTE *)&gBattleMoves + 12 * v2024BE6);
  if ( v3 == 43 )
    ++v2;
  v4 = v2;
  if ( v3 == 75 )
    v4 = v2 + 1;
  if ( v3 == 200 )
    ++v4;
  v5 = v4;
  if ( v3 == 209 )
    v5 = v4 + 1;
  v6 = 0;
  if ( v1 == 63 && *(_WORD *)(88 * v2024C07 + 0x2024A80) == 113 )
    v6 = 1;
  v7 = 2 * v6;
  v8 = 0;
  if ( v1 == 66 && *(_WORD *)(88 * v2024C07 + 0x2024A80) == 83 )
    v8 = 1;
  if ( v1 == 41 )
    v9 = v5 + v7 + 1;
  else
    v9 = v5 + v7;
  v10 = (v9 + 2 * v8) & 0xFFFF;
  if ( v10 > 4 )
    v10 = 4;
  v11 = *(_BYTE *)(88 * v2024C08 + 0x2024AA0);
  if ( v11 == 4
    || v11 == 75
    || *(_DWORD *)(4 * v2024C07 + 0x2024C98) & 0x8000
    || v20239F8 & 0x210
    || (unsigned __int16)Random(0) % (unsigned int)gCriticalHitChance[v10] << 16 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 2;
  }
  v2024C0D = v12;
  ++v2024C10;
  return v14;
}
