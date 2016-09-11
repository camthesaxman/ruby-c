int __fastcall sub_806782C(int a1)
{
  _BYTE *v1; // r2@1
  int v2; // r3@1
  int v3; // r1@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1++;
  *(_DWORD *)(a1 + 8) = v1;
  v3 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  RemoveMoneyLabelObject(v2, v3);
  return 0;
}
