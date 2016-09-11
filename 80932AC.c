int __fastcall sub_80932AC(int a1)
{
  int v1; // r4@1
  int *v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)nullsub_60, -1)];
  *((_WORD *)v2 + 4) = 0;
  StoreWordInTwoHalfwords((int)(v2 + 3), v1);
  return v4;
}
