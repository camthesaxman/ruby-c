int __fastcall sub_8060D20(int a1, int a2, char a3, unsigned __int8 a4)
{
  _BYTE *v4; // r8@1
  int v5; // r9@1
  int v6; // r4@1
  int v7; // r6@1
  __int16 v9; // [sp+0h] [bp-1Ch]@1
  __int16 v10; // [sp+2h] [bp-1Ah]@1
  int v11; // [sp+18h] [bp-4h]@1

  v4 = (_BYTE *)a1;
  v5 = a2;
  v6 = (unsigned __int8)a3;
  v7 = a4;
  v9 = *(_WORD *)(a1 + 16);
  v10 = *(_WORD *)(a1 + 18);
  FieldObjectSetDirection(a1, a3);
  MoveCoords(v6, &v9, &v10);
  npc_coords_shift((int)v4, v9, v10);
  oamt_npc_ministep_reset(v5, v6, v7);
  *(_BYTE *)(v5 + 44) &= 0xBFu;
  *v4 |= 4u;
  *(_WORD *)(v5 + 50) = 1;
  return v11;
}
