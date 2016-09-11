signed int __fastcall sub_8082894(_WORD *a1, int a2)
{
  signed int v2; // r3@1
  _WORD *v3; // r2@1

  a2 = (unsigned __int16)a2;
  v2 = 0;
  v3 = a1;
  do
  {
    if ( *v3 == a2 )
      return v2;
    v3 += 8;
    ++v2;
  }
  while ( v2 <= 55 );
  return -1;
}
