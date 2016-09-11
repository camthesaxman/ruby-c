signed int __fastcall sub_80AF828(int a1, int a2, int a3)
{
  int v3; // r0@1
  int v4; // r3@1
  int v5; // r2@3
  int v6; // r1@3
  int v7; // r2@5

  v3 = 16 * a1 + a3;
  v4 = 16 * a2 + a3;
  if ( *(_DWORD *)v3 < *(_DWORD *)v4 )
    return 1;
  if ( *(_DWORD *)v3 <= *(_DWORD *)v4 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    v6 = *(_DWORD *)(v4 + 4);
    if ( v5 >= v6 )
    {
      if ( v5 > v6 )
        return 0;
      v7 = 0;
      if ( *(_DWORD *)(v3 + 8) >= *(_DWORD *)(v4 + 8) )
        return v7;
    }
    return 1;
  }
  return 0;
}
