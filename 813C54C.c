int __fastcall sub_813C54C(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  int *v3; // r1@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v4000040 = 240;
  v4000044 = 160;
  v4000048 = 28;
  v400004A = 29;
  v400000E = 1539;
  v4000008 = 1792;
  v4000000 = 14656;
  v2 = CreateTask((int)sub_813CAF4, 0);
  v3 = &dword_3004B20[10 * v1];
  *((_WORD *)v3 + 19) = v2;
  LOWORD(dword_3004B20[10 * *((_WORD *)v3 + 19) + 2]) = 0;
  *((_WORD *)v3 + 4) = 0;
  *v3 = (int)sub_813C5D0;
  return v5;
}
