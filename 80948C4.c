int GetPokedexSeenCount()
{
  int result; // r0@2

  if ( sub_806912C() )
    LOWORD(result) = pokedex_count(1u);
  else
    LOWORD(result) = sub_8090F68(1u);
  return (unsigned __int16)result;
}
