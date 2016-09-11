signed int __fastcall sub_8085598(unsigned __int8 a1)
{
  unsigned int v1; // r6@1
  int v2; // r2@1
  unsigned int v3; // r5@2
  signed int result; // r0@6

  v1 = a1;
  if ( VarGet(16417) << 16 )
  {
    v3 = 0;
    while ( !GetMonData((int)&dword_3004360[25 * v3], 57, v2) || GetMonData((int)&dword_3004360[25 * v3], 45, v2) )
    {
      v3 = (v3 + 1) & 0xFF;
      if ( v3 > 5 )
        goto _080855F6;
    }
    if ( v1 >= (unsigned __int8)GetMonData((int)&dword_3004360[25 * v3], 56, v2) )
      goto _080855DE;
_080855F6:
    result = 0;
  }
  else
  {
_080855DE:
    result = 1;
  }
  return result;
}
