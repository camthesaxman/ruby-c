int __fastcall sub_8069408(unsigned __int8 a1)
{
  unsigned int v1; // r2@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = 0;
  while ( (unsigned __int8)gUnknown_083762FC[8 * v1] != a1 )
  {
    v1 = (v1 + 1) & 0xFF;
    if ( v1 > 0xC )
      return v3;
  }
  call_via_r0(dword_8376300[2 * v1]);
  return v3;
}
