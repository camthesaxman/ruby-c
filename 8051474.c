int sub_8051474()
{
  int v0; // r3@1
  _WORD *v1; // r1@1
  _WORD *v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v0 = dword_3004854;
  v1 = (_WORD *)(dword_3004854 + 84);
  v2 = (_WORD *)(dword_3004854 + 88);
  *v2 = *(_WORD *)(dword_3004854 + 84);
  *v1 += *(v2 - 1);
  sub_8051414(v0 + 360);
  return v4;
}
