signed int __fastcall pokemon_has_move(int a1, unsigned __int16 a2, int a3)
{
  int v3; // r6@1
  int v4; // r5@1
  unsigned int v5; // r4@1

  v3 = a1;
  v4 = a2;
  v5 = 0;
  do
  {
    if ( GetMonData(v3, v5 + 13, a3) == v4 )
      return 1;
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 3 );
  return 0;
}
