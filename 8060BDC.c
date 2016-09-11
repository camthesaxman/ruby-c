int __fastcall state_to_direction(unsigned __int8 a1, unsigned int a2, unsigned int a3)
{
  int result; // r0@5

  a2 = (unsigned __int8)a2;
  a3 = (unsigned __int8)a3;
  if ( (_BYTE)a2 && a3 && a2 <= 4 && a3 <= 4 )
    result = *(&gUnknown_08375767[4 * a1 - 5] + zffu_offset_calc(a2, a3));
  else
    result = 0;
  return result;
}
