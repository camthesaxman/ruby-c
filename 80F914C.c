int (__fastcall *__fastcall sub_80F914C(unsigned __int8 a1, int a2))(unsigned __int8 a1)
{
  int v2; // r2@1
  int *v3; // r1@1
  int (__fastcall *result)(unsigned __int8); // r0@1

  v2 = *(_DWORD *)(a2 + 4);
  v20388C4 = *(_DWORD *)a2;
  v20388C8 = v2;
  v3 = &dword_3004B20[10 * a1];
  result = Task_CallYesOrNoCallback;
  *v3 = (int)Task_CallYesOrNoCallback;
  return result;
}
