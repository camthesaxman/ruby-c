int __fastcall GetFieldObjectIdByLocalIdAndMap(unsigned __int8 a1)
{
  int result; // r0@2

  if ( a1 <= 0xFEu )
    LOBYTE(result) = GetFieldObjectIdByLocalIdAndMapInternal();
  else
    LOBYTE(result) = GetFieldObjectIdByLocalId();
  return (unsigned __int8)result;
}
