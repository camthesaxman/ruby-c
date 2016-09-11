unsigned int __fastcall CreateTask(int a1, char a2)
{
  unsigned int v2; // r6@1
  int *v3; // r4@2

  v2 = 0;
  do
  {
    v3 = &dword_3004B20[10 * v2];
    if ( !*((_BYTE *)v3 + 4) )
    {
      *v3 = a1;
      *((_BYTE *)v3 + 7) = a2;
      InsertTask(v2);
      memset(&byte_3004B28[40 * v2], 0, 32);
      *((_BYTE *)v3 + 4) = 1;
      return v2;
    }
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 0xF );
  return 0;
}
