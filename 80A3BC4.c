int *__fastcall swap32(int *result, int *a2)
{
  int v2; // r3@1

  v2 = *result;
  *result = *a2;
  *a2 = v2;
  return result;
}
