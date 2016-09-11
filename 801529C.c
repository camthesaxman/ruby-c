int __fastcall sub_801529C(unsigned __int8 a1)
{
  int v1; // r5@1
  signed int v2; // r8@1
  int v3; // r9@1
  int v4; // r4@1
  int v5; // r7@2
  int v6; // r6@3
  signed int v7; // r2@5
  _WORD *v8; // r1@6
  _BYTE *v9; // r1@10
  int v11; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v2 = 4;
  v3 = (unsigned __int8)battle_side_get_owner(a1);
  v4 = 0;
  if ( (signed int)v2024A68 > 0 )
  {
    v5 = 88 * v1;
    do
    {
      v6 = v4 + 1;
      if ( v3 != (unsigned __int8)battle_side_get_owner((unsigned __int8)v4) && *(_BYTE *)(88 * v4 + 0x2024AA0) == 46 )
      {
        v7 = 0;
        if ( *(_WORD *)(88 * v1 + 0x2024A8C) != 286 )
        {
          v8 = (_WORD *)(v5 + 33704588);
          do
          {
            ++v8;
            ++v7;
          }
          while ( v7 <= 3 && *v8 != 286 );
        }
        if ( v7 != 4 )
        {
          v2 = v7;
          v9 = (_BYTE *)(v7 + v5 + 33704612);
          if ( *v9 )
            --*v9;
        }
      }
      ++v4;
    }
    while ( v6 < v2024A68 );
  }
  if ( v2 != 4
    && !(*(_DWORD *)(88 * v1 + 0x2024AD0) & 0x200000)
    && !(((unsigned int)*(_BYTE *)(28 * v1 + 0x2024CC0) >> 4) & gBitTable[v2]) )
  {
    v2024A60 = v1;
    dp01_build_cmdbuf_x02_a_b_varargs(0, v2 + 9, 0, 1u, (char *)(88 * (unsigned __int8)v1 + 33704612 + v2));
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
  }
  return v11;
}
