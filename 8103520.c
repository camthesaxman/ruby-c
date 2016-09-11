signed int __fastcall sub_8103520(char *a1)
{
  char *v1; // r1@1
  int v2; // r0@1
  char v3; // r0@2

  v1 = a1;
  v2 = (unsigned __int8)*a1;
  if ( v2 )
  {
    if ( v2 != 1 )
      return 0;
    v3 = 0;
  }
  else
  {
    v3 = 1;
  }
  *v1 = v3;
  return 1;
}
