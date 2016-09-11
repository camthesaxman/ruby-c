int unref_sub_801B40C()
{
  unsigned int v0; // r5@2
  _WORD *v1; // r4@2
  int v2; // r7@4
  char *v3; // r6@6
  int v4; // r8@6
  char v5; // r0@8
  char *v6; // r4@9
  char v7; // r0@11
  int v9; // [sp+0h] [bp-28h]@1
  int v10; // [sp+4h] [bp-24h]@2
  int v11; // [sp+24h] [bp-4h]@0

  v9 = 0;
  if ( v20239F8 & 1 )
  {
    do
    {
      v0 = 0;
      v1 = &gUnknown_081FC1D0;
      v10 = v9 + 1;
      do
      {
        if ( gBitTable[v0] & v2024C0C || (v2 = v0 + 2, v2024C0C & gBitTable[v0 + 2]) )
        {
          v0 = (v0 + 1) & 0xFF;
        }
        else
        {
          v3 = (char *)&gUnknown_081FC1D0 + 8 * v9;
          v4 = 8 * v9;
          if ( *(_WORD *)v3 == *(_WORD *)(2 * v0 + 0x2024C60) && *((_WORD *)v3 + 1) == *(_WORD *)(2 * v2 + 0x2024C60) )
          {
            *(_BYTE *)(12 * (battle_get_per_side_status(v0) & 1) + 0x2024C83) = 16 * v2 | v0;
            *(_WORD *)(12 * (battle_get_per_side_status(v0) & 1) + 0x2024C84) = *((_WORD *)v3 + 2);
            v5 = battle_get_per_side_status(v0);
            *(_WORD *)(2 * (v5 & 1) + 0x2024C7A) |= 4u;
          }
          v6 = (char *)&gUnknown_081FC1D0 + v4;
          if ( *(_WORD *)((char *)&gUnknown_081FC1D0 + v4) == *(_WORD *)(2 * v2 + 0x2024C60)
            && *((_WORD *)v6 + 1) == *(_WORD *)(2 * v0 + 0x2024C60) )
          {
            *(_BYTE *)(12 * (battle_get_per_side_status(v0) & 1) + 0x2024C83) = 16 * v0 | v2;
            *(_WORD *)(12 * (battle_get_per_side_status(v0) & 1) + 0x2024C84) = *((_WORD *)v6 + 2);
            v7 = battle_get_per_side_status(v0);
            *(_WORD *)(2 * (v7 & 1) + 0x2024C7A) |= 4u;
          }
          v0 = (v0 + 1) & 0xFF;
          v1 = &gUnknown_081FC1D0;
        }
      }
      while ( v0 <= 1 );
      ++v9;
    }
    while ( v1[4 * v10] != 0xFFFF );
  }
  return v11;
}
