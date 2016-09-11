int __fastcall FlagSet(unsigned __int16 a1)
{
  char v1; // r4@1
  _BYTE *v2; // r0@1

  v1 = a1;
  v2 = (_BYTE *)GetFlagPointer(a1);
  if ( v2 )
    *v2 |= 1 << (v1 & 7);
  return 0;
}
