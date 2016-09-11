unsigned int __fastcall sub_81370A4(unsigned __int8 a1, int a2, int a3)
{
  int v3; // r5@1
  unsigned int v4; // r4@1

  v3 = a1;
  v4 = 0;
  do
  {
    if ( !GetMonData((int)&dword_3004360[25 * v4], 45, a3) )
    {
      if ( !v3 )
        return v4;
      v3 = (v3 - 1) & 0xFF;
    }
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 5 );
  return 0;
}
