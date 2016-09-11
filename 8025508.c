int sub_8025508()
{
  int v0; // r7@1
  int v1; // r6@1
  int v2; // r5@1
  int v4; // [sp+10h] [bp-4h]@0

  v0 = *(_BYTE *)(2 * v2024C07 + 0x20160AC) | (*(_BYTE *)(2 * v2024C07 + 0x20160AD) << 8);
  v1 = *(_BYTE *)(4 * v2024C07 + 0x2016100) | (*(_BYTE *)(4 * v2024C07 + 0x2016101) << 8);
  v2 = *(_BYTE *)(4 * v2024C07 + 0x2016102) | (*(_BYTE *)(4 * v2024C07 + 0x2016103) << 8);
  if ( v0 && v0 != 0xFFFF )
  {
    v2024C6C &= 0xFFFFFBFF;
    v2024BE6 = v0;
_0802565C:
    v2024C08 = sub_801B5C0(v2024BE6, 0);
    v2024C10 = *(&gUnknown_081D6BBC + gBattleMoves[12 * v2024BE6]);
    return v4;
  }
  if ( !v1 )
  {
_08025644:
    if ( !v2 || v2 == 0xFFFF )
    {
      *(_BYTE *)(20 * v2024C07 + 0x2024D68) |= 0x20u;
      ++v2024C10;
      return v4;
    }
    v2024C6C &= 0xFFFFFBFF;
    v2024BE6 = v2;
    goto _0802565C;
  }
  if ( !v2 || v1 == 0xFFFF || v2 == 0xFFFF )
  {
    if ( v1 && v1 != 0xFFFF )
    {
      v2024C6C &= 0xFFFFFBFF;
      v2024BE6 = v1;
      goto _0802565C;
    }
    goto _08025644;
  }
  v2024C6C &= 0xFFFFFBFF;
  if ( Random(v2024C6C) & 1 )
    v2024BE6 = v1;
  else
    v2024BE6 = v2;
  v2024C08 = sub_801B5C0(v2024BE6, 0);
  v2024C10 = *(&gUnknown_081D6BBC + gBattleMoves[12 * v2024BE6]);
  return v4;
}
