int __fastcall sub_806E6F0(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+0h] [bp-70h]@1
  int v6; // [sp+6Ch] [bp-4h]@1

  v2 = a1;
  v3 = a2;
  memcpy(&v5, a1, 100);
  memcpy(v2, v3, 100);
  memcpy(v3, &v5, 100);
  return v6;
}
