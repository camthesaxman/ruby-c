int __fastcall sub_8098DE0(__int16 a1)
{
  unsigned int v1; // r2@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = 0;
  do
  {
    if ( *(_DWORD *)(4 * v1 + 0x2001050) )
    {
      *(_WORD *)(*(_DWORD *)(4 * v1 + 0x2001050) + 50) = a1;
      *(_WORD *)(*(_DWORD *)(4 * v1 + 0x2001050) + 54) = 1;
      *(_DWORD *)(*(_DWORD *)(4 * v1 + 0x2001050) + 28) = sub_8098E68;
    }
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 0x1D );
  return v3;
}
