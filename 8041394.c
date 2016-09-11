signed int __fastcall daycare_empty_slot(int a1, int a2, _BYTE *a3)
{
  int v3; // r5@1
  unsigned int v4; // r4@1

  v3 = a1;
  v4 = 0;
  do
  {
    if ( !GetBoxMonData((unsigned int *)(v3 + 80 * v4), 11, a3) )
      return (char)v4;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 1 );
  return -1;
}
