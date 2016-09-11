int __fastcall sub_80A405C(unsigned __int8 a1)
{
  int v1; // r3@1
  __int16 *v2; // r2@1
  unsigned int v3; // r0@1
  __int16 *v4; // r2@3
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = word_2022280;
  v3 = 0;
  do
  {
    *v2 = 79;
    v2[1] = 79;
    v2[2] = 79;
    v2 += 32;
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 <= 0xF );
  v4 = &word_2022280[64 * v1];
  *v4 = 90;
  v4[1] = 91;
  v4[2] = 92;
  v4[32] = 106;
  v4[33] = 107;
  v4[34] = 108;
  return v6;
}
