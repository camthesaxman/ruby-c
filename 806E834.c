int __fastcall sub_806E834(int a1, unsigned __int8 a2)
{
  int v2; // r5@1
  __int16 v3; // r4@1
  int result; // r0@1

  v2 = a1;
  v3 = a2;
  v202E8F6 = 1;
  MenuDrawTextWindow(3, 14, 26, 19);
  MenuPrintMessage(v2, 4, 15);
  result = (unsigned __int8)CreateTask(sub_806E884, 1);
  LOWORD(dword_3004B20[10 * result + 2]) = v3;
  return result;
}
