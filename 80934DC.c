unsigned int __fastcall sav12_xor_get_clamped_above(unsigned __int8 a1, unsigned int a2)
{
  unsigned int v2; // r4@1
  unsigned int result; // r0@1

  v2 = a2;
  result = sub_8053108(a1);
  if ( result > v2 )
    result = v2;
  return result;
}
