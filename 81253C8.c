int __fastcall sub_81253C8(unsigned __int8 a1, int a2, unsigned int a3)
{
  int v3; // r7@1
  unsigned int v4; // r3@1
  unsigned int i; // r3@3

  v3 = a1;
  a3 = (unsigned __int16)a3;
  v4 = 0;
  do
  {
    *(_BYTE *)(v4 + 0x2000000) = 0;
    v4 = (v4 + 1) & 0xFFFF;
  }
  while ( v4 <= 0xFFF );
  v2000FF8 = (char *)&08012024 + 1;
  for ( i = 0; i < a3; i = (i + 1) & 0xFFFF )
    *(_BYTE *)(i + 0x2000000) = *(_BYTE *)(a2 + i);
  v2000FF4 = sub_8125C10(a2, a3);
  return (unsigned __int8)sub_8125440(v3);
}
