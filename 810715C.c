int sub_810715C()
{
  unsigned int v0; // r4@1
  signed int v1; // r4@3
  _BYTE *v2; // r0@3
  int v3; // r7@5
  signed int v4; // r4@5
  _BYTE *v5; // r5@5
  int *v6; // r6@5
  int v8; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
    *(_BYTE *)(v0++ + 33646592) = 0;
  while ( v0 <= 0x1B );
  v1 = 3;
  v2 = (_BYTE *)33646599;
  do
  {
    *v2-- = 100;
    --v1;
  }
  while ( v1 >= 0 );
  v3 = (unsigned __int8)sub_8015A98(v2024A60, 0, 255);
  v4 = 0;
  v5 = (_BYTE *)33646596;
  v6 = gBitTable;
  do
  {
    if ( *v6 & v3 )
      *v5 = 0;
    (v5++)[20] = 100 - (Random() & 0xF);
    ++v6;
    ++v4;
  }
  while ( v4 <= 3 );
  v2016C20 = 0;
  v2024C07 = v2024A60;
  if ( v20239F8 & 1 )
  {
    v2024C08 = Random() & 2;
    if ( v2024C0C & gBitTable[v2024C08] )
      v2024C08 ^= 2u;
  }
  else
  {
    v2024C08 = v2024A60 ^ 1;
  }
  if ( v20239F8 & 0x80 )
  {
    v201680C = 0x40000000;
  }
  else if ( v20239F8 & 0x400 )
  {
    v201680C = 0x20000000;
  }
  else if ( v20239F8 & 0x10 )
  {
    v201680C = 2147483648;
  }
  else
  {
    v201680C = *((_DWORD *)&unk_81F0518 + 10 * v202FF5E);
  }
  return v8;
}
