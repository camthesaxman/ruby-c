int __fastcall sub_806EE08(int a1, int a2)
{
  int v2; // r2@1
  int v4; // [sp+4h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  dword_3004B20[10 * a1] = (int)TaskDummy;
  sub_806E8D0(a1, 0, a2);
  v201C006 = GetMonData(v201C000, 12, v2);
  sub_806E834((int)"Эйти", 1u);
  CreateTask(sub_806EFEC, 5);
  return v4;
}
