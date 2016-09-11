int sub_80558AC()
{
  int v0; // r2@5
  int result; // r0@8

  result = 0;
  if ( is_c1_link_related_active() == 1 && sub_8007B24() == 1 )
  {
    if ( (signed int (*)())dword_3000584 == sub_8055408
      || (signed int (__fastcall *)(int))dword_3000584 == sub_80553E4
      && ((v0 = (unsigned __int8)byte_3000588, byte_3000588 = 0, v0 == 1) || v202F38F & 0x80 && v202F392 & 2) )
    {
      result = 1;
    }
  }
  return result;
}
