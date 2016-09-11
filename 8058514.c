int __fastcall door_find(int a1, int a2)
{
  int v2; // r2@1

  v2 = a1;
  a2 = (unsigned __int16)a2;
  while ( *(_DWORD *)(v2 + 4) )
  {
    if ( *(_WORD *)v2 == a2 )
      return v2;
    v2 += 12;
  }
  return 0;
}
