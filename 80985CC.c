signed int sub_80985CC()
{
  int v0; // r2@2
  int v1; // r3@2
  int v3; // r0@4

  if ( v20008AD != 20 )
  {
    ++v20008A8;
    --v20008AA;
    sub_809D034(100694016, 10, 0, 33554600);
    sub_809D16C(100694016, 10, v20008AA, 12);
    sub_80994A8(-8);
    ++v20008AD;
    if ( v20008AD != 20 )
      return 1;
    v203847C = 0;
    v3 = sub_809954C(33784956, 0, v0, v1);
    party_compaction(v3);
    sub_809D034(100694016, 21, 0, 33554600);
  }
  return 0;
}
