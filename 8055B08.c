int __fastcall sub_8055B08(int a1, _WORD *a2, _WORD *a3)
{
  int *v3; // r0@1
  int result; // r0@1

  v3 = &dword_30048A0[9 * *(_BYTE *)((4 * a1 & 0x3FF) + 0x202981A)];
  *a2 = *((_WORD *)v3 + 8);
  result = *((_WORD *)v3 + 9);
  *a3 = result;
  return result;
}
