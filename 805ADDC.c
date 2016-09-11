signed int __fastcall sub_805ADDC(unsigned __int8 a1)
{
  int v1; // r8@1
  signed int result; // r0@3
  unsigned int v3; // r6@4
  unsigned int v4; // r5@4

  v1 = a1;
  if ( v202E82C && (v3 = *v202E82C, v4 = 0, v3 > 0) )
  {
    while ( *(_BYTE *)(24 * v4 + 0x2026354) != v1 || FlagGet(*(_WORD *)(24 * v4 + 0x2026368)) << 24 )
    {
      v4 = (v4 + 1) & 0xFF;
      if ( v4 >= v3 )
        goto _0805AE3E;
    }
    result = (unsigned __int8)InitFieldObjectStateFromTemplate((_BYTE *)(24 * v4 + 33710932), v2025739, v2025738);
  }
  else
  {
_0805AE3E:
    result = 16;
  }
  return result;
}
