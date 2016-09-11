signed int __fastcall sub_811ABD8(int a1)
{
  int v1; // r4@1
  signed int result; // r0@2

  v1 = a1;
  if ( (unsigned __int8)FindTaskIdByFunc((int)*(&gUnknown_083FD70C + *(_WORD *)(a1 + 10))) == 255 )
  {
    ++*(_WORD *)(v1 + 8);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
