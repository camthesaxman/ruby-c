signed int __fastcall cur_mapdata_get_door_x2_at(int a1, int a2, int a3)
{
  int v3; // r4@1
  unsigned __int16 v4; // r0@1
  int v5; // r0@1
  signed int result; // r0@2

  v3 = a1;
  v4 = MapGridGetMetatileIdAt(a2, a3);
  v5 = door_find(v3, v4);
  if ( v5 )
    result = *(_BYTE *)(v5 + 2);
  else
    result = -1;
  return result;
}
