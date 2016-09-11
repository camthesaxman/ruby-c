int __fastcall sub_803C434(unsigned __int8 a1)
{
  char v1; // r0@1
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@2
  unsigned int v5; // r0@3

  v1 = battle_get_per_side_status(a1);
  v2 = v1 & 1 ^ 1;
  v3 = v1 & 1 ^ 1;
  if ( v20239F8 & 1 )
  {
    v5 = (unsigned __int8)sub_803C348(0);
    if ( v5 <= 1 )
    {
      if ( v2024C0C & gBitTable[v2] )
        v4 = v3 ^ 2;
      else
        v4 = v2;
    }
    else if ( Random(v5) & 1 )
    {
      v4 = v2;
    }
    else
    {
      v4 = v2 ^ 2;
    }
  }
  else
  {
    v4 = v1 & 1 ^ 1;
  }
  return (unsigned __int8)battle_get_side_with_given_state(v4);
}
