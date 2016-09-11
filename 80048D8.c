int __fastcall sub_80048D8(int result, char a2, char a3)
{
  *(_BYTE *)(result + 16) = a2;
  *(_BYTE *)(result + 17) = a3 & 0xF8;
  return result;
}
