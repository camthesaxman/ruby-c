int __fastcall script_read_halfword(int a1)
{
  int v1; // r3@1
  _BYTE *v2; // r2@1
  int v3; // r0@1
  int result; // r0@1

  v1 = a1;
  v2 = *(_BYTE **)(a1 + 8);
  v3 = *v2++;
  *(_DWORD *)(v1 + 8) = v2;
  result = v3 | (*v2 << 8);
  *(_DWORD *)(v1 + 8) = v2 + 1;
  return result;
}
