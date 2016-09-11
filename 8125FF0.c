signed int __fastcall unref_sub_8125FF0(int a1, unsigned __int16 a2)
{
  unsigned int v2; // r2@1
  unsigned int i; // r2@3
  signed int result; // r0@6

  v2 = 0;
  do
  {
    *(_BYTE *)(v2 + 0x2000000) = 0;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0xFFF );
  v2000FF4 = (char *)&08012024 + 1;
  for ( i = 0; i < a2; i = (i + 1) & 0xFFFF )
    *(_BYTE *)(i + 0x2000000) = *(_BYTE *)(a1 + i);
  v2039284 = ProgramFlashSectorAndVerifyNBytes((unsigned __int8)gUnknown_08401E24[0], 0x2000000, 4096);
  if ( v2039284 )
    result = 255;
  else
    result = 1;
  return result;
}
