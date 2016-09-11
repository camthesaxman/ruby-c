unsigned int sub_8020B54()
{
  unsigned int result; // r0@1

  v2024C68 = 0;
  v201601F = 1;
  v2024C0D = 1;
  v2024D21 = 0;
  v2024D24 = 0;
  result = v2024C6C & 0xFFFFBFBF;
  v2024C6C &= 0xFFFFBFBF;
  return result;
}
