int __fastcall sub_80A7CA0(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  int v4; // r4@1
  int v5; // r7@1
  unsigned int v6; // r5@2
  unsigned __int8 v7; // r8@2
  int v9; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  memset(a2, 0, 2048);
  v4 = v3 + 256;
  v5 = 0;
  do
  {
    v4 += 32;
    v6 = 0;
    v7 = v5 + 1;
    do
    {
      memcpy(v4, v2, 32);
      v4 += 32;
      v2 += 32;
      v6 = (v6 + 1) & 0xFF;
    }
    while ( v6 <= 5 );
    if ( v5 != 5 )
      v4 += 32;
    v5 = (unsigned __int8)(v5 + 1);
  }
  while ( v7 <= 5u );
  return v9;
}
