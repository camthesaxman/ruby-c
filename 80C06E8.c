signed int __fastcall sub_80C06E8(int a1, _BYTE *a2, int a3)
{
  int v3; // r4@1
  _BYTE *v4; // r5@1
  char v5; // r3@1
  int v6; // r0@1
  unsigned int v8; // r1@3
  int v9; // r0@6

  v3 = a1;
  v4 = a2;
  v5 = *a2;
  v6 = *a2;
  if ( *a2 )
  {
    v8 = 0;
    while ( *(_BYTE *)(4 * v8 + v3) != v6 )
    {
      v8 = (v8 + 1) & 0xFF;
      if ( v8 > 0xF )
      {
        v9 = (a3 << 24 >> 22) + v3;
        *(_BYTE *)v9 = v5;
        *(_BYTE *)(v9 + 1) = 1;
        *(_WORD *)(v9 + 2) = *((_WORD *)v4 + 1);
        return 1;
      }
    }
  }
  return 0;
}
