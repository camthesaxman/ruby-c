int sub_810CBFC()
{
  unsigned __int8 v0; // r0@1
  int *v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = oei_task_add();
  v202FF84 = (unsigned __int8)byte_3005CE0;
  v1 = &dword_3004B20[10 * v0];
  *((_WORD *)v1 + 12) = (unsigned int)sub_810CC34 >> 16;
  *((_WORD *)v1 + 13) = (unsigned int)sub_810CC34;
  return v3;
}
