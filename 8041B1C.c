int __fastcall pokemon_get_eggmoves(int a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r6@1
  int v5; // r4@1
  int v6; // r3@1
  unsigned int v7; // r2@1
  __int16 *v8; // r5@1
  unsigned int v9; // r2@6

  v3 = a2;
  v4 = 0;
  v5 = 0;
  v6 = (unsigned __int16)GetMonData(a1, 11, a3);
  v7 = 0;
  v8 = gEggMoves;
  if ( (unsigned __int16)gEggMoves[0] == v6 + 20000 )
  {
    v5 = 1;
  }
  else
  {
    while ( 1 )
    {
      v7 = (v7 + 1) & 0xFFFF;
      v8 = gEggMoves;
      if ( v7 > 0x471 )
        break;
      if ( (unsigned __int16)gEggMoves[v7] == v6 + 20000 )
      {
        v5 = (v7 + 1) & 0xFFFF;
        break;
      }
    }
  }
  v9 = 0;
  if ( (unsigned __int16)v8[v5] <= 0x4E20u )
  {
    do
    {
      *(_WORD *)(2 * v9 + v3) = v8[v5 + v9];
      v4 = (v4 + 1) & 0xFFFF;
      v9 = (v9 + 1) & 0xFFFF;
    }
    while ( v9 <= 9 && (unsigned __int16)v8[v5 + v9] <= 0x4E20u );
  }
  return (unsigned __int8)v4;
}
