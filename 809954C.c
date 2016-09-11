int sub_809954C()
{
  unsigned int v0; // r5@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    if ( *(_DWORD *)(4 * v0 + 0x2001038) )
    {
      sub_8099BE0();
      *(_DWORD *)(4 * v0 + 0x2001038) = 0;
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 5 );
  return v2;
}
