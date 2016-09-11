int sub_800BF28()
{
  unsigned __int8 v0; // r0@1
  unsigned __int8 v1; // r0@1
  __int16 v3; // [sp+0h] [bp-14h]@1
  int v4; // [sp+10h] [bp-4h]@1

  v0 = CreateTask(sub_800C1A8, 0);
  v20238C4 = v0;
  HIWORD(dword_3004B20[10 * v0 + 7]) = 0;
  LOWORD(dword_3004B20[10 * v20238C4 + 8]) = 0;
  HIWORD(dword_3004B20[10 * v20238C4 + 8]) = 0;
  LOWORD(dword_3004B20[10 * v20238C4 + 9]) = 0;
  HIWORD(dword_3004B20[10 * v20238C4 + 9]) = 0;
  v1 = CreateTask(sub_800C47C, 0);
  v20238C5 = v1;
  LOWORD(dword_3004B20[10 * v1 + 8]) = 0;
  HIWORD(dword_3004B20[10 * v20238C5 + 8]) = 0;
  LOWORD(dword_3004B20[10 * v20238C5 + 9]) = 0;
  HIWORD(dword_3004B20[10 * v20238C5 + 9]) = 0;
  v20238C6 = 0;
  v3 = 0;
  CpuSet(&v3, 33636352, 16781312);
  return v4;
}
