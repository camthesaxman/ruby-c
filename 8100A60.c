int __fastcall sub_8100A60(int result)
{
  result = (unsigned __int8)result;
  *(_BYTE *)(v201F000 + result) = 0;
  *(_BYTE *)(v201F004 + result) = 0;
  return result;
}
