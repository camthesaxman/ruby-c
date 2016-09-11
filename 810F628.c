int sub_810F628()
{
  __int16 v1; // [sp+10h] [bp-10h]@1
  int v2; // [sp+1Ch] [bp-4h]@1

  CreateMon((int)dword_3004360, 0x120u, 7u, 0x20u);
  v1 = 1;
  SetMonData((int)dword_3004360, 46, (int)&v1);
  v1 = 33;
  SetMonData((int)dword_3004360, 13, (int)&v1);
  v1 = 0;
  SetMonData((int)dword_3004360, 14, (int)&v1);
  SetMonData((int)dword_3004360, 15, (int)&v1);
  SetMonData((int)dword_3004360, 16, (int)&v1);
  return v2;
}
