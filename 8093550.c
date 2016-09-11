int sub_8093550()
{
  int v1; // [sp+4h] [bp-4h]@0

  SetVBlankCallback((int)sub_8093254);
  v4000200 |= 3u;
  v4000004 |= 0x18u;
  v4000000 = 8000;
  return v1;
}
