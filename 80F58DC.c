int __fastcall sub_80F58DC(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r0@1
  unsigned int v3; // r8@2
  int v4; // r4@2
  unsigned __int8 v5; // r3@4
  unsigned int i; // r2@6
  int v7; // r0@7
  unsigned int j; // r2@8
  int v9; // r0@10
  unsigned int k; // r2@12
  int v11; // r0@13
  int v13; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 2);
  if ( v2 >= *(_WORD *)(v1 + 6) )
  {
    v3 = *(_WORD *)(v1 + 6);
    v4 = v1 + 4;
    sub_80F5688(33591600, v1 + 4, v1, 0, 0);
  }
  else
  {
    v3 = v2;
    v4 = v1 + 4;
    sub_80F5688(33591600, v1, v1 + 4, 1u, 0);
  }
  sub_80F5688(33591600, v4, v1 + 8, 1u, 0);
  v5 = 0;
  if ( *(_WORD *)(v1 + 10) <= (unsigned int)*(_WORD *)(v1 + 14) )
    v5 = 1;
  sub_80F5688(33591600, v1 + 8, v1 + 12, v5, 33591864);
  for ( i = 56; i < v3; i = (i + 1) & 0xFFFF )
  {
    v7 = 4 * (i - 56);
    *(_WORD *)(v7 + 33591600) = 0;
    *(_WORD *)(v7 + 33591602) = 0;
  }
  for ( j = *(_WORD *)(v1 + 2); j <= v2009340; j = (j + 1) & 0xFFFF )
    *(_WORD *)(4 * (j - 56) + 0x2009130) = 155;
  v9 = v2009340;
  if ( v2009340 < (unsigned int)*(_WORD *)(v1 + 10) )
    v9 = *(_WORD *)(v1 + 10);
  for ( k = (v9 + 1) & 0xFFFF; k <= 0x79; k = (k + 1) & 0xFFFF )
  {
    v11 = 4 * (k - 56);
    *(_WORD *)(v11 + 33591600) = 0;
    *(_WORD *)(v11 + 33591602) = 0;
  }
  return v13;
}
