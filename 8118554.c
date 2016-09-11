__int16 *__fastcall sub_8118554(int a1)
{
  __int16 *result; // r0@1

  result = &gOamMatrices[4 * ((unsigned int)*(_BYTE *)(a1 + 3) << 26 >> 27)];
  result[3] = v201902C;
  *result = v201902C;
  result[1] = v201902E;
  result[2] = v2019030;
  return result;
}
