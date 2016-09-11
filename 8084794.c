int __fastcall sub_8084794(int a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = CreateTask((int)sub_80846E4, 0);
  StoreWordInTwoHalfwords((int)&byte_3004B28[40 * v2 + 2], v1);
  return v4;
}
