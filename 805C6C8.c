int __fastcall FindFieldObjectTemplateInArrayByLocalId(unsigned __int8 a1, int a2, unsigned int a3)
{
  int v3; // r5@1
  unsigned int v4; // r1@1
  int result; // r0@3

  v3 = a2;
  a3 = (unsigned __int8)a3;
  v4 = 0;
  if ( (unsigned __int8)a3 <= 0u )
  {
_0805C6F6:
    result = 0;
  }
  else
  {
    while ( *(_BYTE *)(24 * v4 + v3) != a1 )
    {
      v4 = (v4 + 1) & 0xFF;
      if ( v4 >= a3 )
        goto _0805C6F6;
    }
    result = 24 * v4 + v3;
  }
  return result;
}
