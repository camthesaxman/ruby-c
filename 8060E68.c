int __fastcall sub_8060E68(int a1, int a2, char a3)
{
  _BYTE *v3; // r6@1
  int v4; // r8@1
  int v5; // r5@1
  __int16 v7; // [sp+0h] [bp-18h]@1
  __int16 v8; // [sp+2h] [bp-16h]@1
  int v9; // [sp+14h] [bp-4h]@1

  v3 = (_BYTE *)a1;
  v4 = a2;
  v5 = (unsigned __int8)a3;
  v7 = *(_WORD *)(a1 + 16);
  v8 = *(_WORD *)(a1 + 18);
  FieldObjectSetDirection(a1, a3);
  MoveCoords(v5, &v7, &v8);
  npc_coords_shift((int)v3, v7, v8);
  sub_806467C(v4, v5);
  *(_BYTE *)(v4 + 44) &= 0xBFu;
  *v3 |= 4u;
  *(_WORD *)(v4 + 50) = 1;
  return v9;
}
