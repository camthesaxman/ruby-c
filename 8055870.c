int sub_8055870()
{
  int result; // r0@2
  char *v1; // r1@4
  char v2; // r0@4

  if ( is_c1_link_related_active() )
  {
    if ( (unsigned __int8)byte_300402D <= 2u )
    {
      v1 = &byte_3000588;
      v2 = 0;
    }
    else
    {
      v1 = &byte_3000588;
      v2 = 1;
    }
    *v1 = v2;
    result = (unsigned __int8)*v1;
  }
  else
  {
    result = 0;
  }
  return result;
}
