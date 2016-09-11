int sub_80C0788()
{
  unsigned int v0; // r1@2
  int v2; // [sp+4h] [bp-4h]@0

  if ( (unsigned __int8)FlagGet(0x804u) != 1 )
  {
    v0 = 0;
    do
    {
      *(_BYTE *)(4 * v0 + 0x20281F1) = 0;
      v0 = (v0 + 1) & 0xFF;
    }
    while ( v0 <= 0xF );
  }
  return v2;
}
