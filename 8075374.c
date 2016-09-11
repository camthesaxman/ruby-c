signed int sub_8075374()
{
  signed int result; // r0@2

  if ( (unsigned __int8)FuncIsActiveTask(sub_8075408) == 1 )
  {
    result = 0;
  }
  else
  {
    ClearPokemonCrySongs();
    result = 1;
  }
  return result;
}
