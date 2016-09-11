int __fastcall sub_80ADA1C(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80B1FD0(0);
  v2 = &dword_3004B20[10 * v1];
  *((_WORD *)v2 + 4) = 0;
  *((_WORD *)v2 + 5) = 0;
  *v2 = (int)sub_80ADA4C;
  return v4;
}
