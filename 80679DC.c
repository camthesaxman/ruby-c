signed int __fastcall s86_pokemart(int a1)
{
  int v1; // r0@1

  v1 = script_read_word(a1);
  CreatePokemartMenu(v1);
  sub_80655F0();
  return 1;
}
