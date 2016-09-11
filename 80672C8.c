signed int __fastcall s76_close_picture_box(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  signed int result; // r0@2

  v1 = a1;
  v2 = picbox_close();
  if ( v2 )
  {
    script_setup_asm_script(v1, v2);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
