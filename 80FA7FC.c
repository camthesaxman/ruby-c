signed int __fastcall sub_80FA7FC(_WORD *a1, _WORD *a2)
{
  _WORD *v2; // r3@1
  _WORD *v3; // r2@1
  unsigned int v4; // r4@1
  int v5; // r1@2
  int v6; // r0@2

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    v5 = *v2;
    v6 = *v3;
    ++v3;
    ++v2;
    if ( v5 != v6 )
      return 0;
    v4 = (v4 + 1) & 0xFFFF;
  }
  while ( v4 <= 1 );
  return 1;
}
