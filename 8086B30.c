int __fastcall sub_8086B30(int a1)
{
  int v1; // r4@1

  v1 = a1;
  sub_8086B98();
  if ( (signed int)*(_WORD *)(v1 + 12) > 3 )
  {
    sub_8086C30();
    ++*(_WORD *)(v1 + 8);
  }
  return 0;
}
