int __fastcall coords8_add(int result, char a2, char a3)
{
  *(_BYTE *)result += a2;
  *(_BYTE *)(result + 1) += a3;
  return result;
}
