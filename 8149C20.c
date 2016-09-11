int __fastcall sub_8149C20(__int16 a1)
{
  __int16 v1; // r4@1
  int result; // r0@1

  v1 = a1;
  result = (unsigned __int8)CreateTask((int)sub_8149C50, 0);
  LOWORD(dword_3004B20[10 * result + 3]) = v1;
  return result;
}
