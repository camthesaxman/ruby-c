int sub_80C0408()
{
  unsigned int v0; // r2@2
  int v1; // r0@3
  int v3; // [sp+Ch] [bp-4h]@0

  if ( (unsigned __int8)FlagGet(0x804u) != 1 )
  {
    v0 = 0;
    do
    {
      v1 = *(_BYTE *)(36 * v0 + 0x2027E6C);
      if ( v1 == 7 || v1 == 41 )
        *(_BYTE *)(36 * v0 + 0x2027E6D) = 0;
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 0x17 );
  }
  return v3;
}
