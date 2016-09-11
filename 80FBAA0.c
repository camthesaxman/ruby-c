signed int __fastcall sub_80FBAA0(int a1)
{
  int v1; // r5@1
  signed int result; // r0@3
  unsigned int v3; // r4@4

  v1 = (unsigned int)((a1 << 16) - 0x10000) >> 16;
  if ( v1 == 0xFFFF )
  {
_080FBAE2:
    result = 0;
  }
  else
  {
    v3 = 1;
    while ( (unsigned __int16)sub_80FB2EC(v3, v1) != *(_WORD *)(v20388CC + 20) )
    {
      v3 = (v3 + 1) & 0xFFFF;
      if ( v3 > 0x1C )
        goto _080FBAE2;
    }
    result = 1;
  }
  return result;
}
