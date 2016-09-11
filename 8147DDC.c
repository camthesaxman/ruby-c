int __fastcall sub_8147DDC(unsigned __int8 a1)
{
  __int16 v1; // r4@1
  int *v2; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_8147CC8, 0)];
  *((_WORD *)v2 + 4) = 0;
  *((_WORD *)v2 + 5) = v1;
  return v4;
}
