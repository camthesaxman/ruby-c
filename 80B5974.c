int (*picbox_close())()
{
  unsigned __int8 v0; // r0@1
  int (*result)(); // r0@2

  v0 = FindTaskIdByFunc((int)task_picbox);
  if ( v0 == 255 )
  {
    result = 0;
  }
  else
  {
    ++LOWORD(dword_3004B20[10 * v0 + 2]);
    result = sub_80B59AC;
  }
  return result;
}
