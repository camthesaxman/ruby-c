int atk03_ppreduce()
{
  int v0; // r6@1
  signed int v1; // r0@3
  int v2; // r0@16
  int v4; // [sp+20h] [bp-4h]@0

  v0 = 1;
  if ( v2024A64 )
    return v4;
  if ( !((unsigned int)*(_BYTE *)(20 * v2024C07 + 0x2024D68) << 26 >> 31) )
  {
    v1 = *((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 6);
    if ( v1 == 32 )
    {
      v0 = (unsigned __int8)sub_8018324(
                              0x12u,
                              v2024C07,
                              0x2Eu,
                              0,
                              (unsigned int)*(_BYTE *)(20 * v2024C07 + 0x2024D68) << 26 >> 31)
         + 1;
    }
    else
    {
      if ( v1 > 32 )
      {
        if ( v1 != 64 )
          goto _0801C736;
      }
      else if ( v1 != 8 )
      {
_0801C736:
        if ( v2024C07 != v2024C08 && *(_BYTE *)(88 * v2024C08 + 0x2024AA0) == 46 )
          v0 = 2;
        goto _0801C756;
      }
      v0 = (unsigned __int8)sub_8018324(0x10u, v2024C07, 0x2Eu, 0, 0) + 1;
    }
  }
_0801C756:
  if ( !(v2024C6C & 0xA00) && *(_BYTE *)(88 * v2024C07 + v2024BE4 + 0x2024AA4) )
  {
    *(_BYTE *)(16 * v2024C07 + 0x2024D2A) |= 8u;
    v2 = *(_BYTE *)(88 * v2024C07 + v2024BE4 + 0x2024AA4);
    if ( v2 <= v0 )
      *(_BYTE *)(88 * v2024C07 + v2024BE4 + 0x2024AA4) = 0;
    else
      *(_BYTE *)(88 * v2024C07 + v2024BE4 + 0x2024AA4) = v2 - v0;
    if ( !(*(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 0x200000)
      && !(((unsigned int)*(_BYTE *)(28 * v2024C07 + 0x2024CC0) >> 4) & gBitTable[v2024BE4]) )
    {
      v2024A60 = v2024C07;
      dp01_build_cmdbuf_x02_a_b_varargs(0, v2024BE4 + 9, 0, 1u, (char *)(88 * v2024C07 + 33704612 + v2024BE4));
      dp01_battle_side_mark_buffer_for_execution(v2024C07);
    }
  }
  v2024C6C &= 0xFFFFF7FF;
  ++v2024C10;
  return v4;
}
