signed int sub_80554F8()
{
  signed int result; // r0@4

  if ( sub_8054FC0(131) == 1 )
    goto LABEL_11;
  if ( (signed int (__fastcall *)(int))dword_3000584 == sub_805546C
    && (unsigned __int8)byte_3000580[(unsigned __int8)byte_3004860] != 130 )
  {
    return 0;
  }
  if ( (signed int (*)())dword_3000584 != sub_8055468
    || (unsigned __int8)byte_3000580[(unsigned __int8)byte_3004860] != 129 )
  {
    result = sub_8054F88(130);
  }
  else
  {
LABEL_11:
    result = 2;
  }
  return result;
}
