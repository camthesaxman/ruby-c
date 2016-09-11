signed int __fastcall box_related_two__2(int a1)
{
  signed int result; // r0@2

  if ( byte_30005A8 )
  {
    result = 0;
  }
  else
  {
    textbox_fdecode_auto_and_task_add(a1);
    byte_30005A8 = 2;
    result = 1;
  }
  return result;
}
