int sub_812476C()
{
  unsigned int v0; // r12@1
  int v1; // r0@1
  int v2; // r3@2
  int v4; // [sp+24h] [bp-4h]@0

  v0 = 0;
  v1 = v2039274;
  *(_BYTE *)(v2039274 + 30) = 0;
  *(_BYTE *)(v1 + 29) = 0;
  *(_BYTE *)(v2039274 + 31) = *(_BYTE *)(v2039274 + 8);
  *(_BYTE *)(v2039274 + 32) = *(_BYTE *)(v2039274 + 9);
  *(_BYTE *)(v2039274 + 25) = *(_BYTE *)(v2039274 + 25) + 2 - 32 * ((*(_BYTE *)(v2039274 + 25) + 2) >> 5);
  *(_BYTE *)(v2039274 + 24) += 2;
  v203927D = *(_BYTE *)(v2039274 + 26);
  do
  {
    v2 = v2039274;
    v203927B = *(_BYTE *)(v2039274 + 25);
    v203927C = v203927D + v0 - 32 * ((signed int)(v203927D + v0) >> 5);
    *(_WORD *)(v2 + 252 + 2 * v203927B + (v203927C << 6)) = *(_WORD *)(v2 + 34 + 2 * *(_BYTE *)(v2 + 24) + 24 * v0);
    v203927B = v203927B + 1 - 32 * ((v203927B + 1) >> 5);
    *(_WORD *)(v2 + 252 + 2 * v203927B + (v203927C << 6)) = *(_WORD *)(v2 + 34 + 2 * (*(_BYTE *)(v2 + 24) + 1) + 24 * v0);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 8 );
  v203927C = *(_BYTE *)(v2039274 + 26) + 23 - 32 * ((*(_BYTE *)(v2039274 + 26) + 23) >> 5);
  sub_8124E7C(v2039274 + 252, 0, *(_BYTE *)(v2039274 + 25), v203927C);
  if ( *(_BYTE *)(v2039274 + 24) == 10 )
  {
    *(_BYTE *)(v2039274 + 26) = *(_BYTE *)(v2039274 + 26) + 3 - 32 * ((*(_BYTE *)(v2039274 + 26) + 3) >> 5);
    *(_BYTE *)(v2039274 + 24) = -2;
    sub_812446C();
  }
  return v4;
}
