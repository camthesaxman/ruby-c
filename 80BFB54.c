signed int __fastcall sub_80BFB54(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r1@1
  signed int result; // r0@3

  v1 = a1 << 24;
  v2 = v1 >> 24;
  if ( !(v1 >> 24) )
    goto LABEL_11;
  if ( ((v2 - 1) & 0xFF) <= 0x13 )
    return 2;
  if ( ((v2 - 21) & 0xFF) <= 0x13 )
    return 3;
  if ( (((v1 >> 24) - 41) & 0xFF) <= 0x13 )
    result = 4;
  else
LABEL_11:
    result = 0;
  return result;
}
