int __fastcall sub_8095B6C(int a1, int a2, int a3)
{
  unsigned int v3; // r5@1
  int v4; // r6@1

  v3 = 0;
  v4 = 0;
  do
  {
    if ( GetMonData((int)&dword_3004360[25 * v3], 11, a3) && !GetMonData((int)&dword_3004360[25 * v3], 45, a3) )
      v4 = (v4 + 1) & 0xFFFF;
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 <= 5 );
  return (unsigned __int8)v4;
}
