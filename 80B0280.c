int __fastcall sub_80B0280(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(a1 + 63) & 0x20 )
  {
    *(_BYTE *)(a1 + 62) |= 4u;
    *(_DWORD *)(a1 + 28) = sub_80B02A8;
  }
  return v2;
}
