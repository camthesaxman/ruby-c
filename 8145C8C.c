int __fastcall sub_8145C8C(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r6@1
  unsigned int v3; // r5@1
  int v4; // r8@1
  unsigned int v5; // r7@1

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  do
  {
    v2039328 = v2 % 0xA;
    v203932A = v3 % 0xA;
    if ( v2 % 0xA << 16 != v3 % 0xA << 16 )
      break;
    v2 = v2 / 0xA & 0xFFFF;
    v3 = v3 / 0xA & 0xFFFF;
    v4 = (v4 + 1) & 0xFF;
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 4 );
  return v4;
}
