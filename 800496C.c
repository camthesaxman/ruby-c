int __fastcall GetExtCtrlCodeLength(unsigned __int8 a1)
{
  unsigned int v1; // r1@1
  int result; // r0@1

  v1 = a1;
  result = 0;
  if ( v1 <= 0x16 )
    result = sExtCtrlCodeLengths[v1];
  return result;
}
