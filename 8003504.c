int __fastcall sub_8003504(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r8@1
  int v4; // r9@1
  int v5; // r6@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  dword_3000354 = (int)&gWindowConfig_81E6C74;
  InitWindow((int)&sTempWindow, 0, 0, 0, 0);
  return AlignInt2(&sTempWindow, v3, v4, v5);
}
