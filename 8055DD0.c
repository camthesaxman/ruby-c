signed int __fastcall npc_080587EC(unsigned __int8 a1, int a2, __int16 a3, int a4)
{
  signed int v4; // r3@1
  unsigned int v5; // r4@1
  int *v6; // r1@3

  v4 = a4 << 16;
  v5 = 0;
  do
  {
    if ( v5 != a1 )
    {
      v6 = &dword_30048A0[9 * v5];
      if ( *((_WORD *)v6 + 8) == a3 && *((_WORD *)v6 + 9) == v4 >> 16 )
        return 1;
      if ( *((_WORD *)v6 + 10) == a3 && *((_WORD *)v6 + 11) == SHIWORD(v4) )
        return 1;
    }
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 0xF );
  return (unsigned __int8)MapGridIsImpassableAt(a3, SHIWORD(v4));
}
