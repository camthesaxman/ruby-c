signed int __fastcall sub_80BF0B8(signed int a1)
{
  signed int result; // r0@3

  if ( !(a1 / 10) )
    goto LABEL_19;
  if ( !(a1 / 100) )
    return 2;
  if ( !(a1 / 1000) )
    return 3;
  if ( !(a1 / 10000) )
    return 4;
  if ( !(a1 / 100000) )
    return 5;
  if ( !(a1 / 1000000) )
    return 6;
  if ( !(a1 / 10000000) )
    return 7;
  if ( !(a1 / 100000000) )
    result = 8;
  else
LABEL_19:
    result = 1;
  return result;
}
