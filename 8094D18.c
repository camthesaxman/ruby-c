int pokemon_change_order()
{
  unsigned int v0; // r4@1
  unsigned __int8 v1; // r0@2
  int v3; // [sp+8h] [bp-4h]@0

  memcpy(33665024, dword_3004360, 600);
  v0 = 0;
  do
  {
    v1 = pokemon_order_func(v0);
    memcpy(&dword_3004360[25 * v1], 100 * v0 + 33665024, 100);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 5 );
  return v3;
}
