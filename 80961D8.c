int sub_80961D8()
{
  unsigned int v0; // r5@1
  unsigned int v1; // r4@2
  unsigned int v2; // r5@5
  char *v3; // r0@6
  unsigned int v4; // r5@7
  int v6; // [sp+10h] [bp-4h]@0

  v20300A0 = 0;
  v0 = 0;
  do
  {
    v1 = 0;
    do
    {
      ZeroBoxMonData(2400 * v0 + 80 * v1 + 33751204);
      v1 = (v1 + 1) & 0xFFFF;
    }
    while ( v1 <= 0x1D );
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0xD );
  v2 = 0;
  do
  {
    v3 = StringCopy((_BYTE *)(9 * v2 + 33784804), &gUnknown_08410C54);
    ConvertIntToDecimalStringN(v3, v2 + 1, 0, 2);
    v2 = (unsigned __int16)(v2 + 1);
  }
  while ( v2 <= 0xD );
  v4 = 0;
  do
  {
    *(_BYTE *)(v4 + 33784930) = v4 & 3;
    v4 = (v4 + 1) & 0xFFFF;
  }
  while ( v4 <= 0xD );
  return v6;
}
