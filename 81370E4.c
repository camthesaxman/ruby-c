int __fastcall sub_81370E4(unsigned __int8 a1, int a2, int a3)
{
  unsigned int v3; // r5@1
  unsigned int v4; // r4@1
  int i; // r6@1

  v3 = a1;
  v4 = 0;
  for ( i = 0; v4 < v3; v4 = (v4 + 1) & 0xFF )
  {
    if ( GetMonData((int)&dword_3004360[25 * v4], 45, a3) )
      i = (i + 1) & 0xFF;
  }
  return (v3 - i) & 0xFF;
}
