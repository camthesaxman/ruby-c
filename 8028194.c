int atkA8_copymovepermanently()
{
  int v0; // r1@2
  signed int v1; // r7@6
  _WORD *v2; // r1@6
  int v3; // r2@7
  signed int v4; // r7@11
  char *v5; // r4@11
  int v6; // r3@11
  char *v7; // r2@11
  char v9; // [sp+4h] [bp-30h]@11
  char v10; // [sp+Ch] [bp-28h]@12
  char v11; // [sp+10h] [bp-24h]@13
  int v12; // [sp+30h] [bp-4h]@15

  v2024BE8 = -1;
  if ( *(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 0x200000 )
    goto LABEL_18;
  v0 = *(_WORD *)(2 * v2024C08 + 0x2024C2C);
  if ( v0 == 165 || !*(_WORD *)(2 * v2024C08 + 0x2024C2C) || v0 == 0xFFFF || v0 == 166 )
    goto LABEL_18;
  v1 = 0;
  v2 = (_WORD *)(88 * v2024C07 + 33704588);
  do
  {
    v3 = *v2;
    if ( v3 != 166 && v3 == *(_WORD *)(2 * v2024C08 + 0x2024C2C) )
      break;
    ++v2;
    ++v1;
  }
  while ( v1 <= 3 );
  if ( v1 != 4 )
  {
LABEL_18:
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    *(_WORD *)(2 * v2024BE4 + 88 * v2024C07 + 0x2024A8C) = *(_WORD *)(2 * v2024C08 + 0x2024C2C);
    *(_BYTE *)(88 * v2024C07 + v2024BE4 + 0x2024AA4) = gBattleMoves[12 * *(_WORD *)(2 * v2024C08 + 0x2024C2C) + 4];
    v2024A60 = v2024C07;
    v4 = 0;
    v5 = (char *)(88 * v2024C07 + 33704612);
    v6 = 88 * v2024C07;
    v7 = &v9;
    do
    {
      *(_WORD *)v7 = *(_WORD *)(v6 + 33704588);
      *(&v10 + v4) = *v5++;
      v6 += 2;
      v7 += 2;
      ++v4;
    }
    while ( v4 <= 3 );
    v11 = *(_BYTE *)(88 * v2024C07 + 0x2024ABB);
    dp01_build_cmdbuf_x02_a_b_varargs(0, 3, 0, 0x10u, &v9);
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    byte_30041C0[0] = -3;
    byte_30041C1 = 2;
    word_30041C2 = *(_WORD *)(2 * v2024C08 + 0x2024C2C);
    byte_30041C4 = -1;
    v2024C10 += 5;
  }
  return v12;
}
