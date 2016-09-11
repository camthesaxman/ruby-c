int atk8D_setloopcounter()
{
  unsigned int v0; // r0@3
  int v2; // [sp+8h] [bp-4h]@0

  if ( *(_BYTE *)(v2024C10 + 1) )
  {
    v2024C0E = *(_BYTE *)(v2024C10 + 1);
  }
  else
  {
    v0 = Random(v2024C10) & 3;
    v2024C0E = v0;
    if ( v0 > 1 )
      v0 = Random(v0) & 3;
    v2024C0E = v0 + 2;
  }
  v2024C10 += 2;
  return v2;
}
