int sub_8026B78()
{
  int v0; // r4@2
  unsigned int v1; // r6@2
  int v2; // r4@10
  signed int v3; // r4@11
  char v4; // r0@18
  char v5; // r1@18
  int v7; // [sp+1Ch] [bp-4h]@0

  if ( *(_WORD *)(88 * v2024C08 + 0x2024AAE) == 175 )
  {
    v0 = *(_BYTE *)(28 * v2024C08 + 0x2024DF7);
    v1 = *(_BYTE *)(28 * v2024C08 + 0x2024E0A);
  }
  else
  {
    v0 = (unsigned __int8)itemid_get_x12(*(_WORD *)(88 * v2024C08 + 0x2024AAE));
    v1 = itemid_get_quality(*(_WORD *)(88 * v2024C08 + 0x2024AAE)) & 0xFF;
  }
  v2024C0B = v2024C08;
  if ( v0 == 39 && ((unsigned __int16)Random(v2024C08) % 0x64u & 0xFFFF) < v1 )
  {
    sub_81074F8(v2024C08, 39);
    *(_BYTE *)(20 * v2024C08 + 0x2024D68) |= 0x80u;
  }
  if ( *(_BYTE *)(88 * v2024C08 + 0x2024AA0) != 5 )
  {
    if ( *(_DWORD *)(4 * v2024C08 + 0x2024C98) & 0x18 )
    {
      v3 = 0;
      if ( *(_BYTE *)(28 * v2024C08 + 0x2024CBD) == v2024C07
        && *(_BYTE *)(88 * v2024C07 + 0x2024AAA) >= (unsigned int)*(_BYTE *)(88 * v2024C08 + 0x2024AAA) )
      {
        v3 = 1;
      }
    }
    else
    {
      v2 = (*(_BYTE *)(88 * v2024C07 + 0x2024AAA)
          - *(_BYTE *)(88 * v2024C08 + 0x2024AAA)
          + gBattleMoves[12 * v2024BE6 + 3]) & 0xFFFF;
      if ( (signed int)(((unsigned __int16)Random((*(_BYTE *)(88 * v2024C07 + 0x2024AAA)
                                                 - *(_BYTE *)(88 * v2024C08 + 0x2024AAA)
                                                 + gBattleMoves[12 * v2024BE6 + 3]) << 16)
                       % 0x64u & 0xFFFF)
                      + 1) >= v2 )
        goto _08026DE0;
      v3 = 1;
      if ( *(_BYTE *)(88 * v2024C07 + 0x2024AAA) < (unsigned int)*(_BYTE *)(88 * v2024C08 + 0x2024AAA) )
        goto _08026DE0;
    }
    if ( !v3 )
    {
_08026DE0:
      v2024C68 |= 1u;
      v2024D23 = *(_BYTE *)(88 * v2024C07 + 0x2024AAA) < (unsigned int)*(_BYTE *)(88 * v2024C08 + 0x2024AAA);
      v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
      return v7;
    }
    if ( *(_BYTE *)(16 * v2024C08 + 0x2024D28) & 2 )
    {
      v2024BEC = *(_WORD *)(88 * v2024C08 + 0x2024AA8) - 1;
      v4 = v2024C68;
      v5 = 64;
    }
    else
    {
      if ( (unsigned int)*(_BYTE *)(20 * v2024C08 + 0x2024D68) >> 7 )
      {
        v2024BEC = *(_WORD *)(88 * v2024C08 + 0x2024AA8) - 1;
        v2024C68 |= 0x80u;
        v2024C04 = *(_WORD *)(88 * v2024C08 + 0x2024AAE);
_08026DCA:
        v2024C10 += 5;
        return v7;
      }
      v2024BEC = *(_WORD *)(88 * v2024C08 + 0x2024AA8);
      v4 = v2024C68;
      v5 = 16;
    }
    v2024C68 = v4 | v5;
    goto _08026DCA;
  }
  v2024C68 |= 1u;
  v2024C06 = 5;
  v2024C10 = &gUnknown_081D9826;
  sub_81074C4(v2024C08, 5);
  return v7;
}
