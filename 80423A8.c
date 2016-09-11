signed int __fastcall sub_80423A8(_WORD *a1, _WORD *a2)
{
  _WORD *v2; // r5@1
  signed int v3; // r4@1
  _WORD *v4; // r1@1
  signed int v5; // r3@2
  _WORD *v6; // r2@2

  v2 = a2;
  v3 = 0;
  v4 = a1;
  do
  {
    v5 = 0;
    v6 = v2;
    do
    {
      if ( *v4 == *v6 )
        return 1;
      ++v6;
      ++v5;
    }
    while ( v5 <= 1 );
    ++v4;
    ++v3;
  }
  while ( v3 <= 1 );
  return 0;
}
