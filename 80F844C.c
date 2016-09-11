char *__fastcall sub_80F844C(int a1)
{
  signed int v1; // r2@1
  char *v2; // r1@1

  v1 = 0;
  v2 = &gUnknown_083E53E0;
  do
  {
    if ( (unsigned __int8)*v2 == a1 )
      return v2;
    v2 += 16;
    ++v1;
  }
  while ( v1 <= 35 );
  return (char *)&gUnknown_083E5610;
}
