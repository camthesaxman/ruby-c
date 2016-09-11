int __fastcall sub_80CF814(int a1)
{
  int v1; // r2@1
  int *v2; // r4@1
  __int16 v3; // r0@2
  int v4; // r3@4
  int v5; // r0@5
  unsigned int v6; // r0@8
  int v7; // r0@10
  int v9; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * *(_WORD *)(a1 + 60)];
  if ( *(_WORD *)(a1 + 46) <= (signed int)*((_WORD *)v2 + 9) )
  {
    *(_WORD *)(a1 + 56) -= *(_WORD *)(a1 + 52);
    v3 = *(_WORD *)(a1 + 58) - *(_WORD *)(a1 + 54);
  }
  else
  {
    *(_WORD *)(a1 + 56) += *(_WORD *)(a1 + 52);
    v3 = *(_WORD *)(a1 + 54) + *(_WORD *)(a1 + 58);
  }
  *(_WORD *)(v1 + 58) = v3;
  v4 = *(_WORD *)(v1 + 56) + *(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 48) = v4;
  *(_WORD *)(v1 + 50) += *(_WORD *)(v1 + 58);
  if ( *((_WORD *)v2 + 11) & 1 )
    v5 = -((unsigned int)(v4 << 16) >> 24);
  else
    v5 = (unsigned int)(v4 << 16) >> 24;
  *(_WORD *)(v1 + 36) = v5;
  if ( *((_WORD *)v2 + 12) & 1 )
    v6 = -((unsigned int)*(_WORD *)(v1 + 50) >> 8);
  else
    v6 = (unsigned int)*(_WORD *)(v1 + 50) >> 8;
  *(_WORD *)(v1 + 38) = v6;
  v7 = *(_WORD *)(v1 + 46);
  *(_WORD *)(v1 + 46) = v7 - 1;
  if ( v7 << 16 <= 0 )
  {
    *(_WORD *)(v1 + 46) = 30;
    *(_DWORD *)(v1 + 28) = sub_80CF7E0;
  }
  return v9;
}
