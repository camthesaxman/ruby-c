int sub_812446C()
{
  int v0; // r3@1
  int v1; // r9@1
  int v2; // r12@1
  unsigned int v3; // r6@2
  int v4; // r5@3
  int v5; // r4@3
  int v6; // r1@3
  unsigned __int8 v8; // [sp+0h] [bp-28h]@2
  int v9; // [sp+24h] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  v2 = 36 * (*(_BYTE *)(v2039274 + 27) + 2) & 0xFF;
  do
  {
    v3 = 0;
    v8 = v0 + 1;
    do
    {
      v4 = v2039274;
      v5 = v2039274 + 34;
      v6 = v2;
      v2 = (v2 + 1) & 0xFF;
      *(_WORD *)(v2039274 + 34 + 2 * v3 + 24 * v0) = *(_WORD *)(2 * v6 + 0x2019000);
      *(_WORD *)(v5 + 2 * v3 + 24 * (v0 + 3)) = *(_WORD *)(2 * v1 + 0x2019000);
      *(_WORD *)(v5 + 2 * v3 + 24 * (v0 + 6)) = *(_WORD *)(2 * v1 + 0x2019048);
      v1 = (v1 + 1) & 0xFF;
      v3 = (v3 + 1) & 0xFF;
    }
    while ( v3 <= 0xB );
    v0 = (unsigned __int8)(v0 + 1);
  }
  while ( v8 <= 2u );
  *(_BYTE *)(v4 + 27) = (*(_BYTE *)(v4 + 27) + 1) % 3;
  return v9;
}
