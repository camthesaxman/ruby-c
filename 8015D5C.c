int __fastcall sub_8015D5C(unsigned __int8 a1, unsigned __int16 a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r9@1
  int v5; // r4@1
  unsigned __int8 v6; // r0@2
  int v7; // r3@2
  signed int v8; // r2@4
  _WORD *v9; // r0@5

  v2 = a2;
  v3 = 0;
  v4 = (unsigned __int8)battle_side_get_owner(a1);
  v5 = 0;
  if ( (signed int)v2024A68 > 0 )
  {
    do
    {
      v6 = battle_side_get_owner((unsigned __int8)v5);
      v7 = v5 + 1;
      if ( v4 != v6 && *(_DWORD *)(4 * v5 + 0x2024C98) & 0x2000 )
      {
        v8 = 0;
        if ( v2 == *(_WORD *)(88 * v5 + 0x2024A8C) )
        {
_08015DCC:
          if ( v8 <= 3 )
            v3 = (v3 + 1) & 0xFF;
        }
        else
        {
          v9 = (_WORD *)(88 * v5 + 33704588);
          while ( 1 )
          {
            ++v9;
            if ( ++v8 > 3 )
              break;
            if ( v2 == *v9 )
              goto _08015DCC;
          }
        }
      }
      ++v5;
    }
    while ( v7 < v2024A68 );
  }
  return v3;
}
