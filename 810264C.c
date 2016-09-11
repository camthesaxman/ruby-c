int __fastcall sub_810264C(unsigned __int8 a1)
{
  int v1; // r2@1
  _BYTE *v2; // r0@2

  v1 = a1;
  if ( v2000003 )
    v2 = &gUnknown_083ECDAC;
  else
    v2 = &gUnknown_083ECD46;
  return *(&v2[17 * v1] + v2000002);
}
