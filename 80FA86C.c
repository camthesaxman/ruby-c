int __fastcall sub_80FA86C(__int16 a1, int a2)
{
  unsigned int v2; // r3@1
  void *v3; // r2@1

  a2 = (unsigned __int16)a2;
  v2 = 0;
  v3 = &gUnknown_083E5A20;
  do
  {
    if ( *(_BYTE *)v3 == a1 && *((_BYTE *)v3 + 1) == a2 )
      return v2 + 1;
    v3 = (char *)v3 + 8;
    ++v2;
  }
  while ( v2 <= 0x15 );
  return 0;
}
