int __fastcall FieldObjectMoveDestCoords(int a1, unsigned __int8 a2, _WORD *a3, _WORD *a4)
{
  int v5; // [sp+4h] [bp-4h]@0

  *a3 = *(_WORD *)(a1 + 16);
  *a4 = *(_WORD *)(a1 + 18);
  MoveCoords(a2, a3, a4);
  return v5;
}
