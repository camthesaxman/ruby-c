signed int __fastcall sub_801C174(unsigned __int16 a1)
{
  int v1; // r5@1
  int v2; // r0@14

  v1 = a1;
  if ( *(_DWORD *)(4 * v2024C08 + 0x2024C98) & 0x18 && *(_BYTE *)(28 * v2024C08 + 0x2024CBD) == v2024C07 )
    goto _0801C290;
  if ( !(v2024C6C & 0x10000) && *(_DWORD *)(4 * v2024C08 + 0x2024C98) & 0x40
    || (v2024C6C &= 0xFFFEFFFF, !(v2024C6C & 0x20000)) && *(_DWORD *)(4 * v2024C08 + 0x2024C98) & 0x80
    || (v2024C6C &= 0xFFFDFFFF, !(v2024C6C & 0x40000)) && *(_DWORD *)(4 * v2024C08 + 0x2024C98) & 0x40000 )
  {
    v2024C68 |= 1u;
_0801C290:
    mcmd_jump_if_move_not_executed(7u, v1);
    return 1;
  }
  v2024C6C &= 0xFFFBFFFF;
  if ( !(unsigned __int8)sub_8018324(0x13u, 0, 0xDu, 0, 0)
    && !(sub_8018324(0x13u, 0, 0x4Du, 0, 0) << 24)
    && v2024DB8 & 7
    && *((_BYTE *)&gBattleMoves + 12 * v1) == 152 )
  {
    goto _0801C290;
  }
  v2 = *((_BYTE *)&gBattleMoves + 12 * v1);
  if ( v2 == 17 || v2 == 78 )
    goto _0801C290;
  return 0;
}
