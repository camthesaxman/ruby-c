int oei_rocksmash()
{
  int *v0; // r1@1

  v0 = &dword_3004B20[10 * (unsigned __int8)oei_task_add()];
  *((_WORD *)v0 + 12) = (unsigned int)sub_810B58C >> 16;
  *((_WORD *)v0 + 13) = (unsigned int)sub_810B58C;
  sav12_xor_increment(0x13u);
  return 0;
}
