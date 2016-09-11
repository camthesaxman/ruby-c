signed int __fastcall sub_8086EB0(int a1)
{
  int v1; // r4@1
  signed int result; // r0@2

  v1 = a1;
  if ( sub_80B4850() << 24 )
  {
    result = 0;
  }
  else
  {
    sub_80B483C();
    ++*(_WORD *)(v1 + 8);
    result = 1;
  }
  return result;
}
