int __fastcall sub_80C6EE4(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 46) > 17 )
  {
    MapGridSetMetatileIdAt(v202FF98, v202FF9C, 3724);
    CurrentMapDrawMetatileAt(v202FF98, v202FF9C);
    *(_WORD *)(v1 + 46) = 0;
    *(_DWORD *)(v1 + 28) = sub_80C6F28;
  }
  else
  {
    ++*(_WORD *)(a1 + 46);
  }
  return v3;
}
