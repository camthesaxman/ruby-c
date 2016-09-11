signed int __fastcall battle_get_per_side_status_permutated(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v2; // r0@2
  signed int result; // r0@4

  v1 = a1;
  if ( sub_8076BE0() << 24 || (v2 = (unsigned __int8)battle_get_per_side_status(v1)) != 0 && v2 != 3 )
    result = 1;
  else
    result = 2;
  return result;
}
