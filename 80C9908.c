signed int __fastcall sub_80C9908(int a1, int a2)
{
  unsigned int v2; // r0@1
  unsigned int v3; // r2@1
  unsigned int v4; // r0@3
  unsigned int v5; // r4@4
  int v6; // r2@6
  signed int v7; // r1@6
  unsigned int v8; // r3@7
  signed int result; // r0@11

  v2 = a1 << 16;
  a2 = (unsigned __int16)a2;
  v3 = v2 >> 16;
  if ( !v2 && !a2 )
    return 0;
  v4 = v2 >> 16 << 16;
  v3 = (signed __int16)v3;
  if ( (v3 & 0x8000u) == 0 )
    v5 = v4 >> 16;
  else
    v5 = 0xFFFF * v3 & 0xFFFF;
  v6 = (signed __int16)a2;
  v7 = a2 << 16;
  if ( v6 >= 0 )
    v8 = (unsigned int)v7 >> 16;
  else
    v8 = 0xFFFF * v6 & 0xFFFF;
  if ( (signed __int16)v5 <= (signed __int16)v8 )
  {
    if ( (signed __int16)v5 < (signed __int16)v8 )
    {
      if ( v7 >= 0 )
        return 3;
      return 1;
    }
    if ( (signed __int16)v5 == (signed __int16)v8 )
    {
      if ( v7 >= 0 )
        return 3;
      return 1;
    }
    return 0;
  }
  if ( (v4 & 0x80000000) == 0 )
    result = 2;
  else
    result = 4;
  return result;
}
