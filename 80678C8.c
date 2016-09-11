int __fastcall sub_80678C8(int a1)
{
  _BYTE *v1; // r3@1
  int v2; // r1@1
  int v3; // r2@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1++;
  *(_DWORD *)(a1 + 8) = v1;
  v3 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  sub_811A704(v2025BC8, v2, v3);
  return 0;
}
