signed int __fastcall an_walk_any_2(_BYTE *a1, int a2)
{
  _BYTE *v2; // r4@1
  int v3; // r5@1
  signed int result; // r0@2

  v2 = a1;
  v3 = a2;
  if ( sub_806468C(a2) << 24 )
  {
    npc_coords_shift_still((int)v2);
    *v2 |= 8u;
    *(_BYTE *)(v3 + 44) |= 0x40u;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
