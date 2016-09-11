int __fastcall sub_8101FA4(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  char v3; // r0@2

  v1 = a1;
  v2 = sub_8102484();
  sub_8104DA4(v2);
  sub_8102DEC(0);
  sub_8102DEC(1);
  sub_8102DEC(2);
  *(_WORD *)(v1 + 8) = 0;
  if ( v2000004 & 0x20 )
  {
    sub_810430C();
    v3 = 10;
  }
  else
  {
    sub_8104CAC(1);
    v3 = 11;
  }
  v2000000 = v3;
  v200001A = 8;
  if ( v200000A )
    v200001A = dp15_jump_random_unknown();
  return 0;
}
