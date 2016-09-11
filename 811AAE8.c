signed int sub_811AAE8()
{
  unsigned __int8 v0; // r0@1
  signed int result; // r0@2

  v0 = FindTaskIdByFunc((int)sub_811AB50);
  if ( HIWORD(dword_3004B20[10 * v0 + 9]) )
  {
    DestroyTask(v0);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
