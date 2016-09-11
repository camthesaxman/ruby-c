signed int __fastcall ai_has_super_effective_move_on_field(unsigned __int8 a1)
{
  int v1; // r8@1
  int v2; // r3@1
  int v3; // r4@2
  unsigned __int16 *v4; // r5@2
  unsigned __int8 *v5; // r9@2
  int v7; // r3@11
  int v8; // r4@12
  unsigned __int16 *v9; // r5@12
  unsigned __int8 *v10; // r9@12

  v1 = a1;
  v2 = (unsigned __int8)battle_get_side_with_given_state(0);
  if ( !(v2024C0C & gBitTable[v2]) )
  {
    v3 = 0;
    v4 = (unsigned __int16 *)(88 * v2 + 33704576);
    v5 = (unsigned __int8 *)(88 * v2 + 33704608);
    while ( !*(_WORD *)(2 * v3 + 88 * v2024A60 + 0x2024A8C)
         || !(ai_rate_move(*(_WORD *)(2 * v3 + 88 * v2024A60 + 0x2024A8C), *v4, *v5) & 2)
         || !v1 && !((unsigned __int16)Random(0) % 0xAu << 16) )
    {
      if ( ++v3 > 3 )
        goto _0803659C;
    }
    return 1;
  }
_0803659C:
  if ( v20239F8 & 1 )
  {
    v7 = (unsigned __int8)battle_get_side_with_given_state(2);
    if ( !(v2024C0C & gBitTable[v7]) )
    {
      v8 = 0;
      v9 = (unsigned __int16 *)(88 * v7 + 33704576);
      v10 = (unsigned __int8 *)(88 * v7 + 33704608);
      while ( !*(_WORD *)(2 * v8 + 88 * v2024A60 + 0x2024A8C)
           || !(ai_rate_move(*(_WORD *)(2 * v8 + 88 * v2024A60 + 0x2024A8C), *v9, *v10) & 2)
           || !v1 && !((unsigned __int16)Random(0) % 0xAu << 16) )
      {
        if ( ++v8 > 3 )
          return 0;
      }
      return 1;
    }
  }
  return 0;
}
