int sub_811AA54()
{
  int *v0; // r1@1

  v0 = &dword_3004B20[10 * (unsigned __int8)oei_task_add()];
  *((_WORD *)v0 + 12) = (unsigned int)sub_811AA9C >> 16;
  *((_WORD *)v0 + 13) = (unsigned int)sub_811AA9C;
  GetMonNickname((int)&dword_3004360[25 * v202FF84], (int)&gStringVar1);
  return 0;
}
