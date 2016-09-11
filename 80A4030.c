signed int __fastcall sub_80A4030(int a1)
{
  __int16 *v1; // r1@1
  signed int result; // r0@1

  v1 = &word_2022280[64 * a1];
  *v1 = 90;
  v1[1] = 91;
  v1[2] = 92;
  v1[32] = 106;
  v1[33] = 107;
  result = 108;
  v1[34] = 108;
  return result;
}
