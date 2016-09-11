int __fastcall sub_8065C44(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r3@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1++;
  *(_DWORD *)(a1 + 8) = v1;
  *(_DWORD *)(a1 + 100 + 4 * v2) = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  return 0;
}
