signed int __fastcall box_related_two__3(int a1)
{
  signed int result; // r0@2

  if ( byte_30005A8 )
  {
    result = 0;
  }
  else
  {
    byte_30005A8 = 3;
    textbox_fdecode_auto_and_task_add(a1);
    result = 1;
  }
  return result;
}
