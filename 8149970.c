int __fastcall sub_8149970(__int16 a1)
{
  __int16 v1; // r4@1
  int result; // r0@1

  v1 = a1;
  result = (unsigned __int8)CreateTask((int)sub_81499A0, 0);
  HIWORD(dword_3004B20[10 * result + 2]) = v1;
  return result;
}
