signed int __fastcall sub_80999E8(unsigned __int16 a1)
{
  unsigned int v1; // r4@1
  signed int result; // r0@9
  int v3; // r4@10

  v1 = 0;
  if ( v2001120 != a1 )
  {
    do
      v1 = (v1 + 1) & 0xFFFF;
    while ( v1 <= 0x27 && *(_WORD *)(2 * v1 + 0x2001120) != a1 );
  }
  if ( v1 != 40 )
    goto LABEL_13;
  v1 = 0;
  if ( v2001120 )
  {
    do
      v1 = (v1 + 1) & 0xFFFF;
    while ( v1 <= 0x27 && *(_WORD *)(2 * v1 + 0x2001120) );
  }
  if ( v1 != 40 )
  {
LABEL_13:
    *(_WORD *)(2 * v1 + 0x2001120) = a1;
    ++*(_WORD *)(2 * v1 + 0x20010D0);
    v3 = 16 * v1 & 0xFFFF;
    CpuSet(*(&gMonIconTable + a1), 32 * v3 + 100728832, 67108992);
    result = v3;
  }
  else
  {
    result = 0xFFFF;
  }
  return result;
}
