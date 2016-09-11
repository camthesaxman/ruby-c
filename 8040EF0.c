int __fastcall StoreWordInTwoHalfwords(int result, int a2)
{
  *(_WORD *)result = a2;
  *(_WORD *)(result + 2) = HIWORD(a2);
  return result;
}
