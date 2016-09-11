int __fastcall StringCopy10(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r3@1
  unsigned __int8 v4; // r0@2
  int result; // r0@3

  v2 = a1;
  v3 = 0;
  do
  {
    v4 = *(_BYTE *)(a2 + v3);
    *(_BYTE *)(v2 + v3) = v4;
    if ( v4 == 255 )
      return v2 + v3;
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 < 0xA );
  result = v2 + v3;
  *(_BYTE *)(v2 + v3) = -1;
  return result;
}
