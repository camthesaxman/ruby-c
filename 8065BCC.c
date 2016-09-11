int __fastcall s0E_set_byte(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r2@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  sub_8126160(v2);
  return 0;
}
