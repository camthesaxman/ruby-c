int atkDB_imprisoneffect()
{
  unsigned int i; // r6@4
  signed int v1; // r4@6
  _WORD *v2; // r3@6
  signed int v3; // r2@7
  _WORD *v4; // r0@7
  int v6; // [sp+18h] [bp-4h]@0

  if ( *(_DWORD *)(4 * v2024C07 + 0x2024C98) & 0x2000 )
    goto LABEL_21;
  sub_801529C(v2024C07);
  for ( i = 0; i < v2024A68; i = (i + 1) & 0xFF )
  {
    if ( 0 != (unsigned __int8)battle_side_get_owner(i) )
    {
      v1 = 0;
      v2 = (_WORD *)(88 * v2024C07 + 33704588);
      do
      {
        v3 = 0;
        v4 = (_WORD *)(88 * i + 33704588);
        do
        {
          if ( *v2 == *v4 && *v2 )
            break;
          ++v4;
          ++v3;
        }
        while ( v3 <= 3 );
        if ( v3 != 4 )
          break;
        ++v2;
        ++v1;
      }
      while ( v1 <= 3 );
      if ( v1 != 4 )
      {
        *(_DWORD *)(4 * v2024C07 + 0x2024C98) |= 0x2000u;
        v2024C10 += 5;
        break;
      }
    }
  }
  if ( i == v2024A68 )
LABEL_21:
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  return v6;
}
