int __fastcall random_number_in_range(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r5@2

  v1 = a1;
  v2 = *(_BYTE *)(a1 + 1);
  if ( v2 < *(_BYTE *)v1 )
  {
    v3 = *(_BYTE *)(v1 + 1);
    v2 = *(_BYTE *)v1;
  }
  else
  {
    v3 = *(_BYTE *)v1;
  }
  return (v3 + ((unsigned __int16)Random() % (signed int)((v2 - v3 + 1) & 0xFF) & 0xFF)) & 0xFF;
}
