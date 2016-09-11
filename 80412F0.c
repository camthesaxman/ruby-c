int __fastcall daycare_count_pokemon(int a1, int a2, _BYTE *a3)
{
  int v3; // r6@1
  int v4; // r5@1
  unsigned int v5; // r4@1

  v3 = a1;
  v4 = 0;
  v5 = 0;
  do
  {
    if ( GetBoxMonData((unsigned int *)(v3 + 80 * v5), 11, a3) )
      v4 = (v4 + 1) & 0xFF;
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 1 );
  return v4;
}
