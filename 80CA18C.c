int __fastcall sub_80CA18C(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8053014();
  sub_80C9FDC();
  LOWORD(dword_3004B20[10 * v1 + 2]) = 0;
  DisplayItemMessageOnField(v1, &gStringVar4, task08_080A1C44, 0);
  return v3;
}
