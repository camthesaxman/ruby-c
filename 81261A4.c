int __fastcall sub_81261A4(int result, unsigned int a2)
{
  *(_BYTE *)result = a2;
  *(_BYTE *)(result + 1) = BYTE1(a2);
  *(_BYTE *)(result + 2) = a2 >> 16;
  *(_BYTE *)(result + 3) = BYTE3(a2);
  return result;
}
