_BYTE *__fastcall StringFill(_BYTE *a1, char a2, unsigned int a3)
{
  _BYTE *v3; // r3@1
  unsigned int i; // r0@1

  v3 = a1;
  a3 = (unsigned __int16)a3;
  for ( i = 0; i < a3; i = (i + 1) & 0xFFFF )
    *v3++ = a2;
  *v3 = -1;
  return v3;
}
