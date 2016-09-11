signed int sub_80FDB8C()
{
  int v0; // r2@1
  signed int result; // r0@1

  *(_WORD *)dword_3005E08 = 0;
  v0 = dword_3005E08;
  *(_WORD *)(dword_3005E08 + 2) = 0;
  result = 0x7FFF;
  *(_WORD *)(v0 + 4) = 0x7FFF;
  return result;
}
