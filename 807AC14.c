unsigned int FindFirstActiveTask()
{
  unsigned int v0; // r2@1
  int *v1; // r1@4

  v0 = 0;
  if ( byte_3004B24 != 1 || (unsigned __int8)byte_3004B25 != 254 )
  {
    do
    {
      v0 = (v0 + 1) & 0xFF;
      if ( v0 > 0xF )
        break;
      v1 = &dword_3004B20[10 * v0];
    }
    while ( *((_BYTE *)v1 + 4) != 1 || *((_BYTE *)v1 + 5) != 254 );
  }
  return v0;
}
