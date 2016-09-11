int sub_8024F40()
{
  unsigned int v0; // r0@1
  int v1; // r0@4
  int v2; // r2@5
  char v3; // r0@15
  signed int v4; // r3@17
  int v6; // [sp+Ch] [bp-4h]@0

  v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
  v0 = *(_BYTE *)(v2024C10 + 2);
  if ( v0 <= 6 )
  {
    switch ( v0 )
    {
      case 0u:
        b_cancel_multi_turn_move_maybe(v2024A60);
        break;
      case 1u:
        v2024C07 = v2024C08;
        v1 = battle_side_get_owner(v2024C08);
        if ( *(_BYTE *)(12 * ((v1 ^ 1) & 0xFF) + 0x2024C88)
          && (v2 = *(_BYTE *)(12 * ((v1 ^ 1) & 0xFF) + 0x2024C89), *(_WORD *)(88 * v2 + 0x2024AA8)) )
        {
          v2024C08 = *(_BYTE *)(12 * ((v1 ^ 1) & 0xFF) + 0x2024C89);
        }
        else
        {
          v2024C08 = v2024A60;
        }
        break;
      case 2u:
        v2024D1E = sub_8012028();
        break;
      case 3u:
        v2024C08 = sub_801B5C0(v2024BE6, 0);
        break;
      case 4u:
        v2024D1E = (v2024C6C & (gBitTable[v2024A60] << 28)) != 0;
        break;
      case 5u:
        *(_BYTE *)(20 * v2024A60 + 0x2024D68) &= 0xF7u;
        *(_BYTE *)(20 * v2024A60 + 0x2024D68) &= 0xEFu;
        break;
      case 6u:
        if ( v2024A6A == v2016018 )
          goto _080250B2;
        if ( v2024A6E == v2016018 )
        {
          if ( v2024A6A == v2024A6E )
_080250B2:
            v3 = 0;
          else
            v3 = 2;
          v2024A60 = v3;
          v4 = 0;
          if ( *(_WORD *)(88 * (unsigned __int8)v3 + 0x2024A8C) != *(_WORD *)(2 * (unsigned __int8)v3 + 0x20160E8) )
          {
            do
              ++v4;
            while ( v4 <= 3
                 && *(_WORD *)(2 * v4 + 88 * v2024A60 + 0x2024A8C) != *(_WORD *)(2 * (unsigned __int8)v3 + 0x20160E8) );
          }
          if ( v4 == 4 )
            *(_WORD *)(2 * (unsigned __int8)v3 + 0x20160E8) = 0;
        }
        break;
      default:
        break;
    }
  }
  v2024C10 += 3;
  return v6;
}
