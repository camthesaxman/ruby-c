int __fastcall sub_80C68EC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  _BYTE *v2; // r4@1
  __int16 v3; // r0@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  if ( *((_WORD *)v2 + 3) == 6 )
    v3 = 0;
  else
    v3 = *((_WORD *)v2 + 3) + 1;
  *((_WORD *)v2 + 3) = v3;
  if ( !*((_WORD *)v2 + 3) )
  {
    if ( *((_WORD *)v2 + 4) == 2 )
      sub_80C696C(*(_WORD *)v2);
    MapGridSetMetatileIdAt(*((_WORD *)v2 + 1), *((_WORD *)v2 + 2), *((_WORD *)v2 + 4) + *(_WORD *)v2);
    CurrentMapDrawMetatileAt(*((_WORD *)v2 + 1), *((_WORD *)v2 + 2));
    if ( *((_WORD *)v2 + 4) == 3 )
      DestroyTask(v1);
    else
      ++*((_WORD *)v2 + 4);
  }
  return v5;
}
