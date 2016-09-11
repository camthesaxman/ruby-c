signed int __fastcall sub_811AB88(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  signed int result; // r0@2

  v1 = a1;
  sub_807DE10();
  CpuSet(33746632, 33745608, 67109120);
  v2 = (int)*(&gUnknown_083FD70C + *(_WORD *)(v1 + 10));
  if ( v2 )
  {
    CreateTask(v2, 4);
    ++*(_WORD *)(v1 + 8);
    result = 0;
  }
  else
  {
    *(_WORD *)(v1 + 8) = 2;
    result = 1;
  }
  return result;
}
