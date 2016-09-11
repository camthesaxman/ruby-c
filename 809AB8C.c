int __fastcall sub_809AB8C(int a1, int a2, int a3)
{
  int result; // r0@3
  unsigned __int8 v4; // r0@4

  if ( !v20384E4 )
  {
    v4 = get_preferred_box();
    LOWORD(result) = GetBoxMonData((unsigned int *)(2400 * v4 + 80 * v20384E5 + 33751204), 11, (_BYTE *)0x20300A4);
    return (unsigned __int16)result;
  }
  if ( v20384E4 == 1 )
  {
    LOWORD(result) = GetMonData((int)&dword_3004360[25 * v20384E5], 11, a3);
    return (unsigned __int16)result;
  }
  return 0;
}
