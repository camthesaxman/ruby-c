int __fastcall filters_out_some_ground_effects(int a1, _DWORD *a2)
{
  int v3; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)a1 & 0x10 )
  {
    *(_BYTE *)(a1 + 2) &= 0xC3u;
    *a2 &= 0xFFF9F7BD;
  }
  return v3;
}
