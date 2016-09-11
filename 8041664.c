int __fastcall sub_8041664(unsigned int *a1, int a2)
{
  unsigned int *v2; // r4@1
  int v3; // r5@1
  _BYTE *v4; // r2@1
  int v6; // [sp+0h] [bp-60h]@1
  unsigned int v7; // [sp+50h] [bp-10h]@1

  v2 = a1;
  v3 = a2;
  memcpy(&v6, a1, 80);
  v7 = GetBoxMonData(v2, 25, v4) + v3;
  SetBoxMonData((unsigned int *)&v6, 25, (int)&v7);
  return (unsigned __int8)GetLevelFromBoxMonExp((int)&v6);
}
