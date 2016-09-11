int __fastcall GetOppositeDirection(unsigned __int8 a1)
{
  int v1; // r4@1
  int result; // r0@2
  int v3; // [sp+0h] [bp-10h]@1

  v1 = a1;
  memcpy(&v3, &gUnknown_0837574F, 8);
  if ( ((v1 - 1) & 0xFFu) > 7 )
    result = v1;
  else
    result = *((_BYTE *)&v3 + v1 - 1);
  return result;
}
