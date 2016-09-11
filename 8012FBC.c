int __fastcall sub_8012FBC(int a1, int a2)
{
  char v2; // r5@1
  char *v3; // r0@1
  char v4; // r5@1
  char *v5; // r1@1
  int v7; // [sp+8h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  a2 = (unsigned __int8)a2;
  v2 = *(_BYTE *)((unsigned __int8)a1 + 0x2024A76);
  *(_BYTE *)(a1 + 33704566) = *(_BYTE *)((unsigned __int8)a2 + 0x2024A76);
  *(_BYTE *)(a2 + 33704566) = v2;
  v3 = (char *)((unsigned __int8)a1 + 33704570);
  v4 = *v3;
  v5 = (char *)((unsigned __int8)a2 + 33704570);
  *v3 = *v5;
  *v5 = v4;
  return v7;
}
