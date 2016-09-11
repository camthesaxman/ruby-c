signed int __fastcall sub_8124BEC(_BYTE *a1)
{
  _BYTE *v1; // r3@1
  unsigned int v2; // r2@1
  int v3; // r0@1
  char v4; // r2@6
  char v5; // r1@6
  int v6; // r0@8

  v1 = a1;
  v2 = 0;
  v3 = *a1 & 0x7F;
  if ( v3 == 1 )
  {
    if ( (unsigned int)v1[8] > 0 )
    {
      do
      {
        *(_WORD *)(2 * (*((_WORD *)v1 + 3) + v2) + 0x202EEC8) = *((_WORD *)v1 + 2);
        v2 = (v2 + 1) & 0xFF;
      }
      while ( v2 < v1[8] );
    }
    v4 = *v1;
    v5 = (*v1 & 0x7F) + 1;
  }
  else
  {
    if ( v3 != 2 )
      return 1;
    if ( (unsigned int)v1[8] > 0 )
    {
      do
      {
        v6 = 2 * (*((_WORD *)v1 + 3) + v2);
        *(_WORD *)(v6 + 33746632) = *(_WORD *)(v6 + 33745608);
        v2 = (v2 + 1) & 0xFF;
      }
      while ( v2 < v1[8] );
    }
    v4 = *v1;
    v5 = (*v1 & 0x7F) - 1;
  }
  *v1 = v4 & 0x80 | v5 & 0x7F;
  return 1;
}
