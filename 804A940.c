int __fastcall sub_804A940(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)(a1 + 16) )
  {
    CpuSet(a1 + 18, *(_DWORD *)(a1 + 8), 1024);
    *(_BYTE *)(v1 + 16) = 0;
  }
  return v3;
}
