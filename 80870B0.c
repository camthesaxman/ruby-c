int sub_80870B0()
{
  int v0; // r0@1
  int *v1; // r1@1
  int v2; // r2@1

  v0 = (unsigned __int8)CreateTask((int)sub_80870EC, -1);
  v1 = &dword_3004B20[10 * v0];
  *((_WORD *)v1 + 19) = v202FF84;
  v2 = v202FF88;
  *((_WORD *)v1 + 18) = v202FF88;
  call_via_r4(v0, v1, v2, 33750916);
  return 0;
}
