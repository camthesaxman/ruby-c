signed int __fastcall sub_811C938(int a1)
{
  int v1; // r5@1
  int v3; // [sp+0h] [bp-14h]@1
  char v4; // [sp+4h] [bp-10h]@1

  v1 = a1;
  memcpy(&v3, (const char *)&gUnknown_083FD89C, 4);
  memcpy(&v4, (const char *)&gUnknown_083FD8A0, 4);
  ++*(_WORD *)(v1 + 46);
  *(_WORD *)(v1 + 48) = *((_WORD *)&v3 + *(_WORD *)(v1 + 60));
  *(_WORD *)(v1 + 50) = *((_WORD *)&v4 + *(_WORD *)(v1 + 60));
  return 1;
}
