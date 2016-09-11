int __fastcall sub_80AF15C(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r5@1
  int result; // r0@2
  int v5; // r0@4
  int v6; // r0@4
  unsigned int v7; // r1@4

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  if ( sub_80AF59C(v1 >> 24) << 24 )
  {
    result = 0;
  }
  else
  {
    if ( v2 == v2038695 )
    {
      v6 = 2 * v2019204;
      v7 = v3 << 6;
    }
    else
    {
      v5 = sub_81288F4(v2);
      v6 = 2 * sub_8128944(v5) & 0x1FF;
      v7 = v2 << 6;
    }
    result = *(_WORD *)(v6 + v7 + 33785230);
  }
  return result;
}
