int __fastcall unref_sub_8073D84(unsigned __int8 a1, int a2)
{
  int v2; // r6@1
  int v3; // r7@1
  unsigned int v4; // r5@1
  int v6; // [sp+10h] [bp-4h]@0

  v2 = a2;
  v3 = a1;
  v4 = 0;
  do
  {
    if ( *(_BYTE *)(12 * v4 + 0x202F2CC) << 31 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(12 * v4 + 0x202F2C8) + 8) & 1) == v3 )
      {
        if ( (unsigned int)*(_WORD *)(12 * v4 + 0x202F2CE) << 20 >> 25 != (*(_BYTE *)(*(_DWORD *)(12 * v4 + 0x202F2C8)
                                                                                    + 11) & 0x1F)
          || (unused_sub_8074020(12 * v4 + 33747656), *(_BYTE *)(12 * v4 + 0x202F2CC) << 31) )
        {
          if ( *(_BYTE *)(12 * v4 + 0x202F2D0) )
            --*(_BYTE *)(12 * v4 + 0x202F2D0);
          else
            unused_sub_8073DFC(12 * v4 + 33747656, v2);
          unused_sub_8073F60(12 * v4 + 33747656, v2);
        }
      }
    }
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 0xF );
  return v6;
}
