int __fastcall sub_80414C0(int a1, int a2, _BYTE *a3)
{
  int v3; // r5@1
  int v4; // r4@1
  _BYTE *v5; // r2@1
  int v6; // r4@3
  int v8; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  v4 = a1 + 80;
  if ( GetBoxMonData((unsigned int *)(a1 + 80), 11, a3) && !GetBoxMonData((unsigned int *)v3, 11, v5) )
  {
    memcpy(v3, v4, 80);
    ZeroBoxMonData(v4);
    v6 = v4 + 136;
    memcpy(v3 + 160, v6, 56);
    *(_DWORD *)(v3 + 272) = *(_DWORD *)(v3 + 276);
    *(_DWORD *)(v3 + 276) = 0;
    sub_80417F4(v6);
  }
  return v8;
}
