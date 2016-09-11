int __fastcall sub_80F5A1C(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r0@1
  unsigned int v3; // r7@2
  int v4; // r4@2
  unsigned int i; // r2@4
  int v6; // r0@5
  unsigned int j; // r2@6
  unsigned __int16 v8; // r0@8
  unsigned int k; // r2@10
  int v10; // r0@11
  int v12; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 2);
  if ( v2 >= *(_WORD *)(v1 + 18) )
  {
    v3 = *(_WORD *)(v1 + 18);
    v4 = v1 + 16;
    sub_80F5688(33591864, v1 + 16, v1, 1u, 0);
  }
  else
  {
    v3 = v2;
    v4 = v1 + 16;
    sub_80F5688(33591864, v1, v1 + 16, 0, 0);
  }
  sub_80F5688(33591864, v4, v1 + 12, 0, 0);
  for ( i = 56; i < v3; i = (i + 1) & 0xFFFF )
  {
    v6 = 4 * (i - 56);
    *(_WORD *)(v6 + 33591864) = 0;
    *(_WORD *)(v6 + 33591866) = 0;
  }
  for ( j = *(_WORD *)(v1 + 2); j <= v2009340; j = (j + 1) & 0xFFFF )
    *(_WORD *)(4 * (j - 56) + 0x200923A) = 155;
  v8 = v2009340;
  if ( v2009340 < *(_WORD *)(v1 + 14) + 1 )
    v8 = *(_WORD *)(v1 + 14) + 1;
  for ( k = v8; k <= 0x79; k = (k + 1) & 0xFFFF )
  {
    v10 = 4 * (k - 56);
    *(_WORD *)(v10 + 33591864) = 0;
    *(_WORD *)(v10 + 33591866) = 0;
  }
  return v12;
}
