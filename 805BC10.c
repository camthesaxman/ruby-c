int __fastcall GetFieldObjectGraphicsInfo(unsigned __int8 a1)
{
  unsigned int v1; // r1@1

  v1 = a1;
  if ( a1 > 0xEFu )
    v1 = VarGetFieldObjectGraphicsId((a1 + 16) & 0xFF);
  if ( v1 > 0xD9 )
    v1 = 5;
  return (int)*(&gMapObjectGraphicsInfoPointers + v1);
}
