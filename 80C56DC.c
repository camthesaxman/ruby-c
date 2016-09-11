int __fastcall sub_80C56DC(unsigned __int8 a1)
{
  unsigned int *v1; // r4@1
  int v3; // [sp+0h] [bp-10h]@1
  int v4; // [sp+Ch] [bp-4h]@1

  v1 = &dword_3004360[25 * a1];
  v3 = 0;
  sub_803FCD4((int)v1, 7u);
  SetMonData((int)v1, 55, (int)&v3);
  GetMonData((int)v1, 2, (int)&gStringVar1);
  StringGetEnd10((int)&gStringVar1);
  return v4;
}
