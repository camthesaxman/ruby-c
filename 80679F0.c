signed int __fastcall s87_pokemartdecor(int a1)
{
  int v1; // r0@1

  v1 = script_read_word(a1);
  CreateDecorationShop1Menu(v1);
  sub_80655F0();
  return 1;
}
