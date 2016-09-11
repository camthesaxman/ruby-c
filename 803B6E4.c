int __fastcall SetBattleMonMoveSlot(int a1, unsigned __int16 a2, int a3)
{
  int v4; // [sp+4h] [bp-4h]@0

  a3 = (unsigned __int8)a3;
  *(_WORD *)(a1 + 12 + 2 * a3) = a2;
  *(_BYTE *)(a1 + 36 + a3) = gBattleMoves[12 * a2 + 4];
  return v4;
}
