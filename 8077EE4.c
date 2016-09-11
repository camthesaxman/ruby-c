int __fastcall sub_8077EE4(unsigned __int8 a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r1@1
  unsigned int v4; // r5@1
  unsigned __int16 v5; // r1@4
  int result; // r0@10

  v2 = a1;
  v3 = a2 << 24;
  v4 = v3 >> 24;
  if ( (v3 - 50331648) >> 24 > 1 )
  {
    LOBYTE(result) = sub_8077ABC(a1, BYTE3(v3));
  }
  else
  {
    if ( sub_8076BE0() << 24 )
    {
      if ( v201934C & 1 )
        v5 = v201934A;
      else
        v5 = v2019348;
    }
    else if ( *(_WORD *)(4 * v2 + 0x2017802) )
    {
      v5 = *(_WORD *)(4 * v2 + 0x2017802);
    }
    else
    {
      v5 = *(_WORD *)(2 * v2 + 0x202F7CA);
    }
    if ( v4 == 3 )
      LOBYTE(result) = sub_8077E44(v2, v5, 1u);
    else
      LOBYTE(result) = sub_8077E44(v2, v5, 0);
  }
  return (unsigned __int8)result;
}
