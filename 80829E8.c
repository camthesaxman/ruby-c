signed int __fastcall sub_80829E8(int a1, unsigned __int16 a2, int a3)
{
  int v3; // r4@1
  signed int v4; // r1@1
  int v5; // r3@1

  v3 = a2;
  a3 = (unsigned __int16)a3;
  v4 = 0;
  v5 = a1 + 10;
  do
  {
    if ( *(_WORD *)v5 == v3 && *(_WORD *)(v5 + 2) == a3 )
      return 1;
    v5 += 16;
    ++v4;
  }
  while ( v4 <= 55 );
  return 0;
}
