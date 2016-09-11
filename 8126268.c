int sub_8126268()
{
  int v0; // r2@1
  unsigned int v1; // r1@1

  v0 = 0;
  v1 = 0;
  do
    v0 += *(_BYTE *)(v1++ + 33722804);
  while ( v1 <= 0xB );
  return v0;
}
