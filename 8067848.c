int __fastcall sub_8067848(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r4@1
  int v3; // r3@1
  int v4; // r2@1
  int v5; // r1@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1++;
  *(_DWORD *)(a1 + 8) = v1;
  v3 = *v1;
  v4 = (int)(v1 + 1);
  *(_DWORD *)(a1 + 8) = v1 + 1;
  v5 = v1[1];
  *(_DWORD *)(a1 + 8) = v4 + 1;
  if ( !v5 )
    sub_80B7BEC(v2025BC4, v2, v3);
  return 0;
}
