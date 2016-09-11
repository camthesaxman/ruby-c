int *__fastcall sub_80A3E70(int a1, int a2)
{
  int *result; // r0@1
  int v3; // r3@1
  int *v4; // r1@1

  result = (int *)((4 * a1 & 0x3FF) + dword_3005D24);
  v3 = *result;
  v4 = (int *)((4 * a2 & 0x3FF) + dword_3005D24);
  *result = *v4;
  *v4 = v3;
  return result;
}
