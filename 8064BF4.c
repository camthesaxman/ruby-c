int __fastcall textbox_fdecode_auto_and_task_add(unsigned __int8 *a1)
{
  int v2; // [sp+8h] [bp-4h]@0

  StringExpandPlaceholders(&gStringVar4, a1);
  sub_8002EB0(33745020, (int)&gStringVar4, v202E9CE, 2, 0xFu);
  task_add_textbox();
  return v2;
}
