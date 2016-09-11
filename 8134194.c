int __fastcall sub_8134194(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r3@1
  int v3; // r1@1

  v1 = 0;
  v2 = 0;
  v3 = 8 * a1 & 0x7FF;
  if ( (unsigned int)gUnknown_08402E40[v3 + 4] > 0 )
  {
    do
    {
      if ( *(_BYTE *)(*(_DWORD *)&gUnknown_08402E40[v3] + v2) )
        v1 = (v1 + 1) & 0xFF;
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 < gUnknown_08402E40[v3 + 4] );
  }
  return v1;
}
