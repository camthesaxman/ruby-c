signed int __fastcall sub_81472E4(unsigned __int16 a1)
{
  _DWORD *v1; // r4@1
  unsigned int v2; // r1@1

  v1 = (_DWORD *)0x2000000;
  ReadFlash(a1, 0, 0x2000000, 4096);
  v2 = 0;
  do
  {
    if ( *v1 )
      return 1;
    v2 = (v2 + 1) & 0xFFFF;
    ++v1;
  }
  while ( v2 <= 0x3FF );
  return 0;
}
