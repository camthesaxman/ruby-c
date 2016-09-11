int (__fastcall *__fastcall unref_sub_80B3078(unsigned __int8 a1))(int a1)
{
  int *v1; // r1@1
  int (__fastcall *result)(int); // r0@1

  v1 = &dword_3004B20[10 * a1];
  result = Task_ExitSellMenu;
  *v1 = (int)Task_ExitSellMenu;
  return result;
}
