signed int __fastcall sub_813360C(char a1)
{
  signed int result; // r0@1

  *(_BYTE *)(dword_30007B0 + 28) = *(_BYTE *)(dword_30007B0 + 24);
  *(_BYTE *)(dword_30007B0 + 24) += a1;
  result = 1;
  *(_BYTE *)(dword_30007B0 + 29) = 1;
  return result;
}
