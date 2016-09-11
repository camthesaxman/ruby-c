int __fastcall unref_sub_80602F8(int a1, _WORD *a2, _WORD *a3)
{
  char *v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v3 = (char *)&gUnknown_083756A4 + (4 * a1 & 0x3FF);
  *a2 += 16 * *(_WORD *)v3;
  *a3 += 16 * *((_WORD *)v3 + 1);
  return v5;
}
