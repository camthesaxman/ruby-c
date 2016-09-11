int __fastcall sub_81019B0(unsigned __int8 a1, int a2)
{
  int v2; // r5@1
  __int16 v3; // r4@1
  int *v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v2 = a2;
  v3 = a1;
  v4 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)nullsub_67, -1)];
  *((_WORD *)v4 + 4) = v3;
  StoreWordInTwoHalfwords((int)v4 + 10, v2);
  return v6;
}
