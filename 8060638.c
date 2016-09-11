signed int __fastcall FieldObjectGetSpecialAnim(int a1)
{
  signed int result; // r0@2

  if ( *(_BYTE *)a1 & 0x40 )
    result = *(_BYTE *)(a1 + 28);
  else
    result = 255;
  return result;
}
