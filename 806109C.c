signed int __fastcall sub_806109C(_BYTE *a1, int a2)
{
  int v2; // r4@1
  signed int result; // r0@2

  v2 = a2;
  if ( npc_obj_ministep_stop_on_arrival(a1, a2) << 24 )
  {
    *(_WORD *)(v2 + 50) = 2;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
