signed int __fastcall sub_8110BFC(int a1, unsigned __int16 a2, unsigned int a3)
{
  unsigned int v3; // r3@2
  signed int result; // r0@4

  a3 = (unsigned __int16)a3;
  if ( a1 && (v3 = 0, a3 > 0) )
  {
    while ( *(_WORD *)(4 * v3 + *(_DWORD *)(a1 + 4) + 2) != a2 )
    {
      v3 = (v3 + 1) & 0xFFFF;
      if ( v3 >= a3 )
        goto _08110C2A;
    }
    result = 1;
  }
  else
  {
_08110C2A:
    result = 0;
  }
  return result;
}
