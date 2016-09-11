int sub_80C04A0()
{
  unsigned int v0; // r3@1
  int v1; // r2@1
  char v2; // r1@2
  unsigned int v3; // r2@5
  int v4; // r5@6
  int v5; // r4@7
  int v6; // r4@7
  int v8; // [sp+8h] [bp-4h]@0

  v0 = 0;
  LOBYTE(v1) = 5;
  do
  {
    v2 = v1;
    if ( !*(_BYTE *)(36 * (char)v1 + 0x2027E6C) )
      v0 = ((v0 << 24) + 0x1000000) >> 24;
    v1 = ((char)v1 + 1) & 0xFF;
  }
  while ( (char)(v2 + 1) <= 23 );
  v3 = 0;
  if ( 5 - (char)v0 > 0 )
  {
    v4 = 5 - (char)v0;
    do
    {
      v5 = (char)v3;
      sub_80BF55C(33717868, ((v3 << 24) + 83886080) >> 24);
      v6 = (v5 + 1) << 24;
      v3 = (unsigned int)v6 >> 24;
    }
    while ( v6 >> 24 < v4 );
  }
  return v8;
}
