int __fastcall append_byte(int a1, _BYTE *a2, char a3)
{
  int result; // r0@1

  *(_BYTE *)(a1 + *a2) = a3;
  result = *a2 + 1;
  *a2 = result;
  return result;
}
