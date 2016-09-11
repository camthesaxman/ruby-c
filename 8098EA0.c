int __fastcall sub_8098EA0(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r6@1
  int v4; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  do
  {
    if ( *(_DWORD *)(4 * v1 + 0x2001050) )
    {
      sub_8099BE0();
      *(_DWORD *)(4 * v1 + 0x2001050) = 0;
    }
    v1 = (v1 + 6) & 0xFF;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 4 );
  return v4;
}
