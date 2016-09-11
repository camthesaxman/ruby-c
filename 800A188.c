int PrintPokedexCount()
{
  int v0; // r0@1
  unsigned __int16 v1; // r0@1
  int v3; // [sp+0h] [bp-14h]@1
  int v4; // [sp+10h] [bp-4h]@1

  v0 = MenuPrint(&gMainMenuString_Pokedex, 2, 5);
  v1 = GetPokedexSeenCount(v0);
  sub_8072C14(&v3, v1, 18, 0);
  MenuPrint(&v3, 9, 5);
  return v4;
}
