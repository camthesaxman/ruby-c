signed int sub_810D32C()
{
  int v0; // r2@1
  unsigned int v1; // r6@1
  signed int v2; // r5@1

  v1 = (unsigned int)sub_810D280() >> 16;
  v2 = 0;
  do
  {
    if ( GetMonData((int)&dword_3004360[25 * v2], 11, v0)
      && (unsigned __int16)GetMonData((int)&dword_3004360[25 * v2], 0, v0) == v1 )
    {
      return 1;
    }
    ++v2;
  }
  while ( v2 <= 5 );
  return 0;
}
