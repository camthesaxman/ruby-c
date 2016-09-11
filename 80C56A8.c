signed int __fastcall sub_80C56A8(int a1, int a2, int a3)
{
  unsigned int *v3; // r4@1
  signed int v4; // r5@1

  v3 = dword_3004360;
  v4 = 0;
  do
  {
    if ( sub_80C5684((int)v3, a2, a3) && GetMonData((int)v3, 57, a3) )
      return 0;
    ++v4;
    v3 += 25;
  }
  while ( v4 <= 5 );
  return 1;
}
