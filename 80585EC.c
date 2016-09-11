signed int __fastcall sub_80585EC(int a1, int a2, int a3)
{
  int v3; // r4@1
  __int16 v4; // r5@1
  __int16 v5; // r6@1
  unsigned __int16 v6; // r0@1
  int v7; // r0@1
  signed int result; // r0@2

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = MapGridGetMetatileIdAt(a2, a3);
  v7 = door_find(v3, v6);
  if ( v7 )
    result = (char)task_overworld_door_add_if_inactive(v7, (int)&gUnknown_0830F87C, v4, v5);
  else
    result = -1;
  return result;
}
