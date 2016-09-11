signed int __fastcall FindTaskIdByFunc(int a1)
{
  signed int v1; // r2@1
  int *v2; // r1@1

  v1 = 0;
  v2 = dword_3004B20;
  do
  {
    if ( *((_BYTE *)v2 + 4) == 1 && *v2 == a1 )
      return (unsigned __int8)v1;
    v2 += 10;
    ++v1;
  }
  while ( v1 <= 15 );
  return 255;
}
