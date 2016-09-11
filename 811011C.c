int __fastcall sub_811011C(signed int a1)
{
  unsigned __int8 v1; // r4@7
  int v3; // [sp+4h] [bp-4h]@0

  if ( a1 == 2 )
  {
    v1 = 24;
  }
  else if ( a1 > 2 )
  {
    if ( a1 != 3 )
      return v3;
    v1 = 25;
  }
  else
  {
    if ( a1 != 1 )
      return v3;
    v1 = 23;
  }
  if ( (unsigned int)sub_8053108(v1) <= 0x270E )
    sav12_xor_increment(v1);
  return v3;
}
