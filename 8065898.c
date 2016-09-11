int __fastcall sub_8065898(int a1)
{
  int v1; // r0@1

  v1 = script_read_halfword(a1);
  call_via_r0(*(void **)((char *)&gSpecials + (4 * v1 & 0x3FFFF)));
  return 0;
}
