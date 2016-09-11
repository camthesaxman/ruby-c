int __fastcall sub_80B4470(unsigned __int8 a1)
{
  unsigned int v1; // r2@1
  int v2; // r7@1
  int v3; // r3@2
  __int16 v4; // r2@4
  int v6; // [sp+18h] [bp-4h]@0

  v1 = 0;
  v2 = 10 * a1;
  do
  {
    v3 = 4 * v1 + 33785636;
    if ( *(_WORD *)(4 * v1 + 0x2038724) == *(_WORD *)(2
                                                    * ((unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711)
                                                    + dword_300070C)
      && *(_WORD *)(4 * v1 + 0x2038726) )
    {
      v4 = *(_WORD *)(4 * v1 + 0x2038726);
      if ( *(_WORD *)(v3 + 2) + (signed int)HIWORD(dword_3004B20[v2 + 2]) <= 255 )
        *(_WORD *)(v3 + 2) = v4 + HIWORD(dword_3004B20[v2 + 2]);
      else
        *(_WORD *)(v3 + 2) = 255;
      return v6;
    }
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 2 );
  if ( v2038730 <= 2u )
  {
    *(_WORD *)(4 * v2038730 + 0x2038724) = *(_WORD *)(2
                                                    * ((unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711)
                                                    + dword_300070C);
    *(_WORD *)(4 * v2038730 + 0x2038726) = HIWORD(dword_3004B20[10 * a1 + 2]);
    ++v2038730;
  }
  return v6;
}
