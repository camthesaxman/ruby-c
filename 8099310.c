int sub_8099310()
{
  unsigned int v0; // r5@1
  int v1; // r6@1
  int v3; // [sp+14h] [bp-4h]@0

  v2001171 = 0;
  v0 = 0;
  v1 = 0;
  do
  {
    if ( *(_DWORD *)(4 * v0 + 0x2001038) )
    {
      if ( v0 != v1 )
      {
        sub_8099388();
        *(_DWORD *)(4 * v0 + 0x2001038) = 0;
        ++v2001171;
      }
      v1 = (v1 + 1) & 0xFFFF;
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 5 );
  return v3;
}
