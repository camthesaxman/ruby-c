int __fastcall sub_80A61EC(unsigned __int8 a1)
{
  int *v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 12) = (unsigned int)sub_808A3F8 >> 16;
  *((_WORD *)v1 + 13) = (unsigned int)sub_808A3F8;
  sub_80A5AE4(a1);
  return v3;
}
