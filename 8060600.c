signed int __fastcall FieldObjectCheckIfSpecialAnimFinishedOrInactive(_BYTE *a1)
{
  unsigned int v1; // r1@1
  signed int result; // r0@2

  v1 = *a1;
  if ( v1 & 0x40 )
    result = v1 >> 7;
  else
    result = 16;
  return result;
}
