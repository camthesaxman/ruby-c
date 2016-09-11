int __fastcall sub_8125C10(int *a1, int a2)
{
  int *v2; // r4@1
  unsigned int v3; // r2@1
  unsigned int v4; // r3@1
  unsigned int v5; // r1@1
  int v6; // r0@2

  v2 = a1;
  v3 = 0;
  v4 = 0;
  v5 = (unsigned int)(a2 << 16) >> 18;
  if ( v5 > 0 )
  {
    do
    {
      v6 = *v2;
      ++v2;
      v3 += v6;
      v4 = (v4 + 1) & 0xFFFF;
    }
    while ( v4 < v5 );
  }
  return ((v3 >> 16) + v3) & 0xFFFF;
}
