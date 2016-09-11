int sub_80A2654()
{
  int *v0; // r1@1

  v0 = &dword_3004B20[10 * (unsigned __int8)oei_task_add()];
  *((_WORD *)v0 + 12) = (unsigned int)sub_80A2B00 >> 16;
  *((_WORD *)v0 + 13) = (unsigned int)sub_80A2B00;
  sav12_xor_increment(0x12u);
  return 0;
}
