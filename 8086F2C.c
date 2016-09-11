int sub_8086F2C()
{
  int v0; // r0@1
  int *v1; // r1@1
  int v2; // r2@1
  int v3; // r3@1

  v0 = (unsigned __int8)CreateTask((int)sub_8086F64, -1);
  v1 = &dword_3004B20[10 * v0];
  v2 = v202FF84;
  *((_WORD *)v1 + 5) = v202FF84;
  call_via_r4(v0, v1, v2, v3);
  return 0;
}
