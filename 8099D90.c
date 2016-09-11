signed int __fastcall sub_8099D90(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned int v2; // r1@1
  unsigned int i; // r2@1
  signed int result; // r0@5

  v1 = a1;
  v2 = (unsigned __int8)get_preferred_box();
  for ( i = 0; v2 != v1; i = (i + 1) & 0xFF )
  {
    v2 = (v2 + 1) & 0xFF;
    if ( v2 > 0xD )
      v2 = 0;
  }
  result = -1;
  if ( i <= 6 )
    result = 1;
  return result;
}
