int sub_800EAAC()
{
  signed int v0; // r2@1
  signed int v1; // r2@3
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    *(_BYTE *)(v0 + 33554436) = *(_BYTE *)(v0 + 33720468);
    ++v0;
  }
  while ( v0 <= 6 );
  v1 = 0;
  do
  {
    *(_BYTE *)(v1 + 33554444) = *(_BYTE *)(v1 + 33721770);
    ++v1;
  }
  while ( v1 <= 17 );
  v200000B = v2028DBC;
  v200001E = v2028DBD;
  return v3;
}
