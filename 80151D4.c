int __fastcall sub_80151D4(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int v3; // r5@1
  signed int v4; // r3@2
  _WORD *v5; // r1@2
  _BYTE *v6; // r1@6
  int v8; // [sp+14h] [bp-4h]@0

  v3 = a2;
  a3 = (unsigned __int16)a3;
  if ( *(_BYTE *)(88 * a1 + 0x2024AA0) == 46 )
  {
    v4 = 0;
    v5 = (_WORD *)(88 * a2 + 33704588);
    do
    {
      if ( *v5 == a3 )
        break;
      ++v5;
      ++v4;
    }
    while ( v4 <= 3 );
    if ( v4 != 4 )
    {
      v6 = (_BYTE *)(v4 + 88 * v3 + 33704612);
      if ( *v6 )
        --*v6;
      if ( !(*(_DWORD *)(88 * v3 + 0x2024AD0) & 0x200000)
        && !(((unsigned int)*(_BYTE *)(28 * v3 + 0x2024CC0) >> 4) & gBitTable[v4]) )
      {
        v2024A60 = v3;
        dp01_build_cmdbuf_x02_a_b_varargs(0, v4 + 9, 0, 1u, (char *)(88 * (unsigned __int8)v3 + 33704612 + v4));
        dp01_battle_side_mark_buffer_for_execution(v2024A60);
      }
    }
  }
  return v8;
}
