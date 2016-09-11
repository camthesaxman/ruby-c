int sub_80F83F8()
{
  signed int v0; // r1@1
  signed int v1; // r2@1
  int v3; // [sp+4h] [bp-4h]@0

  v20284C8 = 3;
  v20284C9 = 0;
  v0 = 33719500;
  v1 = 3;
  do
  {
    *(_BYTE *)v0 = 0;
    *(_BYTE *)(v0 + 4);
    *(_BYTE *)(v0++ + 4) = -1;
    --v1;
  }
  while ( v1 >= 0 );
  return v3;
}
