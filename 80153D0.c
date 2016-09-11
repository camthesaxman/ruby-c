int __fastcall sub_80153D0(unsigned __int8 a1)
{
  int v1; // r3@1
  signed int v2; // r6@1
  int v3; // r1@1
  int v4; // r4@2
  signed int v5; // r2@4
  _WORD *v6; // r1@5
  int v7; // r0@9
  _BYTE *v8; // r1@9
  int v9; // r0@9
  int v11; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v2 = 4;
  v3 = 0;
  if ( (signed int)v2024A68 > 0 )
  {
    do
    {
      v4 = v3 + 1;
      if ( *(_BYTE *)(88 * v3 + 0x2024AA0) == 46 && v3 != v1 )
      {
        v5 = 0;
        if ( *(_WORD *)(88 * v1 + 0x2024A8C) != 195 )
        {
          v6 = (_WORD *)(88 * v1 + 33704588);
          do
          {
            ++v6;
            ++v5;
          }
          while ( v5 <= 3 && *v6 != 195 );
        }
        if ( v5 != 4 )
        {
          v2 = v5;
          v7 = v5 + 88 * v1;
          v8 = (_BYTE *)(v7 + 33704612);
          v9 = *(_BYTE *)(v7 + 33704612);
          if ( v9 )
            *v8 = v9 - 1;
        }
      }
      v3 = v4;
    }
    while ( v4 < v2024A68 );
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
