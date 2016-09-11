int __fastcall oamt_npc_ministep_reset(int result, unsigned __int8 a2, unsigned __int8 a3)
{
  *(_WORD *)(result + 52) = a2;
  *(_WORD *)(result + 54) = a3;
  *(_WORD *)(result + 56) = 0;
  return result;
}
