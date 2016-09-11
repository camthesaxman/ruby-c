int __fastcall sub_80A6178(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80A5AE4(a1);
  v2 = &dword_3004B20[10 * v1];
  *((_WORD *)v2 + 12) = (unsigned int)sub_814625C >> 16;
  *((_WORD *)v2 + 13) = (unsigned int)sub_814625C;
  return v4;
}
