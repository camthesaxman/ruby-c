signed int unref_sub_8064BD0()
{
  signed int result; // r0@2

  if ( byte_30005A8 )
  {
    result = 0;
  }
  else
  {
    byte_30005A8 = 2;
    textbox_auto_and_task_add();
    result = 1;
  }
  return result;
}
