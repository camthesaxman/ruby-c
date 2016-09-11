int __fastcall sub_809217C(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  sub_8092AD4(*((_BYTE *)v2 + 8), *((_BYTE *)v2 + 10));
  sub_8092B68(v1);
  *v2 = (int)sub_80921B0;
  return v4;
}
