signed int __fastcall GetBoxMonGender(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned __int8 v3; // r2@1
  signed int result; // r0@1

  v1 = a1;
  v2 = (unsigned __int16)GetBoxMonData(a1, 11, 0);
  v3 = GetBoxMonData(v1, 0, 0);
  result = *((_BYTE *)&gBaseStats + 28 * v2 + 16);
  if ( *((_BYTE *)&gBaseStats + 28 * v2 + 16) && (result > 255 || result < 254) )
  {
    if ( *((_BYTE *)&gBaseStats + 28 * v2 + 16) > (unsigned int)v3 )
      result = 254;
    else
      result = 0;
  }
  return result;
}
