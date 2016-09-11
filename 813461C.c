_WORD *__fastcall sub_813461C(int a1)
{
  int v1; // r0@1
  _WORD *result; // r0@1

  a1 = (unsigned __int8)a1;
  *(_BYTE *)(a1 + 33707002) = 0;
  v1 = 2 * (unsigned __int8)a1;
  *(_WORD *)(v1 + 33707004) = 1;
  result = (_WORD *)(v1 + 33707008);
  *result = 1;
  return result;
}
