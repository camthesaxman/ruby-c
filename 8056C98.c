int __fastcall sub_8056C98(int a1, int a2)
{
  int v3; // [sp+0h] [bp-4h]@0

  if ( a1 )
  {
    if ( *(_BYTE *)a1 )
      LZ77UnCompVram(*(_DWORD *)(a1 + 4), a2);
    else
      CpuFastSet(*(_DWORD *)(a1 + 4), a2, 4096);
  }
  return v3;
}
