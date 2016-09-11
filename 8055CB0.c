signed int __fastcall sub_8055CB0(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r4@1
  int v4; // r5@1
  signed int result; // r0@2
  signed __int16 v6; // [sp+0h] [bp-14h]@1

  v3 = a1;
  v4 = a2;
  *(_BYTE *)(a2 + 25) = npc_something3(a3, *(_BYTE *)(a2 + 25));
  FieldObjectMoveDestCoords(v4, *(_BYTE *)(v4 + 25), &v6, &v6 + 1);
  if ( npc_080587EC(*(_BYTE *)(v3 + 2), *(_BYTE *)(v4 + 25), v6, *(&v6 + 1)) << 24 )
  {
    result = 0;
  }
  else
  {
    *(_BYTE *)(v4 + 33) = 16;
    npc_coords_shift(v4, v6, *(&v6 + 1));
    FieldObjectUpdateZCoord(v4);
    result = 1;
  }
  return result;
}
