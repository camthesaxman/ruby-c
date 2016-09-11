int __fastcall npc_coords_shift(int result, __int16 a2, __int16 a3)
{
  *(_WORD *)(result + 20) = *(_WORD *)(result + 16);
  *(_WORD *)(result + 22) = *(_WORD *)(result + 18);
  *(_WORD *)(result + 16) = a2;
  *(_WORD *)(result + 18) = a3;
  return result;
}
