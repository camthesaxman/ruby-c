unsigned int __fastcall sub_801B5C0(unsigned __int16 a1, unsigned __int8 a2)
{
  int v2; // r7@1
  unsigned int v3; // r5@1
  unsigned int v4; // r6@2
  int v5; // r4@6
  unsigned int v6; // r4@7
  int v7; // r4@8
  unsigned int v8; // r0@8
  int v9; // r0@16
  int v10; // r4@17
  int v11; // r0@22
  char v12; // r0@31

  v2 = a1;
  v3 = 0;
  if ( a2 )
    v4 = (a2 - 1) & 0xFF;
  else
    v4 = *((_BYTE *)&gBattleMoves + 12 * a1 + 6);
  if ( v4 <= 0x40 )
  {
    switch ( v4 )
    {
      case 0u:
        v5 = (battle_side_get_owner(v2024C07) ^ 1) & 0xFF;
        if ( *(_BYTE *)(12 * v5 + 0x2024C88) )
        {
          v6 = *(_BYTE *)(12 * v5 + 0x2024C89);
          if ( *(_WORD *)(88 * v6 + 0x2024AA8) )
            goto _0801B850;
        }
        v7 = (unsigned __int8)battle_side_get_owner(v2024C07);
        v8 = 2 * v2;
        while ( 1 )
        {
          do
          {
            v8 = (unsigned __int16)Random(v8) % (signed int)v2024A68 << 24;
            v3 = v8 >> 24;
          }
          while ( v8 >> 24 == v2024C07 );
          v8 = (unsigned __int8)battle_side_get_owner(v8 >> 24);
          if ( v7 != v8 )
          {
            v8 = gBitTable[v3];
            if ( !(v2024C0C & (unsigned __int8)v8) )
              break;
          }
        }
        if ( *((_BYTE *)&gBattleMoves + 12 * v2 + 2) == 13
          && sub_8018324(0x10u, v2024C07, 0x1Fu, 0, 0) << 24
          && *(_BYTE *)(88 * v3 + 0x2024AA0) != 31 )
        {
          v3 ^= 2u;
          sub_81074C4(v3, *(_BYTE *)(88 * v3 + 0x2024AA0));
          *(_BYTE *)(20 * v3 + 0x2024D68) |= 2u;
        }
        break;
      case 1u:
      case 8u:
      case 0x20u:
      case 0x40u:
        v9 = battle_get_per_side_status(v2024C07) & 1 ^ 1;
        goto _0801B8B2;
      case 4u:
        v10 = (battle_side_get_owner(v2024C07) ^ 1) & 0xFF;
        if ( *(_BYTE *)(12 * v10 + 0x2024C88)
          && (v6 = *(_BYTE *)(12 * v10 + 0x2024C89), *(_WORD *)(88 * v6 + 0x2024AA8)) )
        {
_0801B850:
          v3 = v6;
        }
        else if ( v20239F8 & 1 && v4 & 4 )
        {
          v11 = battle_side_get_owner(v2024C07) << 24;
          if ( v11 )
          {
            if ( Random(v11) & 1 )
              v9 = 0;
            else
              v9 = 2;
          }
          else if ( Random(0) & 1 )
          {
            v9 = 1;
          }
          else
          {
            v9 = 3;
          }
_0801B8B2:
          v3 = (unsigned __int8)battle_get_side_with_given_state(v9);
          if ( v2024C0C & gBitTable[v3] )
            v3 ^= 2u;
        }
        else
        {
          v12 = battle_get_per_side_status(v2024C07);
          v3 = battle_get_side_with_given_state(v12 & 1 ^ 1) & 0xFF;
        }
        break;
      case 2u:
      case 0x10u:
        v3 = v2024C07;
        break;
      default:
        break;
    }
  }
  *(_BYTE *)(v2024C07 + 0x2016010) = v3;
  return v3;
}
