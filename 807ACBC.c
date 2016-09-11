signed int __fastcall FuncIsActiveTask(int a1)
{
  unsigned int v1; // r2@1
  int *v2; // r1@2

  v1 = 0;
  do
  {
    v2 = &dword_3004B20[10 * v1];
    if ( *((_BYTE *)v2 + 4) == 1 && *v2 == a1 )
      return 1;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0xF );
  return 0;
}
