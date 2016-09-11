signed int __fastcall sub_8062930(_BYTE *a1, int a2)
{
  int v2; // r4@1
  signed int result; // r0@2

  v2 = a2;
  if ( an_walk_any_2(a1, a2) << 24 )
  {
    *(_BYTE *)(v2 + 44) |= 0x80u;
    *(_WORD *)(v2 + 50) = 2;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
