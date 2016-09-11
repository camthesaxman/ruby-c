signed int __fastcall CheckIfItemIsTMHMOrEvolutionStone(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  signed int result; // r0@2

  v1 = a1 << 16;
  v2 = v1 >> 16;
  if ( (int (*)())itemid_get_overworld_function(HIWORD(v1)) == ItemUseOutOfBattle_TMHM )
  {
    result = 1;
  }
  else if ( (int (*)())itemid_get_overworld_function(v2) == ItemUseOutOfBattle_EvolutionStone )
  {
    result = 2;
  }
  else
  {
    result = 0;
  }
  return result;
}
