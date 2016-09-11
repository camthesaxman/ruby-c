int __fastcall oamt_add_pos2_onto_pos1(int result)
{
  *(_WORD *)(result + 32) += *(_WORD *)(result + 36);
  *(_WORD *)(result + 34) += *(_WORD *)(result + 38);
  *(_WORD *)(result + 36) = 0;
  *(_WORD *)(result + 38) = 0;
  return result;
}
