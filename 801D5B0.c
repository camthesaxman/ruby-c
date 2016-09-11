int __fastcall atk07_cmd7(int a1)
{
  int v1; // r1@1
  int v2; // r4@5
  unsigned int v3; // r6@5
  int v4; // r1@14
  int v6; // [sp+10h] [bp-4h]@0

  v1 = (100 - (Random(a1) & 0xF)) & 0xFFFF;
  if ( v2024BEC )
  {
    v2024BEC *= v1;
    v2024BEC /= 100;
    if ( !v2024BEC )
      v2024BEC = 1;
  }
  if ( *(_WORD *)(88 * v2024C08 + 0x2024AAE) == 175 )
  {
    v2 = *(_BYTE *)(28 * v2024C08 + 0x2024DF7);
    v3 = *(_BYTE *)(28 * v2024C08 + 0x2024E0A);
  }
  else
  {
    v2 = (unsigned __int8)itemid_get_x12(*(_WORD *)(88 * v2024C08 + 0x2024AAE));
    v3 = itemid_get_quality(*(_WORD *)(88 * v2024C08 + 0x2024AAE)) & 0xFF;
  }
  v2024C0B = v2024C08;
  if ( v2 == 39 && ((unsigned __int16)Random(v2024C08) % 0x64u & 0xFFFF) < v3 )
  {
    sub_81074F8(v2024C08, 39);
    *(_BYTE *)(20 * v2024C08 + 0x2024D68) |= 0x80u;
  }
  if ( !(*(_DWORD *)(88 * v2024C08 + 0x2024AD0) & 0x1000000)
    && (gBattleMoves[12 * v2024BE6] == 101
     || *(_BYTE *)(16 * v2024C08 + 0x2024D28) & 2
     || (unsigned int)*(_BYTE *)(20 * v2024C08 + 0x2024D68) >> 7) )
  {
    v4 = *(_WORD *)(88 * v2024C08 + 0x2024AA8);
    if ( v4 <= v2024BEC )
    {
      v2024BEC = v4 - 1;
      if ( *(_BYTE *)(16 * v2024C08 + 0x2024D28) & 2 )
      {
        v2024C68 |= 0x40u;
      }
      else if ( (unsigned int)*(_BYTE *)(20 * v2024C08 + 0x2024D68) >> 7 )
      {
        v2024C68 |= 0x80u;
        v2024C04 = *(_WORD *)(88 * v2024C08 + 0x2024AAE);
      }
    }
  }
  ++v2024C10;
  return v6;
}
