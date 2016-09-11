__int16 *__fastcall SetCameraPanning(__int16 a1, __int16 a2)
{
  __int16 *result; // r0@1

  word_3000598 = a1;
  result = &word_300059A;
  word_300059A = a2 + 32;
  return result;
}
